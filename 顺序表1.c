#include<stdio.h>
#include<stdlib.h>
typedef int s;
typedef struct {
    s *data;
	int size;
	int coul;
}sq;
void initsqlit(sq* a)
{
	a->data=(s*)malloc(sizeof(s)*4);
	a->size=0;
	a->coul=4;
	
}
void display(sq*a)
{
	int i=0;
	for(i=0;i<a->size;++i)
	{
		printf("%d ",a->data[i]);
	}
	printf("\n");
}
void insert(sq*pa,s x)
{
	pa->data[pa->size]=x;
	pa->size++;
}
void tatli(sq*a)
{
	a->data[a->size-1]=0;
	a->size--;
}
void tatil(sq*a,s x)
{
	a->data[a->size+1]=x;
	a->size++;
}
int main()
{
	sq s;
	initsqlit(&s);
	insert(&s,1);
	insert(&s,1);
	insert(&s,1);
	//display(&s);
	//tatli(&s);
	tatil(&s,4);
	display(&s);
	return 0;
}
