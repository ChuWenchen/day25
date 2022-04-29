#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//     指针类型的意义
//  指针类型决定了指针解引用的权限有多大
//  指针类型决定了指针的一步走多远
//int main()
//{
//	int a = 0x11223344;
//// 0x 表示十六进制数，一个十六进制数需要用4个二进制位表示，两个16进制就是一个字节
//	int* pa = &a;
//	*pa = 0;
//	//char* pa = &a;
//	//*pa = 0;
//	return 0;
//}


//int main()
//{
//	int a[10] = { 0 };
//	int* p1 = &a;
//	char* p2 = &a;
//	printf("%p\n",p1 );
//	printf("%p\n", p1+1);
//	printf("%p\n", p2);
//	printf("%p\n", p2+1);
//	return 0;
//}



//               野指针
//  非法访问内存和越界访问

//int main()
//{
//	//int* p;// p是局部变量，未初始化默认为随机值
//	//*p = 0;// 非法访问内存
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = 1;
//		p++;                   // 越界访问
//	}
//	return 0;
//}


//  非法访问
//int* test()
//{
//	int a = 0;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 1;
//	return 0;
//}


//   指针的运算
//#define N_values 5
//int main()
//{
//	float values[N_values];
//	float* pv = NULL;
//	for (pv = &values[0]; pv < &values[N_values];)
//	{
//		*pv++ = 0;
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]); // 10个元素
//	int* pend = arr + sz-1;   // 下标到9
//	while (p <= pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//	printf("%d\n", &arr[9] - &arr[0]);      //  指针减去指针，得到的是中间的元素个数，前提是两个指针指向同一个空间，否则会出警告
//	return 0;
//}


      // 实现strlen的3种方式
#include<string.h> 
  //循环
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

//递归
int my_strlen(char* str)
{
	int count = 0;
	if (*str != '\0')
	{
		count=1+my_strlen(str + 1);
	}
	return count;
}

 //指针
int my_strlen(char* str)
{
	char* strt = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - strt;
}

int main()
{
	/*int str = strlen("abc");*/
	int str = my_strlen("abc");
	printf("%d\n", str);
	return 0;
}
