// UserService.h: interface for the UserService class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_USERSERVICE_H__36126FED_DD2F_4589_9D49_66EAD155DC2C__INCLUDED_)
#define AFX_USERSERVICE_H__36126FED_DD2F_4589_9D49_66EAD155DC2C__INCLUDED_

#include "MySQLMan.h"
#include "User.h";

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class UserService  
{
private:
	CMySQLMan cMySQLMan;

public:
	UserService();
	virtual ~UserService();
	bool Login(CString sid, CString password);
};

#endif // !defined(AFX_USERSERVICE_H__36126FED_DD2F_4589_9D49_66EAD155DC2C__INCLUDED_)
