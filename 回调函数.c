#include<stdio.h>
void print(char *str)
{
	printf(" hehe %s ",str);
}
void test(void(*p)(char*))//��������ָ���ź�����ַ ������print��ַ����p 
{
	printf("bite:");
	p("hehe");//���ú���print 
}
int main()
{
	test(print);
	return 0;
}
