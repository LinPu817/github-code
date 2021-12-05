#include<stdio.h>

int add(int x,int y){
	return x+y;
}
int mut(int x,int y){
	return x-y;
}
int p( int (*w)(int,int))
{
	int x;
	int y;
	scanf("%d %d",&x,&y);
	printf("%d",w(x,y));
}
int main(){
	int input=0;
	do{
	scanf("%d",&input);
		switch(input){
			case 1:
				p(add);
				break;
			case 2:
				p(mut);
				break;
			default:
			     printf("cuowu");
		}
	}while(input);
	
}
