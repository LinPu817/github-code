#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/* qosrt�������Զ��κ�����Ԫ�ؽ������� 
 qsort�⺯��ֱ�ӵ���
qsort(const void*a,const void*b)
{

qsort(���飬���鳤�ȣ�ÿ��Ԫ���ֽڴ�С���Զ��庯����//����qsort�������� 

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
	/*����һ��Ԫ��С�ڵڶ���Ԫ�أ�����С��0
	   ����һ��Ԫ�ص��ڵڶ���Ԫ�أ�����0
	   ����һ��Ԫ�ش��ڵڶ���Ԫ�أ����ش���0*/ 
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
