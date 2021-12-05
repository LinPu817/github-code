#include<stdio.h> 


int main()
{
	int arr[10]={0};
	int (*p)[10]=&arr;//指针数组
	
	int(*pp)(int,int); //函数指针
	
	 int(* prr[4])(int,int);//函数指针的数组
	 
	 int(* (* prrl[4](int,int))=&ppr;//指向函数指针数组的指针 
	 
	 return 0; 
}
