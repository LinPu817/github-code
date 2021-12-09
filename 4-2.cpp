#include<stdio.h>
#include<string.h>
int main(){
	int a=0;
	int b=0;
	int sum=0;
	printf("请输入两个整数：");
	scanf("%d,%d",a,b);
	sum =(a*a)+(b*b);
	if(sum >100){
		 printf("%d",(sum-100));
	}
	  else
	     printf("%d ",sum);
}
