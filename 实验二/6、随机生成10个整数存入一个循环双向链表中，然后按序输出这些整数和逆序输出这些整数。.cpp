#include<stdio.h>
#include<stdlib.h>
#include<time.h>
	struct Node{
		int Data;
		struct Node*Next,*privous;
	};
	struct Node* Creat(){
		struct Node*L;
		L=(struct Node*)malloc(sizeof(struct Node));
		L->Next=L;
		L->privous=L;	
		return L;
	} 
	int length_Node(struct Node*L){
		int i;
		struct Node*p;
		p=L->Next;
		while(p!=L){
			i++;
			p=p->Next;
		}
		return i;
	}
	void Print_1(struct Node *L){
    	struct Node *q;
    	int i=length_Node(L);
    	int j=0;
    	q=L->Next;
    	while(j<i){
        	printf("%d ",q->Data);
        	q=q->Next;
        	j++;
    	}
	}
	void Print_2(struct Node *L){
    	struct Node *q;
    	q=L->privous;
    	int i=length_Node(L);
    	int j=0;
    	
    	while(j<i){
        	printf("%d ",q->Data);
        	q=q->privous;
        	j++;
    	}
	}

	void Insert(struct Node*L,int n){
		int i=length_Node(L);
		int j=0;
		struct Node*p,*q;
		p=L;
		q=(struct Node*)malloc(sizeof(struct Node));
		while(j<i){
			p=p->Next;
			j++;
		}
			q->Data=n;
			q->Next=p->Next;
			q->privous=p;
			p->Next=q;
			q->Next->privous=q;
	}
	int main(){
		struct Node *L;
		L=Creat();
		srand((int)time(NULL));
		int i;
		for(i=0;i<10;i++){	
			Insert(L,rand()%100); 	
		}
		Print_1(L);
		printf("\n");
		printf("\n");
		Print_2(L);
		return 0;
	}
