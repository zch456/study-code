#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 优秀的代码：
//1. 代码运行正常
//2. bug很少
//3. 效率高
//4. 可读性高
//5. 可维护性高
//6. 注释清晰
//7. 文档齐全

//常见的coding技巧：
//1. 使用assert
//2. 尽量使用const
//3. 养成良好的编码风格
//4. 添加必要的注释
//5. 避免编码的陷阱。

//实例:模拟实现strcpy函数
#include<assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	//const，用来避免两个数组颠倒位置，复制反了
//	assert(dest != NULL);//断言，一旦dest传过来一个空指针，就会报错
//	assert(src != NULL);
//	while (*src!='\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//	//return dest;//这是错误的
//	return ret;//这样就可以了
//}//开头应该返回为char*，为了实现链式访问
////(把这个函数的返回值作为另一个函数的参数)
////最终返回的是目标空间的起始地址
//
//int main()
//{
//	char arr1[20] = { "XXXXXXXXXXXX" };
//	char arr2[] = { "hello bit" };
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;//这样就是链式访问
//}

//int main()
//{
//	const int num = 10;//这里无法直接修改num,可以通过指针来修改
//	int* p = &num;//指针前面也加上const也可以阻止修改     
//	*p = 20;//const修饰指针变量
//	printf("%d\n", num);
//	return 0;
//}

//1.const放在*左边，int const*和 const int* 都可以
// 意思是p指向的对象，不能通过p来改变,但是p本身的值可以修改
//2.const放在*右边
//意思是p指向的对象，可以通过p来修改，但p本身的值不可修改

//练习：实现strlen函数
#include<assert.h>
//int my_strlrn(const char* str)
//{
//	int count = 0;
//	assert(str);//str如果为空指针，就是0，为假，就报错
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








