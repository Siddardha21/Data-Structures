#include<stdio.h>
#include<stdlib.h>

int i,j;
int** memory(int m,int n) {
int **a, **sum, **b;

a=(int **)malloc(m*sizeof(int*));
for(i=0;i<m;i++)
*(a+i)=(int *)malloc(n*sizeof(int));
return a;
b=(int **)malloc(m*sizeof(int*));
for(i=0;i<m;i++)
*(b+i)=(int *)malloc(n*sizeof(int));
return b;
sum=(int **)malloc(m*sizeof(int*));
for(i=0;i<m;i++)
*(sum+i)=(int *)malloc(n*sizeof(int));
return sum;
}
int main()
{
int **a,**b,m,n,**sum;
printf("\nEnter the number of rows of the Matrix: ");
scanf("%d",&n);
printf("Enter the number of columns of the Matrix: ");
scanf("%d",&m);
a=memory(m,n);
b=memory(m,n);
printf("\nEnter the elements of the Matrix A: \n");
for(i=0;i<n;i++){
for(j=0;j<m;j++){
scanf("%d",&a[i][j]);
}
}
printf("\nEnter the elements of the Matrix B: \n");
for(i=0;i<n;i++){
for(j=0;j<m;j++){
scanf("%d",&b[i][j]);
}
}
sum = memory(m,n);
printf("\nSum of the Matrices A & B is: \n\n");
for(i=0;i<n;i++){
for(j=0;j<m;j++){
    sum[i][j]=a[i][j]+b[i][j];
 printf("%d   ", sum[i][j]);
            if (j == c - 1) {
                printf("\n\n");
            }
        }
   }
return 0;
}
