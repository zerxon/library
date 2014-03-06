// LibraryView.h : interface of the CLibraryView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_LIBRARYVIEW_H__E2F9040E_4BFD_41C1_8C04_292CE652ADA8__INCLUDED_)
#define AFX_LIBRARYVIEW_H__E2F9040E_4BFD_41C1_8C04_292CE652ADA8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CLibraryView : public CView
{
protected: // create from serialization only
	CLibraryView();
	DECLARE_DYNCREATE(CLibraryView)

// Attributes
public:
	CLibraryDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLibraryView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CLibraryView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CLibraryView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in LibraryView.cpp
inline CLibraryDoc* CLibraryView::GetDocument()
   { return (CLibraryDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LIBRARYVIEW_H__E2F9040E_4BFD_41C1_8C04_292CE652ADA8__INCLUDED_)
