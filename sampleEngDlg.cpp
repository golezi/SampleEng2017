// sampleEngDlg.cpp : implementation file
//

#include "stdafx.h"
#include "sampleEng2017.h"

/***************************************************/
#include "..\..\..\Include\ActDefine.h"	// ACT Common Macro Header (For Set/Get Property Value)
/***************************************************/

#include "sampleEngDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSampleEngDlg dialog

CSampleEngDlg::CSampleEngDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CSampleEngDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CSampleEngDlg)
	m_Device = _T("");
	m_DeviceValue = 0;
	m_SelectCntl = 1;
	m_RetVal = _T("");
	m_RetVal2 = _T("");
	m_RetVal3 = _T("");
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CSampleEngDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSampleEngDlg)
	DDX_Text(pDX, IDC_DEVICE, m_Device);
	DDX_Text(pDX, IDC_DEVVALUE, m_DeviceValue);
	DDX_Radio(pDX, IDC_RADIO1, m_SelectCntl);
	DDX_Text(pDX, IDC_RET, m_RetVal);
	DDX_Text(pDX, IDC_RET2, m_RetVal2);
	DDX_Text(pDX, IDC_RET3, m_RetVal3);
	//}}AFX_DATA_MAP
	DDX_Control(pDX, IDC_ACTPROGTYPE1, m_ActProgType);
	DDX_Control(pDX, IDC_ACTUTLTYPE1, m_ActUtlType);
}

BEGIN_MESSAGE_MAP(CSampleEngDlg, CDialog)
	//{{AFX_MSG_MAP(CSampleEngDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_OpenCom, OnOpenCom)
	ON_BN_CLICKED(IDC_GetCpuType, OnGetCpuType)
	ON_BN_CLICKED(IDC_GetDevice, OnGetDevice)
	ON_BN_CLICKED(IDC_SetDevice, OnSetDevice)
	ON_BN_CLICKED(IDC_CloseCom, OnCloseCom)

	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSampleEngDlg message handlers

BOOL CSampleEngDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CSampleEngDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CSampleEngDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CSampleEngDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

/****************************************************/
/*  Open Communication Route                        */
/****************************************************/
void CSampleEngDlg::OnOpenCom() 
{
long lRet;
CString	MsgStr;

	CWnd::UpdateData(TRUE);

	// Clear ReturnValue Display
	m_RetVal= "";
	m_RetVal2 = "";
	m_RetVal3 = "";

	try{
		if (m_SelectCntl == 0 ){	// ActProgType Control
		// If you don't use default values, please set their properties before OPEN method call.
		// (If you call the set-property method after OPEN method, it isn't reflected to the communication.)
		// (You can use methods to set and get the value for all properties.)
		// ---> Example: Change the UNIT type to "QNUSB" from default value.
		//				 Change the Protocol type to "USB" from default value.
		//			     The other is default.
			m_ActProgType.put_ActUnitType(UNIT_QNUSB);// Exec set-property method 		
			m_ActProgType.put_ActProtocolType(PROTOCOL_USB);// Exec set-property method 

			lRet = m_ActProgType.Open();	// Exec OPEN method 
		}
		else{						// ActUtlType Control
		// If you don't use default values, please set their properties before OPEN method call.
		// ---> Example: Change the Logical station number to "1" from default value.
			m_ActUtlType.put_ActLogicalStationNumber(1);	// Exec set-property method 
			lRet = m_ActUtlType.Open();	// Open method exec
		}	
		// Renew ReturnValue 
		m_RetVal.Format("0x%08x",lRet);
	}
	catch(COleDispatchException *Exception){
		// OLE IDispatch Interface Error
		MsgStr.LoadString(IDS_STRING103);
		AfxMessageBox(MsgStr, MB_ICONINFORMATION);
		Exception->Delete();
	}	

	CWnd::UpdateData(FALSE);
	
}


/*******************************************************************/
/*  Get CpuType of the connected CPU (confirmation of connecting)  */
/*******************************************************************/
void CSampleEngDlg::OnGetCpuType() 
{
long	lRet;
long	lCpuCode	= 0;
BSTR	szCpuName	= NULL;
CString	MsgStr;

	// Clear ReturnValue Display
	m_RetVal= "";
	m_RetVal2 = "";
	m_RetVal3 = "";

	try{
		if (m_SelectCntl == 0 ){	// ActProgType Control
			lRet = m_ActProgType.GetCpuType(&szCpuName,&lCpuCode);	// Exec GetCpuType Method
		}
		else{						// ActUtlType Control
			lRet = m_ActUtlType.GetCpuType(&szCpuName,&lCpuCode);// Exec GetCpuType Method
		}

		if(lRet == 0x00){	// Success 
			m_RetVal2.Format("0x%x(%d)",lCpuCode,lCpuCode);	// Cpu Code
			m_RetVal3 = szCpuName;							// Cpu Name
		}
		// Renew ReturnValue 
		m_RetVal.Format("0x%08x",lRet);

	}
	catch(COleDispatchException *Exception){
		// OLE IDispatch Interface Error
		MsgStr.LoadString(IDS_STRING103);
		AfxMessageBox(MsgStr, MB_ICONINFORMATION);
		Exception->Delete();
	}

	// If the Method has Output value of BSTR type, you have to free the allocated BSTR area.
	::SysFreeString(szCpuName);

	CWnd::UpdateData(FALSE);
}

