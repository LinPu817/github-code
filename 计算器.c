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
void meun(){
	
printf("**********************\n");
printf("**1.add 2.miu*********\n");
printf("**3.mu 4.div *********\n");
printf("**********************\n");

}
int main(){
	int input=0;
	int a=0;
	int b=0;
	do{
		meun();
		printf("请输入数字：\n");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				printf("请输入两个数：->\n");
		        scanf("%d%d",&a,&b);
				printf("%d",add(a,b));
				break;
			case 2:
				printf("请输入两个数：->\n");
		        scanf("%d%d",&a,&b);
				printf("%d",miu(a,b));
				break;
			case 3:
				printf("请输入两个数：->\n");
		        scanf("%d%d",&a,&b);
				printf("%d",mu(a,b));
				break;
			case 4:
				printf("请输入两个数：->\n");
		        scanf("%d%d",&a,&b);
				printf("%d",div(a,b));
				break;
			case 0:
				break;
			defaul:
				break;
		}
	}while(input);
	return 0;
}
