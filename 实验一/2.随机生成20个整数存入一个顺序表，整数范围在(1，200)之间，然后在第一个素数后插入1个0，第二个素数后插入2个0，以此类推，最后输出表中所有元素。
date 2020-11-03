#include <stdio.h>  
#include <stdlib.h>  
#include <time.h> 
#include <math.h> 
struct SqList {
    int *Data; // 本实验中，元素类型设置为int
int N; //表中现有元素个数
int MaxSize; // 表的最大容量
};

struct SqList * Creat(int M) //顺序表的创建 
{
    struct SqList * L;
    L = (struct SqList *)malloc(sizeof(struct SqList));
    L->Data = (int *)malloc(sizeof(int) * M);
    L->N = 0; /* 初始时元素个数为0 */
    L->MaxSize = M;
    return L;
}


void Insert	 (struct SqList *L,int i)//i后面插入
{
	int X=0;
	int j;
	for ( j = L->N-1; j >=i+1; j -- )
       {
       	 L->Data[j + 1] = L->Data[j]; 
	   }
    L->Data[i+1] = X; 
    L->N ++;

 }
  
	int main()
	{
	int i,M=20,cnt=0,p,a;
	int n=0;
    SqList *L;
    L=Creat(M+n);//总插入0个素为n，所以需要的内存在原来基础上+n 
	srand((int)time(NULL));
	for(i=0;i<M;i++)
	{
	L->Data[i]=(rand()%198+1);//存入20个元素  (1，200)
	L->N++;
	}
	printf("原来元素：\n");
	for(i=0;i<M;i++)
	{
	printf("%d ",L->Data[i]);//输出20个元素 
	}
	printf("\n");
	printf("\n");
	printf("插入0后：\n");
	for(p=0;p<M+n;p++)//m（原来的元素个数） +n（插入0的个素） =总输出元素个素 
	{
		if(L->Data[p]<=2&&L->Data[p]>0)//素数判断 
	{
       Insert(L,p);
       	printf("%d ",L->Data[p]);
	}
	else if(L->Data[p]==0)//遇见0，直接输出； 
	{
		printf("%d ",L->Data[p]);
	}
	else
	{
	int a=0;
	int i,j,k,m;
	
	 for(j=2;j<L->Data[p];j++)
    {
       if(L->Data[p]%j==0)//不为素数,直接输出 
      {
      	printf("%d ",L->Data[p]);
      	break;
	  }
      else if(j==L->Data[p]-1)//为素数操作 ：插入0； 
        {
        	cnt++;//记录素数个素，为下面插入0个数准备的 
        	for(a=0;a<cnt;a++)
        	{
        		n++;//n：总插入0个数 
        		Insert(L,p);
			}
        	printf("%d ",L->Data[p]);//输出操作后的元素； 
			
        
		}
	}

		  }  
	}
}