/****************************************************/
/*  Get Device Value                                */
/****************************************************/
void CSampleEngDlg::OnGetDevice() 
{
long lRet;
long lValue;
CString	MsgStr;

	CWnd::UpdateData(TRUE);

	// Clear ReturnValue Display
	m_RetVal= "";
	m_RetVal2 = "";
	m_RetVal3 = "";

	if (m_Device == ""){
		// Not Enter DeviceName Error
		MsgStr.LoadString(IDS_STRING102);
		AfxMessageBox(MsgStr, MB_ICONINFORMATION);
		return;
	}
	try{
		if (m_SelectCntl == 0 ){	// ActProgType Control
			lRet = m_ActProgType.GetDevice(m_Device,&lValue);	// Exec GetDevice Method
		}
		else{						// ActUtlType Control
			lRet = m_ActUtlType.GetDevice(m_Device,&lValue);// Exec GetDevice Method
		}
		if(lRet == 0x00){	// Success
			m_RetVal2.Format("0x%04x(%d)",lValue,lValue);	// Device Value
		}
		// Renew ReturnValue 
		m_RetVal.Format("0x%08x",lRet);

	}
	catch(COleDispatchException *Exception){
		// OLE IDispatch Interface Error
		MsgStr.LoadString(IDS_STRING103);
		AfxMessageBox(MsgStr, MB_ICONINFORMATION);
		Exception->Delete();
	}

	CWnd::UpdateData(FALSE);
}

/****************************************************/
/*  Set Device Value                                */
/****************************************************/
void CSampleEngDlg::OnSetDevice() 
{
long lValue;
long lRet;
CString	MsgStr;

	CWnd::UpdateData(TRUE);

	// Clear ReturnValue Display
	m_RetVal= "";
	m_RetVal2 = "";
	m_RetVal3 = "";

	if (m_Device == ""){
		// Not Enter DeviceName Error
		MsgStr.LoadString(IDS_STRING102);
		AfxMessageBox(MsgStr, MB_ICONINFORMATION);
		return;
	}
	lValue = m_DeviceValue;
	try{
		if (m_SelectCntl == 0 ){	// ActProgType Control
			lRet = m_ActProgType.SetDevice(m_Device,lValue);	// Exec SetDevice Method
		}
		else{						// ActUtlType Control
			m_ActUtlType.put_ActLogicalStationNumber(0);
			lRet = m_ActUtlType.SetDevice(m_Device,lValue);	// Exec SetDevice Method
		}

		// Renew ReturnValue 
		m_RetVal.Format("0x%08x",lRet);
	}
	catch(COleDispatchException *Exception){
		// OLE IDispatch Interface Error
		MsgStr.LoadString(IDS_STRING103);
		AfxMessageBox(MsgStr, MB_ICONINFORMATION);
		Exception->Delete();
	}

	CWnd::UpdateData(FALSE);
}


/****************************************************/
/*  Close Communication Route                       */
/****************************************************/
void CSampleEngDlg::OnCloseCom() 
{
long lRet;
CString	MsgStr;

	CWnd::UpdateData(TRUE);

	// Clear ReturnValue Display
	m_RetVal= "";
	m_RetVal2 = "";
	m_RetVal3 = "";

	try{
		if (m_SelectCntl == 0 ){	// ActProgType Control
			lRet = m_ActProgType.Close();	// Exec Close Method
		}
		else{						// ActUtlType Control
			lRet = m_ActUtlType.Close();	// Exec Close Method
		}
		// Renew ReturnValue 
		m_RetVal.Format("0x%08x",lRet);
	}
	catch(COleDispatchException *Exception){
		// OLE IDispatch Interface Error
		MsgStr.LoadString(IDS_STRING103);
		AfxMessageBox(MsgStr, MB_ICONINFORMATION);
		Exception->Delete();
	}

	CWnd::UpdateData(FALSE);
	
}
