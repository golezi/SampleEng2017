// sampleEng2017.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"


//thread t1(RunServer);


#include "sampleEng2017.h"
#include "sampleEngDlg.h"

#include "actutltype_rpc.grpc.pb.h"
#include <thread>


using std::thread;
CSampleEngDlg* g_dlg=NULL;
#include "rpc.hpp"
thread t1(RunServer);
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSampleEngApp

BEGIN_MESSAGE_MAP(CSampleEngApp, CWinApp)
	//{{AFX_MSG_MAP(CSampleEngApp)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSampleEngApp construction

CSampleEngApp::CSampleEngApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CSampleEngApp object

CSampleEngApp theApp;

/////////////////////////////////////////////////////////////////////////////
// CSampleEngApp initialization

BOOL CSampleEngApp::InitInstance()
{
	AfxEnableControlContainer();

	// Standard initialization
	// If you are not using these features and wish to reduce the size
	//  of your final executable, you should remove from the following
	//  the specific initialization routines you do not need.

	CSampleEngDlg dlg;
	m_pMainWnd = &dlg;
	g_dlg = &dlg;	
	int nResponse = dlg.DoModal();
	
	if (nResponse == IDOK)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with OK
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with Cancel
	}

	// Since the dialog has been closed, return FALSE so that we exit the
	//  application, rather than start the application's message pump.
	return FALSE;
}
