#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	char arr1[] = "welcome to shandong";
	char arr2[] = "###################";
	int left = 0;
	int right = strlen(arr1) - 1;//strlen���ַ������ȣ��ɻ���
	while(left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		left++;
		right--;
	}
	return 0;
}