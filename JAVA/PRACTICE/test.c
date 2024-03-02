#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    char name[50];

    fp = fopen("xyz.txt", "w");
    if (fp == NULL)
    {
        printf("Unable to create the file\n");
    }
    else
    {
        // for(i=0;i<value;i++)

        printf("Enter a string to write to the file\n");
        gets(name);
        fputc(name, fp);
    }
    printf("Data written in the file successfully\n");

    fclose(fp);
    getch();
    return 0;
}