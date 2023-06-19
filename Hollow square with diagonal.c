#include <stdio.h>

int main() {
    int n,i,j;
    printf("\n Enter the rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 || j==1 || i==n ||j==n || i==j || j==n-i+1)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    

    return 0;
}
