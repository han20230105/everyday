#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	int sz = sizeof(arr)/sizeof(arr[0]);//计算元素个数
	int left = 0;//左下标
	int right = sz - 1;//右下标
	while (left <=right)//条件
	{
		int mid = (left+right)/2;//中间值（随循环变）
		if(arr[mid] > k)//用中间值查找
		{
			right = mid - 1;
		}
		else if(arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标为%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("未找到");
	}
	return 0;
}