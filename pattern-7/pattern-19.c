#include<stdio.h>
 
int main()
{
    int i,j,n;
 
    printf("Enter the no of lines\n");
    scanf("%d",&n);
 
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=i;j--)
        {
            printf("%c",(char)(j+64));
        }
        printf("\n");
    }
    return 0;
}