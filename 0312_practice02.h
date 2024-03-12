
// 0312_practice02.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CMy0312practice02App:
// See 0312_practice02.cpp for the implementation of this class
//

class CMy0312practice02App : public CWinApp
{
public:
	CMy0312practice02App();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CMy0312practice02App theApp;
