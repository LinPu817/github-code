#include<stdio.h> 
int add(int a,int b)
{
	return a+b;
}
int miu(int a,int b)
{
	return a-b;
}
int mu(int a,int b)
{
	return a*b;
}
int div(int a,int b)
{
	return a/b;
}
char* my_strcp(char * a,const char*b){
	
}
int main(){
	int(* arr[4])(int,int)={add,miu,mu,div};
	char*(*fp)(char*,char*);
	char*(*arrl[4])(char*,const char*);
	int i=0;
	for(i=0;i<4;i++)
	{
		printf("%d ",arr[i](3,3));
	}
	return 0;
	
}
