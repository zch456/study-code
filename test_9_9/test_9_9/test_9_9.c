#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// ����Ĵ��룺
//1. ������������
//2. bug����
//3. Ч�ʸ�
//4. �ɶ��Ը�
//5. ��ά���Ը�
//6. ע������
//7. �ĵ���ȫ

//������coding���ɣ�
//1. ʹ��assert
//2. ����ʹ��const
//3. �������õı�����
//4. ��ӱ�Ҫ��ע��
//5. �����������塣

//ʵ��:ģ��ʵ��strcpy����
#include<assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	//const������������������ߵ�λ�ã����Ʒ���
//	assert(dest != NULL);//���ԣ�һ��dest������һ����ָ�룬�ͻᱨ��
//	assert(src != NULL);
//	while (*src!='\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//	//return dest;//���Ǵ����
//	return ret;//�����Ϳ�����
//}//��ͷӦ�÷���Ϊchar*��Ϊ��ʵ����ʽ����
////(����������ķ���ֵ��Ϊ��һ�������Ĳ���)
////���շ��ص���Ŀ��ռ����ʼ��ַ
//
//int main()
//{
//	char arr1[20] = { "XXXXXXXXXXXX" };
//	char arr2[] = { "hello bit" };
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;//����������ʽ����
//}

//int main()
//{
//	const int num = 10;//�����޷�ֱ���޸�num,����ͨ��ָ�����޸�
//	int* p = &num;//ָ��ǰ��Ҳ����constҲ������ֹ�޸�     
//	*p = 20;//const����ָ�����
//	printf("%d\n", num);
//	return 0;
//}

//1.const����*��ߣ�int const*�� const int* ������
// ��˼��pָ��Ķ��󣬲���ͨ��p���ı�,����p�����ֵ�����޸�
//2.const����*�ұ�
//��˼��pָ��Ķ��󣬿���ͨ��p���޸ģ���p�����ֵ�����޸�

//��ϰ��ʵ��strlen����
#include<assert.h>
//int my_strlrn(const char* str)
//{
//	int count = 0;
//	assert(str);//str���Ϊ��ָ�룬����0��Ϊ�٣��ͱ���
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = { "hello bit" };
//	int len = my_strlrn(arr);
//	printf("%d\n", len);
//	return 0;
//}








