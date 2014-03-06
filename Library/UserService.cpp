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

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

UserService::UserService()
{
	cMySQLMan.ConnectDB();
}

UserService::~UserService()
{

}

bool UserService::Login(CString sid, CString password)
{
	bool status = false;

	CString sql;
	sql.Format("select * from user where sid=%s", sid);
	MYSQL_RES *res = cMySQLMan.SelectRecord(sql);
	MYSQL_ROW record = cMySQLMan.GetRecord(res);

	if(record && record[3] == password)
		status = true;

	return status;
}
