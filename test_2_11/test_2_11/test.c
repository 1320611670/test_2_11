#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

int  my_strlen(char *str)
{
	char*start = str;
	char*end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}

int main()
{
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int*p = arr;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *p);
		p ++;
	}
	return 0;*/

	char arr[] = "steam";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}

