#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
struct BOOK
{
	char name[20];
	short price;
};
int main()
{
	struct BOOK b1 = { "c++",20 };
	struct BOOK* h = &b1;
	strcpy(b1.name, "c");
	b1.price = 25;
	printf("����:%s\n", h->name);
	printf("�۸�%d\n", h->price);
	return 0;
}