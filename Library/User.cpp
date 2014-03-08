// User.cpp: implementation of the User class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "library.h"
#include "User.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

User::User()
{

}

User::~User()
{

}

void User::SetName(CString name)
{
	this->name = name;
}

CString User::GetName()
{
	return this->name;
}

void User::SetSid(CString sid)
{
	this->sid = sid;
}

CString User::GetSid()
{
	return this->sid;
}

void User::SetPassword(CString password)
{
	this->password = password;
}

CString User::GetPassword()
{
	return this->password;
}

void User::SetSex(int sex)
{
	this->sex = sex;
}

CString User::GetSex()
{
	CString strSex = "ÄĞ";

	if(this->sex == 1)
		strSex = "Å®";

	return strSex;
}

void User::SetIsAdmin(bool isAdmin)
{
	this->isAdmin = isAdmin;
}

bool User::GetIsAdmin()
{
	return this->isAdmin;
}

