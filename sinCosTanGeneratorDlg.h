// sinCosTanGeneratorDlg.h : header file
//

#if !defined(AFX_SINCOSTANGENERATORDLG_H__95B2CE48_0781_44E3_86D0_51499D88C7A1__INCLUDED_)
#define AFX_SINCOSTANGENERATORDLG_H__95B2CE48_0781_44E3_86D0_51499D88C7A1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CSinCosTanGeneratorDlg dialog

class CSinCosTanGeneratorDlg : public CDialog
{
// Construction
public:
	CSinCosTanGeneratorDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CSinCosTanGeneratorDlg)
	enum { IDD = IDD_SINCOSTANGENERATOR_DIALOG };
	CString	m_result;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSinCosTanGeneratorDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CSinCosTanGeneratorDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnGenerateTan();
	afx_msg void OnGenerateSin();
	afx_msg void OnGenerateCos();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SINCOSTANGENERATORDLG_H__95B2CE48_0781_44E3_86D0_51499D88C7A1__INCLUDED_)
