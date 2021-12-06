#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/* qosrt函数可以对任何类型元素进行排序 
 qsort库函数直接调用
qsort(const void*a,const void*b)
{

qsort(数组，数组长度，每个元素字节大小，自定义函数）//调用qsort函数方法 

}
*/
typedef struct{
	char name[10];
	int age;
}stu;
int my_stu(const void*a,const void*b)
{
	return (((stu*)a)->age-(((stu *)b)->age));
}
void test3()
{
	stu s[3]={{"zhangsan",10},{"lisi",7},{"chenyikun",2}};
	int sz=sizeof(s)/sizeof(s[0]);
	qsort(s,sz,sizeof(s[0]),my_stu);
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("%d ",s[i].age);
	}
 } 
 int my_name(const void*a,const void*b)
{
	return strcmp(((stu*)a)->name,((stu*)b)->name);
	/*当第一个元素小于第二个元素，返回小于0
	   当第一个元素等于第二个元素，返回0
	   当第一个元素大于第二个元素，返回大于0*/ 
}
 void test4()
{
	stu s[3]={{"zhangsan",10},{"lisi",7},{"chenyikun",2}};
	int sz=sizeof(s)/sizeof(s[0]);
	qsort(s,sz,sizeof(s[0]),my_name);
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("%s ",s[i].name);
	}
 } 
int main()
{
	test3(); 
	test4();
	return 0;
 } 
