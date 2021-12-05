#include<stdio.h>
void print(char *str)
{
	printf(" hehe %s ",str);
}
void test(void(*p)(char*))//创建函数指针存放函数地址 将函数print地址传到p 
{
	printf("bite:");
	p("hehe");//调用函数print 
}
int main()
{
	test(print);
	return 0;
}
