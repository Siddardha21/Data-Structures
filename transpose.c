#include<stdio.h>
#include<stdlib.h>

int i,j;
int** memory(int c,int r){
int **a;
int **b;
a=(int **)malloc(c*sizeof(int*));
for(i=0;i<c;i++)
*(a+i)=(int *)malloc(r*sizeof(int));
return a;
b=(int **)malloc(c*sizeof(int*));
for(i=0;i<c;i++)
*(b+i)=(int *)malloc(r*sizeof(int));
return b;
}

int main()
{
int **a,**b,r,c;
printf("\n\nEnter the number of rows of the Matrix: ");
scanf("%d",&r);
printf("\nEnter the number of columns of the Matrix: ");
scanf("%d",&c);
a=memory(c,r);
printf("\nEnter the elements of the Matrix:\n");
for(i=0;i<r;i++){
for(j=0;j<c;j++){
scanf("%d",&a[i][j]);
}
}

b=memory(c,r);
    
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            b[j][i] = a[i][j];
        }

    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < c; ++i)
        for (j = 0; j < r; ++j) {
            printf("%d  ", b[i][j]);
            if (j == r - 1)
                printf("\n");
        }
return 0;
}
