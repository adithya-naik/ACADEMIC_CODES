/*Code for implementing a stack using array*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 5
//declaring functions
int push();
int pop();
int display();
int isFull();
int isEmpty();

int item, top = -1, ch, stack[size];
//Main starts
int main()
{
	while (ch != 6)
	{ //while starts
		printf("***MENU***\n1.PUSH\n2.POP\n3.DISPLAY\n4.isFull\n5.isEmpty\n6.EXIT\n");
		printf("Enter your choice from MENU\n");
		scanf("%d", &ch);
		switch (ch)
		{ //switch starts
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		case 4:
			isFull();
			break;
		case 5:
			isEmpty();
			break;
		case 6:
			exit(0);
		default:
			printf("Enter the correct option\n");

		} //switch ends
	}	  //while ends
} //main ends

/*push function*/
int push()
{ //push starts
	if (top == size - 1)
	{ //if starts
		printf("***Stack is full (stack overflow)\n");

	} //if ends
	else
	{ //else starts
		printf("Enter the element to be pushed into the stack : ");
		scanf("%d", &item);
		top++;
		stack[top] = item;

	} //else ends
} //push ends

/*pop function*/
int pop()
{ //pop starts
	int item;
	if (top == -1)
	{ //if starts
		printf("Stck is empty (stack underflow)\n");
	} //if ends
	else
	{ //else starts
		item = stack[top];
		top--;
		printf("The deleted item from the stack is : %d\n", item);
	} //else ends
} //pop ends

/*display function*/
int display()
{ //display starts
	int i;
	if (top == -1)
	{ //if starts
		printf("STAck is empty(under flow)\n");
	} //if ends
	else
	{ //else starts
		for (i = top; i>=0;i--)
		{ //for starts
			printf("%d ", stack[i]);
		} //for ends
		printf("\n");
	}	  //else ends
} //display ends

/*is empty function*/
int isEmpty()
{ //isempty starts
	if (top == -1)
	{ //if starts
		printf("Stack is EMpty\n");
	} //if ends
	else
	{ //else starts
		printf("Stack is no tempty\n");
	} //else ends
} //isempty ends

/*is Full function*/
int isFull()
{ //isempty starts
	if (top == size - 1)
	{ //if starts
		printf("Stack is full\n");
	} //if ends
	else
	{ //else starts
		printf("Stack is not full\n");
	} //else ends
} //isempty ends
