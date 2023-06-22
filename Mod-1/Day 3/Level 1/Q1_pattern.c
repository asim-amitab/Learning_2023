#include<stdio.h>
void first_Pattrn(int n);
void second_Pattrn(int g, int n);
void third_Pattrn(int n);
int main()
{
    int n;
    printf("Enter the Value of n: ");
    scanf("%d", &n);
    
    first_Pattrn(n);
    return 0;
}

void first_Pattrn(int n)
{
    int g=n;
    while(n>0)
    {
        for(int j=1; j<=n; j++)
        {
            printf("%d", j);
        }
        second_Pattrn(g,n);
        third_Pattrn(n);
        //printf("\n");
        n--;
    }
}

void second_Pattrn(int g, int n)
{
    int count = g-n;
    for(int i=0; i<(count*2); i++)
    {
        printf(" ");
        //break;
    }
}

void third_Pattrn(int n)
{
    while(n>0)
    {
        for(int j=n; j>=1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
        break;
    }
}