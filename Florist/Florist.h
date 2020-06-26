
// Florist.h : main header file for the Florist application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CFloristApp:
// See Florist.cpp for the implementation of this class
//

class CFloristApp : public CWinApp
{
public:
	CFloristApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CFloristApp theApp;
