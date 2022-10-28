#pragma once
#include <string>
#include <vector>

class CCommon
{
public:
    CCommon();
    ~CCommon();

    static std::wstring StrToUnicode(const char* str, bool utf8 = false);

    static std::string UnicodeToStr(const wchar_t* wstr, bool utf8 = false);

    //��ȡ�ļ�����
    static bool GetFileContent(const wchar_t* file_path, std::string& contents_buff);

    //��ȡ�ļ�����
    //file_path: �ļ���·��
    //length: �ļ��ĳ���
    //����ֵ: ��ȡ�ɹ����ض�ȡ�����ļ����ݵ�const char���͵�ָ�룬��ʹ����Ϻ����ָ����Ҫ����ʹ��delete�ͷš���ȡʧ�ܷ���nullptr
    static const char* GetFileContent(const wchar_t* file_path, size_t& length);

    static void GetFiles(const wchar_t* path, std::vector<std::wstring>& files);
};

