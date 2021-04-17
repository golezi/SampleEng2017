// sampleEngDlg.h : header file
//
//{{AFX_INCLUDES()
#include "actprogtype.h"
#include "actutltype.h"
//}}AFX_INCLUDES

#if !defined(AFX_SAMPLEENGDLG_H__02DFA8A6_E9DE_11D3_9D2F_0020AFCF1657__INCLUDED_)
#define AFX_SAMPLEENGDLG_H__02DFA8A6_E9DE_11D3_9D2F_0020AFCF1657__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CSampleEngDlg dialog

class CSampleEngDlg : public CDialog
{
// Construction
public:
	CSampleEngDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CSampleEngDlg)
	enum { IDD = IDD_SAMPLEENG_DIALOG };
	CString	m_Device;
	UINT	m_DeviceValue;
	int		m_SelectCntl;
	CString	m_RetVal;
	CString	m_RetVal2;
	CString	m_RetVal3;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSampleEngDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CSampleEngDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnOpenCom();
	afx_msg void OnGetCpuType();
	afx_msg void OnGetDevice();
	afx_msg void OnSetDevice();
	afx_msg void OnCloseCom();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	CActprogtype m_ActProgType;
	CActutltype m_ActUtlType;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SAMPLEENGDLG_H__02DFA8A6_E9DE_11D3_9D2F_0020AFCF1657__INCLUDED_)
