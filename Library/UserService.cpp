// UserService.cpp: implementation of the UserService class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "library.h"
#include "UserService.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

UserService* UserService::userService = NULL;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

UserService::UserService()
{
	cMySQLMan = CMySQLMan::GetInstance();
}

UserService::~UserService()
{

}

UserService* UserService::GetInstance()
{
	if(UserService::userService == NULL)
		UserService::userService = new UserService();

	return UserService::userService;
}

bool UserService::IsUserType()
{
	return this->userType;
}

bool UserService::Login(CString sid, CString password)
{
	bool status = false;

	CString sql;
	sql.Format("select * from user where sid=%s", sid);
	MYSQL_RES *res = cMySQLMan->SelectRecord(sql);
	MYSQL_ROW record = cMySQLMan->GetRecord(res);

	if(record && record[3] == password)
		status = true;

	if(status && record[5] == 0)
		this->userType = true;
	else
		this->userType = false;

	cMySQLMan->FreeRecord(res);

	return status;
}

vector<User> UserService::GetUsers()
{
	vector<User> users;

	CString sql;
	sql.Format("select * from user");
	MYSQL_RES *res = cMySQLMan->SelectRecord(sql);
	MYSQL_ROW record;	

	while(record = cMySQLMan->GetRecord(res))
	{
		User user;
		user.SetSid(record[1]);
		user.SetName(record[2]);
		user.SetSex(_ttoi(record[4]));
		user.SetIsAdmin(_ttoi(record[5]) > 0);

		users.push_back(user);
	}

	cMySQLMan->FreeRecord(res);

	return users;
}
