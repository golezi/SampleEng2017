// sampleEng2017.h : main header file for the SAMPLEENG application
//

#if !defined(AFX_SAMPLEENG_H__02DFA8A4_E9DE_11D3_9D2F_0020AFCF1657__INCLUDED_)
#define AFX_SAMPLEENG_H__02DFA8A4_E9DE_11D3_9D2F_0020AFCF1657__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CSampleEngApp:
// See sampleEng2017.cpp for the implementation of this class
//

class CSampleEngApp : public CWinApp
{
public:
	CSampleEngApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSampleEngApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CSampleEngApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SAMPLEENG_H__02DFA8A4_E9DE_11D3_9D2F_0020AFCF1657__INCLUDED_)
