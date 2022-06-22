#pragma once
#include <string>
#include <map>
class CChapterParser
{
public:
    CChapterParser(const std::wstring& contents);
    ~CChapterParser();
    void Parse();
    const std::map<int, std::wstring>& GetChapterData() const;

private:
    const std::wstring& m_contents;
    std::map<int, std::wstring> m_chapter;      //�½ڱ��⡣key��������valueΪ�½ڱ���
};

