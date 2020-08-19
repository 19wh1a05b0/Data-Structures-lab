#include<stdio.h>
struct node
{
	int data;
	struct node*link;
};
int main()
{
	struct node*s;
	s=(struct node*)malloc(sizeof(struct node));
	s->data=100;
	s->link=NULL;
	printf("data=%d",s->data);
}