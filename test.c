#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//     ָ�����͵�����
//  ָ�����;�����ָ������õ�Ȩ���ж��
//  ָ�����;�����ָ���һ���߶�Զ
//int main()
//{
//	int a = 0x11223344;
//// 0x ��ʾʮ����������һ��ʮ����������Ҫ��4��������λ��ʾ������16���ƾ���һ���ֽ�
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



//               Ұָ��
//  �Ƿ������ڴ��Խ�����

//int main()
//{
//	//int* p;// p�Ǿֲ�������δ��ʼ��Ĭ��Ϊ���ֵ
//	//*p = 0;// �Ƿ������ڴ�
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = 1;
//		p++;                   // Խ�����
//	}
//	return 0;
//}


//  �Ƿ�����
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


//   ָ�������
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
//	int sz = sizeof(arr) / sizeof(arr[0]); // 10��Ԫ��
//	int* pend = arr + sz-1;   // �±굽9
//	while (p <= pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//	printf("%d\n", &arr[9] - &arr[0]);      //  ָ���ȥָ�룬�õ������м��Ԫ�ظ�����ǰ��������ָ��ָ��ͬһ���ռ䣬����������
//	return 0;
//}


      // ʵ��strlen��3�ַ�ʽ
#include<string.h> 
  //ѭ��
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

//�ݹ�
int my_strlen(char* str)
{
	int count = 0;
	if (*str != '\0')
	{
		count=1+my_strlen(str + 1);
	}
	return count;
}

 //ָ��
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
