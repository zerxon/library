// LoginDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Library.h"
#include "LoginDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CLoginDlg dialog


CLoginDlg::CLoginDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CLoginDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CLoginDlg)
	m_password = _T("");
	m_sid = _T("");
	//}}AFX_DATA_INIT
}


void CLoginDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CLoginDlg)
	DDX_Text(pDX, IDC_EDIT_PASSWORD, m_password);
	DDX_Text(pDX, IDC_EDIT_SID, m_sid);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CLoginDlg, CDialog)
	//{{AFX_MSG_MAP(CLoginDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLoginDlg message handlers

BOOL CLoginDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	/*
	CMySQLMan *cMySQLMan = CMySQLMan::GetInstance();
	if(cMySQLMan->ConnectDB()) {
		cMySQLMan->SetCharset();
		MYSQL_ROW record;
		MYSQL_RES *res = cMySQLMan->SelectRecord("select * from user");
		while(record = cMySQLMan->GetRecord(res))   
		{   
		  AfxMessageBox(record[1]);
		}

		cMySQLMan->FreeRecord(res);
	}
	*/
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CLoginDlg::OnOK() 
{
	// TODO: Add extra validation here
	UpdateData();

	m_sid.TrimLeft();
	m_sid.TrimRight();

	m_password.TrimLeft();
	m_password.TrimRight();

	if(m_sid.GetLength()==0) 
	{
		AfxMessageBox("账号不能为空");
	}
	else if(m_password.GetLength()==0) 
	{
		AfxMessageBox("密码不能为空");
	}
	else
	{
		if(userService.Login(m_sid, m_password)) 
		{
			if(userService.IsUserType)
				this->userType = true;
			else
				this->userType = false;

			CDialog::OnOK();
		}
		else
		{
			AfxMessageBox("账户名或者密码错误");
		}
	}

}

bool CLoginDlg::IsUserType()
{
	return this->userType;
}
