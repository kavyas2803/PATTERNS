#include <stdio.h>  
  
int main()  
{  
    int n;  
    printf("Enter the number of rows");  
    scanf("%d",&n);  
    for(int i=n;i>=1;i--)  
    {  
        for(int j=1;j<=i;j++)  
        {  
            if(i==n || j==1 ||i==j)
            printf("*");  
            else
            printf(" ");
        }  
        printf("\n");  
    }  
    return 0;  
}  
