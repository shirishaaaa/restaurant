#include<stdio.h>
typedef struct{
int no;
int itemno;
}element;
element temp2;
element arr[50];
int t[10];

int totaltime[50];
void main()
{
   int i,j,temp1,item,c,z,min;
t[1]=6;t[2]=2;t[3]=7;t[4]=5;t[5]=7;t[6]=7;t[7]=6;t[8]=8;t[9]=8;t[10]=10;
 printf("place order:\n");
 for(i=1;i<=50;i++)
    {
        printf("order no:%d\n",i);
        arr[i].no=i;
        totaltime[i]=0;
        printf("items:");
        scanf("%d",&item);
        if(item==0)
        {
            printf("order closed");
  }
        else
{
while(item==1||item==2||item==3||item==4||item==5||item==6||item==7||item==8||item==9||item==10)
            {
                arr[i].itemno+=1;
                totaltime[i]+=t[item];
                scanf("%d",&item);
            }
        }
        printf("continue?\n");
        scanf("%d",&c);
        if(c!=1)
            break;
    }
    z=i;
    for(i=2;i<z;i++)
    {
        min=i;
        for(j=i+1;j<=z;j++)
        if(totaltime[j]<totaltime[min])
                min=j;
        temp1=totaltime[i];
        totaltime[i]=totaltime[min];
        totaltime[min]=temp1;
        temp2=arr[i];
                                                                                                                                                                  arr[i] = arr[min];
        arr[min]=temp2;
    }
    printf("dispatched order:\n");
    printf("order number\tnumber of items\tprocessing time\n");
    for(i=1;i<=z;i++)
    {
        printf("%d\t\t%d\t\t%d\n",arr[i].no,arr[i].itemno,totaltime[i]);
    }}

