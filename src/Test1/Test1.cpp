// Test1.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "Test1.h"


// 这是导出变量的一个示例
TEST1_API int nTest1=0;

// 这是导出函数的一个示例。
TEST1_API int fnTest1(void)
{
    return 42;
}

// 这是已导出类的构造函数。
// 有关类定义的信息，请参阅 Test1.h
CTest1::CTest1()
{
    return;
}
