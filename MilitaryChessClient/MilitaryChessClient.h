
// MilitaryChessClient.h : MilitaryChessClient Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMilitaryChessClientApp:
// �йش����ʵ�֣������ MilitaryChessClient.cpp
//

class CMilitaryChessClientApp : public CWinApp
{
public:
	CMilitaryChessClientApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMilitaryChessClientApp theApp;
