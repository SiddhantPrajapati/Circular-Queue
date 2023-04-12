//circular queue
#include<stdio.h>
#define max 5
int q[max],val,rear=-1,front=-1,ch;
int ins(int);
int del(int);
int display(int);
int check(int);
int ins(int val)
{
    int i;
    if(rear>=max-1)
    {

        printf("\n queue is  full.\n");
    }
    else
    {
            printf("\n enter element:");
            scanf("%d",&val);
            rear=rear+1%max;
            q[max]=val;
    }
}
/*int check(int val)
{
    int val;
    if(q[max]!=NULL)
    {
        printf("\nQueue is full");
    }
    else
    {
        rear=rear+1%max;
        q[max]=val;
    }
}
*/
int del(int val)
{
    if(front>=max-1)
    {
        printf("\n queue is empty.\n");
    }
    else
    {
        front=(front+1)%max;
    }
}
int display(int val)
{
    int i;
    for(i=front+1;i<=rear;i++)
    {
        printf("%d\n",q[i]);
    }
}
int main()
{
    int n,i;
    do
    {
    printf("\nEnter your choice\n 1)insert \n 2)delete \n 3)display \n 4)exit \n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        ins(val);
        break;
    case 2:
        del(val);
        break;
    case 3:
        display(val);
        break;
    }
    }
    while(n!=4);
}
