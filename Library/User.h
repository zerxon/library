// User.h: interface for the User class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_USER_H__43407E7E_A48A_40FC_9FB5_0CF6D31E1097__INCLUDED_)
#define AFX_USER_H__43407E7E_A48A_40FC_9FB5_0CF6D31E1097__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class User  
{
private:
	CString name;

public:
	User();
	virtual ~User();
	void SetName(CString name);
	CString GetName();
};

#endif // !defined(AFX_USER_H__43407E7E_A48A_40FC_9FB5_0CF6D31E1097__INCLUDED_)
