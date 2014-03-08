// UserListDlg.cpp : implementation file
//

#include "stdafx.h"
#include "library.h"
#include "UserListDlg.h"

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
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CUserListDlg message handlers

BOOL CUserListDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	this->initUserList();
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CUserListDlg::initUserList()
{
	m_userList.SetExtendedStyle(LVS_EX_GRIDLINES|LVS_EX_FULLROWSELECT|LVS_EX_ONECLICKACTIVATE);
	m_userList.InsertColumn(0,"学号",LVCFMT_LEFT,40);
	m_userList.SetColumnWidth(0,130); //设置宽度
	m_userList.InsertColumn(1,"姓名",LVCFMT_LEFT,40);
	m_userList.SetColumnWidth(1,100);
	m_userList.InsertColumn(2,"性别",LVCFMT_LEFT,40);
	m_userList.SetColumnWidth(2,50);
	m_userList.InsertColumn(3,"管理员",LVCFMT_LEFT,40);
	m_userList.SetColumnWidth(3,80);

	vector<User> users = userService->GetUsers();

	int index = 0;
	for(vector<User>::iterator i=users.begin();i!=users.end();i++)
	{
		User user = *i;
		m_userList.InsertItem(index,user.GetSid());
		m_userList.SetItemText(index,1,user.GetName());
		m_userList.SetItemText(index,2,user.GetSex());

		CString strIsAdmin = "否";
		if(user.GetIsAdmin())
			strIsAdmin = "是";

		m_userList.SetItemText(index,3,strIsAdmin);

		index++;
	}
}
