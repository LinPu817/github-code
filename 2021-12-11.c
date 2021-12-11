
#inclide<stdio.h>
int max(int x,int y)//自定义函数
{     
	int m =0;
	if(x>y)
		return x;
	else
		return y;
	

enum name {
	chen,
	lei,
	li
};
int main()
{
	int a = 1;
	while(a<100)
	{
		if(a%2==1)
			printf("%d ",a);
	    a=a+1;
	}
	
	return 0;
}


int main()
{
	int a =0;
	printf("请输入一个数:");
	scanf("%d",&a);
	if(a%2==1)
		printf("%d这个数是奇数",a);
	else
		printf("%d不是奇数",a);
		/*int a=45645;
	int b=10;
	int sum=0;
	sum = max(4564,13212);
	printf("最大值：%d",sum);*/

	int i = 0;
	int are[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};//数组下标从零开始
	printf("%d",are[6]);
	while(i<10)
	{
		printf("%d",are[i]);
		i++;
	}
	return 0;
}

	int main()
{   
	int a = 50;
	int b = 60;
	int sum = 0;
	sum = add(a,b);
	printf("%d",sum);
	sum = add(67,89);
	printf("%d",sum);

	printf("你是傻逼吗：");
	printf("请输入是或者不是");
	scanf("%d",&a);
	if(a==1)
		printf("woshishabi");
	else
		printf("wobushishabi");
	printf("%d",strlen("\328"));
	return 0;

}