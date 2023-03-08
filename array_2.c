#include<stdio.h>

int main()
{
    int i,j,row,col;
    int A[10][10],B[10][10],C[10][10];

    printf("num of row = ");
    scanf("%d",&row);
    printf("num of col = ");
    scanf("%d",&col);

    while(row!=col)
    {
        printf("\nError!! The number of row and col in not equal.\n\n");

        printf("num of row = ");
    scanf("%d",&row);
    printf("num of col = ");
    scanf("%d",&col);
    }

    //scaning A matrix
    printf("\n\nenter A matrix elements.\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    //printing A matrix
    printf("A = ");
    for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<col; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }


    //scaning B matrix
     printf("\n\nenter B matrix elements.\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    //printing B matrix
    printf("B = ");
     for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<col; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }


    //adding C the matrix
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    //printing C matrix
    printf("\n\nThe sum is:-\nA + B = ");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
        printf("\t");
    }



    getch();

}
