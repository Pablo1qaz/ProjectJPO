
// KonwerterMFC.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols

#define _AFXDLL
// CKonwerterMFCApp:
// See KonwerterMFC.cpp for the implementation of this class
//

class CKonwerterMFCApp : public CWinApp
{
public:
	CKonwerterMFCApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CKonwerterMFCApp theApp;
