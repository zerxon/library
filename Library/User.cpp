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
