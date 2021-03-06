#include <stdio.h>  
#include <stdlib.h>  
#include <time.h> 
struct Node {
int Data; 
struct Node * Next;
};
struct Node *creat_1()
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

struct Node *creat_2()
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
	p->Data=rand()%100+50;
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
		{
				r = r->Next; 
		}
		p->Next = r->Next;
		r->Next = p;
		p = q;	
	} 
}

Node* Hebing(Node* head1, Node* head2)  
{
 Node *head, *p1, *p2;
 if(head1->Data < head2->Data)   
 {
  head = head1;
  p1 = head1->Next;
  p2 = head2;
 }
 else{
  head = head2;
  p1 = head1;
  p2 = head2->Next;
 } 
 Node *move = head;   
 while(p1 && p2)      
 {
  if(p1->Data <= p2->Data)
  {
   move->Next = p1;
   move = p1;
   p1 = p1->Next;
  }
  else
  {
   move->Next = p2;
   move = p2;
   p2 = p2->Next;
  }
 }
 if(p1)  
  move->Next = p1;     
 if(p2)
  move->Next = p2;    
 return head;
}



void delat(Node *H)
{
	Node *p,*q,*r;
	p=H->Next;
	while (p)
	{
		q=p->Next;
		r=p;
		while(q)
		{
			if (q->Data==p->Data)
			{
				r->Next=q->Next;
				free(q);
				q=r->Next;
			}
			else
			{
				r=r->Next;
				q=q->Next;
			}
		}
		p=p->Next;
	}

        return ;
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
	Node *L,*p,*q,*r;
    p=creat_1();
    q=creat_2();
	p=p->Next;
    printf("\n");
    printf("\n");
    r=Hebing(p,q); 
    min_max(r);
	Print(r);
    printf("\n");
    printf("\n");
    delat(r);
    Print(r);
}
