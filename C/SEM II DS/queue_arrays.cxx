#include <stdio.h>
#include<stdlib.h>
#define SIZE 4

void enque();
void deque();
void display();

int front=-1,rear=-1,queue[SIZE],item,ch;
int main()
{
    while(1){
    
    printf("\t\t\t***MENU***\n1.ENQUE\n2.DEQUE\n3.DISPALY\n4.EXIT\n");
    printf("Enter your choice : ");
    scanf("%d",&ch);
    
    switch(ch){
      case 1 : enque();break;
      case 2 : deque();break;
      case 3 : display();break;
      case 4 : exit(0);break;
      default : printf("Enter correct option \n");
    }
    }
    return 0;
}

void enque(){
    if(rear>=SIZE-1){
        printf("Item cannot be inserted, queue is full\n");
    }
    else{
        printf("Enter the item to be inserted : ");
        scanf("%d",&item);
        rear++;
        queue[rear]=item;
        if(front==-1){
            front++;
        }
    }
    printf("\n");
}

void deque(){
    if((front==-1)){
        printf("Queue is Empty\n");
    }
    else{
        item=queue[front];
        front++;
        printf("Deleted item = %d",item);
    }
    printf("\n");
}

void display(){
    int i;
    if((front==-1)){
        printf("Queue is empty\n");
    }
    else{
        for(i=front;i<=rear;i++){
            printf("%d\t\t",queue[i]);
        }
    }
    printf("\n");
}