#include<stdio.h> 


int main()
{
	int arr[10]={0};
	int (*p)[10]=&arr;//ָ������
	
	int(*pp)(int,int); //����ָ��
	
	 int(* prr[4])(int,int);//����ָ�������
	 
	 int(* (* prrl[4](int,int))=&ppr;//ָ����ָ�������ָ�� 
	 
	 return 0; 
}
