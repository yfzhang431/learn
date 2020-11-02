#include <stdio.h>  
#include <stdlib.h>  
#include <time.h> 
struct Node {
int Data; 
struct Node * Next;
};

struct Node *creat()
{
	struct Node *L,*p,*q;
     int n=100;
	int i;
	L = (Node*)malloc(sizeof(Node));
	L->Next=NULL;
	srand((int)time(NULL));
	for(i=0;i<n;i++)
	{
	p = (Node*)malloc(sizeof(Node));
	p->Data=rand()%200;
	p->Next=L->Next;
	L->Next=p;
	}
	return L;
}

void min_max(Node *L)
{
	Node *p,*r,*q;
	p = L->Next;	  
	L->Next = NULL;
	while(p != NULL)
	{
		q = p->Next;
		r = L;
		while(r->Next !=NULL && r->Next->Data <= p->Data) 
			r = r->Next; 
		p->Next = r->Next;
		r->Next = p;
		p = q;	
	} 
}

void Print(Node *L)
{
 Node *p = L->Next;
 while(p!=NULL)
 {
  printf("%d  ",p->Data);
  p = p->Next;
 }
}

int main()
{
	Node *L;
	L=creat();
    min_max(L);
    Print(L);
}
