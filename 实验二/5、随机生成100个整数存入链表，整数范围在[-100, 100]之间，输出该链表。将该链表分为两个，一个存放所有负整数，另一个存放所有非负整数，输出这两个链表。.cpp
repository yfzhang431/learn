#include<stdio.h>
#include<stdlib.h>
#include<time.h>
	struct Node{
		int Data;
		struct Node*Next;
	};
	struct Node* Creat(){
		struct Node*L;
		L=(struct Node*)malloc(sizeof(struct Node));
		L->Next=NULL;
		return L;
	} 
	void Print(struct Node *L){
    	struct Node *q;
    	q=L->Next;
    	while(q!=NULL){
        	printf("%d ",q->Data);
        	q=q->Next;
    	}
	}

	void Insert(struct Node*L,int n){
		struct Node*p,*q;
		p=L;
		q=(struct Node*)malloc(sizeof(struct Node));
		while(p->Next!=NULL&&p->Next->Data<n){
			p=p->Next;
		}
		q->Data=n;
		q->Next=p->Next;
		p->Next=q;	
		
	}
	int main()
	{
		struct Node *L,*L2;
		L=Creat();
		L2=Creat();
		srand((int)time(NULL));
		int i;
		for(i=0;i<100;i++){	
			Insert(L,rand()%201-100); 
		}
		Print(L); 
		struct Node *p,*p2,*q;
		p=L;
		p2=L2;
		while(p->Next!=NULL){
			if(p->Next->Data<0){
				q=p->Next;
				p->Next=q->Next;
				q->Next=p2->Next;
				p2->Next=q;
				p2=p2->Next; 
			}
			else{
				p=p->Next;
			}
		}
		printf("\n");
		printf("\n");
		Print(L2); 
			printf("\n");
						printf("\n");
		Print(L); 
	}
