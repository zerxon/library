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
	CMySQLMan *cMySQLMan;
	bool userType;
	static UserService* userService;

public:
	static UserService* GetInstance();
	UserService();
	virtual ~UserService();
	bool IsUserType();
	bool Login(CString sid, CString password);
	vector<User> GetUsers();
	User GetUserBySid(CString sid);
	bool AddUser(User user);
	bool UpdateUser(User user);
	bool DeleteUserBySid(CString sid);
};

#endif // !defined(AFX_USERSERVICE_H__36126FED_DD2F_4589_9D49_66EAD155DC2C__INCLUDED_)
