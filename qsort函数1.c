#include<stdio.h>
#include<stdlib.h>
/* qosrt�������Զ��κ�����Ԫ�ؽ������� 
 qsort�⺯��ֱ�ӵ���
qsort(const void*a,const void*b)
{

qsort(���飬���鳤�ȣ�ÿ��Ԫ���ֽڴ�С���Զ��庯����//����qsort�������� 

}
*/
int my_paixu(const void *a,const void *b)
{
	return *(int *)a-*(int *)b;
}
void test()
{
	int arr[]={9,8,7,6,5,4,3,2,1};
	int sz=sizeof(arr)/sizeof(arr[0]);
	qsort(arr,sz,sizeof(arr[0]),my_paixu);
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("%d \n",arr[i]);
	}
}
int my_float(const void* a,const void* b)//const void*?,const void*?�̶�д�� 
{
	return ((int)(*(float*)a-*(float*)b));
}
void test2(){
	float f[]={9.00,5.00,3.00,2.00,7.00};
	int sz=sizeof(f)/sizeof(f[0]);
	qsort(f,sz,sizeof(f[0]),my_float);//qsort�⺯�� 
	int j=0;
	for(j=0;j<sz;j++)
	{
		printf("%f \n",f[j]);
	}
	
}
int main()
{
	test2();
	test();
	return 0;
 } 
