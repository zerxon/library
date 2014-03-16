// UserListDlg.cpp : implementation file
//

#include "stdafx.h"
#include "library.h"
#include "UserListDlg.h"
#include "UserEditDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CUserListDlg dialog


CUserListDlg::CUserListDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CUserListDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CUserListDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT

	userService = UserService::GetInstance();
}


void CUserListDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CUserListDlg)
	DDX_Control(pDX, IDC_USERLIST, m_userList);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CUserListDlg, CDialog)
	//{{AFX_MSG_MAP(CUserListDlg)
	ON_BN_CLICKED(IDC_EDIT, OnEdit)
	ON_BN_CLICKED(IDC_DELETE, OnDelete)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CUserListDlg message handlers

BOOL CUserListDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	this->initUserList();
	this->refreshData();
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CUserListDlg::initUserList()
{
	m_userList.SetExtendedStyle(LVS_EX_GRIDLINES|LVS_EX_FULLROWSELECT|LVS_EX_ONECLICKACTIVATE);
	m_userList.InsertColumn(0,"学号",LVCFMT_LEFT,40);
	m_userList.InsertColumn(1,"姓名",LVCFMT_LEFT,40);
	m_userList.InsertColumn(2,"性别",LVCFMT_LEFT,40);
	m_userList.InsertColumn(3,"管理员",LVCFMT_LEFT,40);

	CRect rect;
	m_userList.GetClientRect(rect);
	for(int i=0;i<4;i++) {
		m_userList.SetColumnWidth(i, rect.Width()/4); //设置宽度
	}
}

void CUserListDlg::refreshData()
{
	m_userList.DeleteAllItems();

	vector<User> users = userService->GetUsers();

	int index = 0;
	for(vector<User>::iterator i=users.begin();i!=users.end();i++)
	{
		User user = *i;
		m_userList.InsertItem(index,user.GetSid());
		m_userList.SetItemText(index,1,user.GetName());

		if(user.GetSex() == 0)
			m_userList.SetItemText(index,2,"男");
		else
			m_userList.SetItemText(index,2,"女");

		CString strIsAdmin = "否";
		if(user.GetIsAdmin())
			strIsAdmin = "是";

		m_userList.SetItemText(index,3,strIsAdmin);

		index++;
	}
}

void CUserListDlg::OnEdit() 
{
	int nItem = m_userList.GetSelectionMark();

	if(nItem == -1) {
		AfxMessageBox("请选中要修改的行");
		return;
	}

	CString sid = m_userList.GetItemText(nItem, 0);
	CUserEditDlg cUserEditDlg;
	cUserEditDlg.sid = sid;
	cUserEditDlg.DoModal();
	this->refreshData();
}

void CUserListDlg::OnDelete() 
{
	int nItem = m_userList.GetSelectionMark();

	if(nItem == -1) {
		AfxMessageBox("请选中要删除的行");
		return;
	}

	 // 显示消息对话框   
    INT_PTR nRes = MessageBox(_T("确定要删除该行？"), _T("删除用户"), MB_OKCANCEL | MB_ICONQUESTION);   
    // 判断消息对话框返回值。如果为IDCANCEL就return，否则继续向下执行   
    if (IDCANCEL == nRes)   
        return;

	CString sid = m_userList.GetItemText(nItem, 0);
	bool status = userService->DeleteUserBySid(sid);

	if(status)
		AfxMessageBox("删除成功!");
	else
		AfxMessageBox("删除失败!");

	this->refreshData();
}
