﻿#pragma once
#include <string>
#include <map>
#include "resource.h"

#define g_data CDataManager::Instance()


struct SettingData
{
    //TODO: 在此添加选项设置的数据
};

class CDataManager
{
private:
    CDataManager();
    ~CDataManager();

public:
    static CDataManager& Instance();

    void LoadConfig();
    void SaveConfig() const;
    const CString& StringRes(UINT id);      //根据资源id获取一个字符串资源
    void DPIFromWindow(CWnd* pWnd);
    int DPI(int pixel);
    HICON GetIcon(UINT id);

    SettingData m_setting_data;

public:
    const std::wstring& GetModulePath() const;

private:
    static CDataManager m_instance;
    std::wstring m_module_path;
    std::map<UINT, CString> m_string_table;
    std::map<UINT, HICON> m_icons;
    int m_dpi{ 96 };
};
