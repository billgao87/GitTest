// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� TEST1_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// TEST1_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef TEST1_EXPORTS
#define TEST1_API __declspec(dllexport)
#else
#define TEST1_API __declspec(dllimport)
#endif

// �����Ǵ� Test1.dll ������
class TEST1_API CTest1 {
public:
	CTest1(void);
	// TODO:  �ڴ�������ķ�����
};

extern TEST1_API int nTest1;

TEST1_API int fnTest1(void);
