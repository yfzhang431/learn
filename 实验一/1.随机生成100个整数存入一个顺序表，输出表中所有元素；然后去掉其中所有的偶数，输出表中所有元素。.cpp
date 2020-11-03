#include <stdio.h>  
#include <stdlib.h>  
#include <time.h> 
struct SqList {
    int *Data; 
int N; //表中现有元素个数
int MaxSize; // 表的最大容量
};

struct SqList * Creat(int M) 
{
    struct SqList * L;
    L = (struct SqList *)malloc(sizeof(struct SqList));
    L->Data = (int *)malloc(sizeof(int) * M);
    L->N = 0; /* 初始时元素个数为0 */
    L->MaxSize = M;
    return L;
}


void delet(SqList *L)
{
	int i,j;
for( i=0;i<L->N;i++)
  {
	if(L->Data[i] % 2==0)//是偶数 ，执行删除操作； 
   {
   	for(j=i;j<L->N;j++)
   L->Data[j]=L->Data[j+1];//执行移位，j+1的元素把j覆盖掉 （j被删除） 
   L->N--;  //j被删除，元素总个数-1； 
   i--;  //执行删除操作后， i++会错过前移的元素i+1（i+1位变为i位） 所以i--； 
   }
   
  }
}

int main()
{
	int i;
	int M=100;//元素个数100； 
    SqList *L;
    L=Creat(M);//创建100个元素所需的空间
	srand((int)time(NULL));
	for(i=0;i<M;i++)
	{
	L->Data[i]=(rand()%100+100);//随机输入 [100，200)的元素100个 
	L->N++;
	}
	printf("原来元素：\n");
	for(i=0;i<M;i++)
	{
	printf("%d ",L->Data[i]);
	}
	printf("\n ");
	printf("\n ");
	
	delet(L);//删除操作 
	printf("删除所有偶素后元素：\n");
	for(int i=0;i<L->N;i++)
	{
	printf("%d ",L->Data[i]);
	}
}
