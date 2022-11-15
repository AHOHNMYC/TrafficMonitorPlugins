
// PluginTester.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
    #error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������
#include "CommonData.h"

// CPluginTesterApp: 
// �йش����ʵ�֣������ PluginTester.cpp
//

class CPluginTesterApp : public CWinApp
{
public:
    CPluginTesterApp();
    int DPI(int pixel);
    static CString LoadText(UINT id);

    Language m_language;
    std::wstring m_config_path;

private:
    void LoadConfig();
    void SaveConfig() const;

private:
    int m_dpi{ 96 };

// ��д
public:
    virtual BOOL InitInstance();

// ʵ��

    DECLARE_MESSAGE_MAP()
};

extern CPluginTesterApp theApp;