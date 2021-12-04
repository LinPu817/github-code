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
	int(*arr[])(int,int)={0,add,miu,mu,div};
	do{
		meun();
		printf("ÇëÊäÈëÊı×Ö£º\n");
		scanf("%d",&input);
		if(input>=1&&input<=4)
		{
			printf("qingshurulianges:");
			scanf("%d %d",&a,&b);
			int rest=arr[input](a,b);
			printf("%d",rest);
		}
		else if(input==0)
		{
			printf("tuichu");
		}
		else
		{
			printf("cuowu");
		}
		
	}while(input);
	return 0;
}
