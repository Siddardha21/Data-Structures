#include<stdio.h>
#include<curses.h>
#include<stdlib.h>

int main()
{

        int *productof,*firstmatrix,*secondmatrix;
        int *A,*B,*C;
        int i,j,k=0;
        int rowofmatA,colofmatA,rowofmatB,colofmatB,sizeofA,sizeofB,sizeofC;
        int 

        printf("\nEnter the rows and columns of the first matrix\n");
        scanf("%d%d",&rowofmatA,&colofmatA);

        printf("\nEnter the rows and columns of the second matrix\n");
        scanf("%d%d",&rowofmatB,&colofmatB);

        sizeofC = rowofmatA*colofmatB;
        sizeofA = rowofmatA*colofmatA;
        sizeofB = rowofmatB*colofmatB;

        A  = (int *)malloc(sizeofA*sizeof(int *));
        firstmatrix = A;

        B = (int *)malloc(sizeofB*sizeof(int *));
        secondmatrix = B;

        C    = (int *)malloc(sizeofC*sizeof(int *));
        productof = C;


        printf("\nEnter the elements of the matrix A\n");

        for(i=0;i<sizeofA;i++,firstmatrix++)
        scanf("%d",firstmatrix);

        printf("\nEnter the elements of the matrix B\n");

        for(i=0;i<sizeofB;i++,secondmatrix++)
        scanf("%d",secondmatrix);

        firstmatrix=A;
        secondmatrix= B;

        if(rowofmatA==1 && colofmatB==1)
        {
            for(i=0;i<rowofmatA;i++)
            {
                for(j=0;j<colofmatB;j++)
                {
                *productof=0;
                for(k=0;k<rowofmatB;k++)
                    *productof = *productof + (*(firstmatrix + (k + i*colofmatA))) * (*(secondmatrix + (j+k*colofmatB)));
                productof++;
                }
            }
        }
    else
    {
        for(i=0;i<rowofmatA;i++)
        {
        for(j=0;j<colofmatB;j++)
        {
            *productof=0;
            for(k=0;k<rowofmatB;k++)
                *productof = *productof + (*(firstmatrix + (k + i*colofmatA))) * (*(secondmatrix + (j+k*rowofmatB)));
            productof++;
        }
        }
        }
        printf("\nProduct of the Matrices A & B is: \n");
        productof = C;
        for(i=0;i<rowofmatA;i++)
        {
         printf("\n");
         for(j=0;j<colofmatB;j++,productof++)
         printf("%d\t",*productof);
         }
         printf("\n");
        free(A);
        free(B);
        free(C);
        getch();
    }
