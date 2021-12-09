#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[20] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++){
		printf("ÇëÊäÈëÃÜÂë£º\n");
		scanf("%s", &arr);
		if (strcmp(arr, "12548") == 0)
		{
			printf("bb");
			break;
		}
	}
	if (i == 2)
	{
		printf("kdshg");
	}
	
}