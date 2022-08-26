#include<stdio.h>
void main()
{
    int days;
    printf("enter no days in week:\n");
    scanf("%d",&days);
    switch (days)
    {
        case 1:
        printf("monday");
        break;
        case 2:
        printf("teusday");
        break;
        case 3:
        printf("wednesday");
        break;
        case 4:
        printf("thursday");
        break;
        case 5:
        printf("friday");
        break;
        case 6:
        printf("saturday");
        break;
        case 7:
        printf("sunday");
        break;
        default("invalid input");
        break;

    }
}