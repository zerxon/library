// LibraryDoc.h : interface of the CLibraryDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_LIBRARYDOC_H__DBFFC4A3_FB8A_413A_9BF4_B59197F37107__INCLUDED_)
#define AFX_LIBRARYDOC_H__DBFFC4A3_FB8A_413A_9BF4_B59197F37107__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CLibraryDoc : public CDocument
{
protected: // create from serialization only
	CLibraryDoc();
	DECLARE_DYNCREATE(CLibraryDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLibraryDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CLibraryDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CLibraryDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LIBRARYDOC_H__DBFFC4A3_FB8A_413A_9BF4_B59197F37107__INCLUDED_)
