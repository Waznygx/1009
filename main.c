#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	char* p = "hello world";
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	int arr[10] = { 0 };
//	printf("%p\n", &i);
//	printf("%p\n", arr);
//	/*for ( i = 0; i <= 12; i++)
//	{
//		count++;
//		arr[i] = 0;
//		printf("%d:haha\n",count);
//	}*/
//	return 0;
//}
//

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	//*p = 20;
//	printf("%d\n", *p);
//	return 0;
//}

//#include<string.h>
//#include<assert.h>
//char* strcpy(char* dest,const char* src)
//{
//	char* cp = dest;
//	assert(dest && src);
//	while (*cp++ == *src++)
//	{
//		;
//	}
//	return dest;
//}
//int main()
//{
//	char arr1[] = "###################";
//	char arr2[] = "hello";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	int n = 20;
//	int* const p = &n;
//	p = &n;
//	*p = 30;
//	printf("%d\n", n);
//	return 0;
//}

int main()
{
	int a = 10;
	int b = 2;
	printf("%d\n", ADD(a, b));
	return 0;
}