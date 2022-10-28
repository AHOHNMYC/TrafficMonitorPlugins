
// PluginTesterDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"
#include "ConmmonData.h"
#include <map>


// CPluginTesterDlg �Ի���
class CPluginTesterDlg : public CDialog
{
// ����
public:
    CPluginTesterDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
    enum { IDD = IDD_PLUGINTESTER_DIALOG };
#endif

    protected:
    virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��

private:
    PluginInfo LoadPlugin(const std::wstring& plugin_file_name);
    void EnableControl();
    void EnableControl(bool enable);
    PluginInfo GetCurrentPlugin();
    int GetItemWidth(IPluginItem* pItem, CDC* pDC);
    void SavePluginItemRect(IPluginItem* pItem, CRect rect);
    IPluginItem* GetPluginItemByPoint(CPoint point);
    CPoint GetMouseCursurPosition();

// ʵ��
protected:
    HICON m_hIcon;
    std::wstring m_plugin_dir;
    std::vector<PluginInfo> m_plugins;
    int m_cur_index{ -1 };
    CRect m_draw_rect;
    std::map<std::wstring, CRect> m_plugin_item_rect;   //����ÿ�������Ŀ����ʾλ��

    // ���ɵ���Ϣӳ�亯��
    virtual BOOL OnInitDialog();
    afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
    afx_msg void OnPaint();
    afx_msg HCURSOR OnQueryDragIcon();
    DECLARE_MESSAGE_MAP()
public:
    afx_msg void OnBass64Encode();
    afx_msg void OnBase64Decode();
    afx_msg void OnAppAbout();
    afx_msg void OnCbnSelchangeSelectPluginCombo();
    afx_msg void OnBnClickedOptionButton();
    CComboBox m_select_plugin_combo;
    afx_msg void OnBnClickedDetailButton();
    afx_msg void OnTimer(UINT_PTR nIDEvent);
    afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
    afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
    afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
};
