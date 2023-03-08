#include<stdio.h>

int main()
{
    int first[10][10],second[10][10],result[10][10],i,j,k,r1,r2,c1,c2,sum=0;

    printf("Enter rows and cols for First matrix : ");
    scanf("%d %d",&r1,&c1);

    printf("Enter rows and cols for Second matrix : ");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("\n\nError!! The col of First matrix and the row of Second matrix is not equal.\n\n");
        printf("Enter rows and cols for First matrix : ");
        scanf("%d %d",&r1,&c1);
        printf("Enter rows and cols for Second matrix : ");
        scanf("%d %d",&r2,&c2);
    }

    //input for first matrix
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("first[%d][%d] = ",i,j);
            scanf("%d",&first[i][j]);
        }
        printf("\n");
    }

     //input for second matrix
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("second[%d][%d] = ",i,j);
            scanf("%d",&second[i][j]);
        }
        printf("\n");
    }

    //multiplying matrix
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum = sum + first[i][k] * second[k][j];
            }
                result[i][j] = sum;
                sum = 0;
        }
    }

    //printing first matrix
    printf("First Matrix : \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%d ",first[i][j]);
        }
        printf("\n");
    }

    //printing second matrix
    printf("Second Matrix : \n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ",second[i][j]);
        }
        printf("\n");
    }

    //printing result matrix
    printf("Result Matrix : \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }


    getch();
}
