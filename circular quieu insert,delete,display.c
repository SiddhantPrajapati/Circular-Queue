#include<stdio.h>
#define max 5
int insert();
int del();
int display();
int rear,front,q[max],val;
int insert()
{
    rear=rear+1;
    q[rear]=val;
}
int del()
{
    front=front+1;
}
int display()
{
    int i;
    for(i=front+1;i<=rear;i++)
        printf("%d\n",q[i]);
}
int main()
{
    int ch,n,loop,i,a;
    do
    {
        printf("\n Enter your choice\n 1)insert\n 2)delete \n 3)display \n 4)exit \n");
        scanf("%d",&ch);
        if(ch>4)
        {
            printf("\n enter valid choice");
        }
        else
        {
            switch(ch)
            {
                case 1:
                    if(rear==max)
                    {
                        rear=-1;
                    }
                    else if(rear>max)
                    {
                        printf("\nqueie is full\n");
                    }
                    else
                    {
                        printf("\nEnter element:");
                        scanf("%d",&val);
                        insert();
                    }
                    break;
                case 2 :
                     if(front<=-1)
                    {
                        printf("\nqueie is empty");
                    }
                    else
                    {
                        del();
                    }
                    break;

                case 3:
                    if(front<=-1)
                    {
                        printf("\nqueie is empty");
                    }
                    else
                    {
                        printf("\nElement of queie:\n");
                        display();
                    }
                    break;
            }
        }
    }
    while(ch!=4);
}

