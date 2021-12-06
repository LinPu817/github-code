#include<stdio.h>
#include<stdlib.h>
/* qosrt函数可以对任何类型元素进行排序 
 qsort库函数直接调用
qsort(const void*a,const void*b)
{

qsort(数组，数组长度，每个元素字节大小，自定义函数）//调用qsort函数方法 

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
int my_float(const void* a,const void* b)//const void*?,const void*?固定写法 
{
	return ((int)(*(float*)a-*(float*)b));
}
void test2(){
	float f[]={9.00,5.00,3.00,2.00,7.00};
	int sz=sizeof(f)/sizeof(f[0]);
	qsort(f,sz,sizeof(f[0]),my_float);//qsort库函数 
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
