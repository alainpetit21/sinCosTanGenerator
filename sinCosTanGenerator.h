// sinCosTanGenerator.h : main header file for the SINCOSTANGENERATOR application
//

#if !defined(AFX_SINCOSTANGENERATOR_H__BC38A708_2220_4EDA_A41A_DCE2895A2297__INCLUDED_)
#define AFX_SINCOSTANGENERATOR_H__BC38A708_2220_4EDA_A41A_DCE2895A2297__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CSinCosTanGeneratorApp:
// See sinCosTanGenerator.cpp for the implementation of this class
//

class CSinCosTanGeneratorApp : public CWinApp
{
public:
	CSinCosTanGeneratorApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSinCosTanGeneratorApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CSinCosTanGeneratorApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SINCOSTANGENERATOR_H__BC38A708_2220_4EDA_A41A_DCE2895A2297__INCLUDED_)
