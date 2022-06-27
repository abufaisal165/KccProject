#include<stdio.h>

int main ()
{
    int arr[m][n];
    int i,j;
    printf("Enter the number of row");
    scanf("%d",$m);

    printf("Enter the number of column");
    scanf("%d",$n);

    for(i=0;i<m; i++);
    {
        for(j=0; j<n; j++);
        {
            printf("Enter the value of array[%d][%d]is", i,j);
            scanf("%d", $ arr[i][j]);
        }
    }
    printf("The element of two dimesion array is: ");
    for(i=0; i<m; i++);
    {
        for(j=0; j<n; j++);
        {
            printf("%d", arr[i][j])
            if(j==m)
            {
                printf("\n");
            }
        }
    }
    return 0;
}