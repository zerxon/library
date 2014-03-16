; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CUserListDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "library.h"
LastPage=0

ClassCount=9
Class1=CLibraryApp
Class2=CAboutDlg
Class3=CLibraryDoc
Class4=CLibraryView
Class5=CLoginDlg
Class6=CMainFrame

ResourceCount=6
Resource1=IDD_USERLIST
Resource2=IDD_USEREDIT
Class7=CTestDlg
Resource3=IDD_USERADD
Class8=CUserListDlg
Resource4=IDD_ABOUTBOX
Class9=CUserEditDlg
Resource5=IDD_LOGIN
Resource6=IDR_MAINFRAME

[CLS:CLibraryApp]
Type=0
BaseClass=CWinApp
HeaderFile=Library.h
ImplementationFile=Library.cpp
LastObject=CLibraryApp

[CLS:CAboutDlg]
Type=0
BaseClass=CDialog
HeaderFile=Library.cpp
ImplementationFile=Library.cpp
LastObject=CAboutDlg

[CLS:CLibraryDoc]
Type=0
BaseClass=CDocument
HeaderFile=LibraryDoc.h
ImplementationFile=LibraryDoc.cpp

[CLS:CLibraryView]
Type=0
BaseClass=CView
HeaderFile=LibraryView.h
ImplementationFile=LibraryView.cpp

[CLS:CLoginDlg]
Type=0
BaseClass=CDialog
HeaderFile=LoginDlg.h
ImplementationFile=LoginDlg.cpp
LastObject=CLoginDlg
Filter=D
VirtualFilter=dWC

[CLS:CMainFrame]
Type=0
BaseClass=CFrameWnd
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
VirtualFilter=fWC

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_USER_LIST
Command2=ID_APP_ABOUT
CommandCount=2

[ACL:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

[DLG:IDD_LOGIN]
Type=1
Class=CLoginDlg
ControlCount=6
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_EDIT_SID,edit,1350631552
Control6=IDC_EDIT_PASSWORD,edit,1350631584

[CLS:CTestDlg]
Type=0
HeaderFile=TestDlg.h
ImplementationFile=TestDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=CTestDlg

[DLG:IDD_USERLIST]
Type=1
Class=CUserListDlg
ControlCount=5
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_USERLIST,SysListView32,1350631425
Control4=IDC_EDIT,button,1342242816
Control5=IDC_DELETE,button,1342242816

[CLS:CUserListDlg]
Type=0
HeaderFile=UserListDlg.h
ImplementationFile=UserListDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_DELETE
VirtualFilter=dWC

[DLG:IDD_USEREDIT]
Type=1
Class=CUserEditDlg
ControlCount=12
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EDIT_SID,edit,1350633600
Control5=IDC_STATIC,static,1342308352
Control6=IDC_EDIT_NAME,edit,1350631552
Control7=IDC_STATIC,button,1342177287
Control8=IDC_RADIO_SEX,button,1342373897
Control9=IDC_RADIO_FEMALE,button,1342242825
Control10=IDC_STATIC,button,1342177287
Control11=IDC_RADIO_ISADMIN,button,1342373897
Control12=IDC_RADIO_NOTADMIN,button,1342242825

[CLS:CUserEditDlg]
Type=0
HeaderFile=UserEditDlg.h
ImplementationFile=UserEditDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=IDOK
VirtualFilter=dWC

[DLG:IDD_USERADD]
Type=1
Class=?
ControlCount=14
Control1=IDOK2,button,1342242817
Control2=IDCANCEL2,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EDIT_SID,edit,1350631552
Control5=IDC_STATIC,static,1342308352
Control6=IDC_EDIT_NAME,edit,1350631552
Control7=IDC_STATIC,button,1342177287
Control8=IDC_RADIO_SEX,button,1342373897
Control9=IDC_RADIO_FEMALE,button,1342242825
Control10=IDC_STATIC,button,1342177287
Control11=IDC_RADIO_ISADMIN,button,1342373897
Control12=IDC_RADIO_NOTADMIN,button,1342242825
Control13=IDC_STATIC,static,1342308352
Control14=IDC_PASSWORD,edit,1350631552

