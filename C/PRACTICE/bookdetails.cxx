#include<stdio.h>
#include<string.h>
struct book{
	char name[20];
	char author[20];
	int pages;
	float price;
}b;

int main(){
	printf("Enter the name of the book : ");
	gets(b.name);
	printf("Enter the author name : ");
	gets(b.author);
	printf("Enter the number of pages : ");
	scanf("%d",&b.pages);
	printf("Enter the price of the book :");
	scanf("%f",&b.price);
	printf("\n\n");
	printf("\t\t....  THE DETAILS OF THE BOOK..... \t\t\n\n");
	printf("NAME :%s \nAUTHOR :%s\nPAGES :%d\nPRICE:%f\n",b.name,b.author,b.pages,b.price);
	return 0;
}