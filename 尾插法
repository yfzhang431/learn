#include<stdio.h>
#include <stdlib.h>  
struct Node {
int Data; 
struct Node * Next;
};
int main()
{
	Node *L,*p,*q;
	L = (Node*)malloc(sizeof(Node));
	L->Next=NULL;
	p=L;
	int n=3;
	int i;
	for(i=0;i<n;i++)
	{
	q= (Node*)malloc(sizeof(Node));
	scanf("%d",&q->Data);
	p->Next=q;
	p=q;
	}
    p->Next= NULL;
	while(L!=NULL)  
    {  
        printf("%d  ",L->Next->Data);  
        L=L->Next;  
    }
}


