// Test1.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "Test1.h"


// ���ǵ���������һ��ʾ��
TEST1_API int nTest1=0;

// ���ǵ���������һ��ʾ����
TEST1_API int fnTest1(void)
{
    return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� Test1.h
CTest1::CTest1()
{
    return;
}
