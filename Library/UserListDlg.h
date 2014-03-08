#if !defined(AFX_USERLISTDLG_H__A756AC26_48D7_4742_8E58_23BFC775E988__INCLUDED_)
#define AFX_USERLISTDLG_H__A756AC26_48D7_4742_8E58_23BFC775E988__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// UserListDlg.h : header file
//

#include "User.h"
#include "UserService.h"

/////////////////////////////////////////////////////////////////////////////
// CUserListDlg dialog

class CUserListDlg : public CDialog
{
// Construction
public:
	void initUserList();
	CUserListDlg(CWnd* pParent = NULL);   // standard constructor

private:
	UserService *userService;

// Dialog Data
	//{{AFX_DATA(CUserListDlg)
	enum { IDD = IDD_USERLIST };
	CListCtrl	m_userList;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CUserListDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CUserListDlg)
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_USERLISTDLG_H__A756AC26_48D7_4742_8E58_23BFC775E988__INCLUDED_)
