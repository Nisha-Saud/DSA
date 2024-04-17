#include<stdio.h>
#include<stdlib.h>
#define MAX 50 

int queue_arr [MAX];
int rear = -1;
int front = -1;
int isEmpty();

void Enqueue()
{
    int add_item;
    if(rear ==MAX - 1)
    {
        printf("The queue is full \n");
        return;
    }
    else
    if(isEmpty()==1)
    {
        printf("The queue is empty\n");
        front = 0;
    }
    printf("enter the element that you wanna add\n");
    scanf("%d",&add_item);
    rear=rear+1;
    queue_arr[rear]=add_item;
}

void Dequeue()
{
    if(isEmpty()==1)
    {
        printf("The Queue is empty");
        return ;
    }
    else{
        printf("the deleted element is %d\n");
        queue_arr[front];
        front = front+1;
    }
}
void Traverse()
{
    int i;
    if(isEmpty()==1)
    {
        printf("The queue is Empty\n");
        return;
    }
    else
    {
        printf("Front id %d and  queue is :\n");
        for(i=front;i<=rear;i++);
        printf("%d ",queue_arr[i]);
	    printf("\n");
    }
}
 int isEmpty()
 {
    if(rear== -1 && front== -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
 }
 int main()
 {
    int choice;
    while(1)
    {
     printf("\n1.Enqueue\n");
	 printf("2.Dequeue\n");
	 printf("3.Traverse\n");
	 printf("4.Size\n");
	 printf("5.Quit");
     printf("Enter your choice");
     scanf("%d",&choice);
     switch(choice)
		 {
		 	
		 case 1 :
		 Enqueue();
		 break;
		 case 2:
		 Dequeue();
		 break;
		 case 3:
		 Traverse();
		 break;
		 case 4:
		 printf("The size of the queue is %d\n",rear-front+1);
		 break;
		 case 5:
		 exit(1);
		 default:
		 printf ("\n Wrong choice\n");
	 
 		}
    }
    return 0;
 }
