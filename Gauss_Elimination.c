//GAUSS ELIMINATION
#include<stdio.h>
#include<math.h>
void main()
{
int n,j,i,k;
scanf("%d",&n);
float Mat[n][n+1],t,x[n];
printf("enter the coefficients:-");
for(int i=0;i<n;i++)
     for(int j=0;j<=n;j++)
          scanf("%f",&Mat[i][j]);
printf("the input matrix is-");
for(int i=0;i<n;i++)
{printf("\n");
            for(int j=0;j<=n;j++)
               printf("\t%lf",Mat[i][j]);
}
//UPPER TRIANGULAR MATRIX
for(int i=0;i<n-1;i++)
     for(int j=i+1;j<n;j++)
        { t=Mat[j][i]/Mat[i][i];
          for(int k=0;k<=n;k++)
                Mat[j][k]=Mat[j][k]-t*Mat[i][k];
                }
printf("\n the UT MATRIX is-");
for(int i=0;i<n;i++)
    { printf("\n");
      for(int j=0;j<=n;j++)
           printf("\t%lf",Mat[i][j]);
     }
     //BACKWARD SUBSTITUTION
     for(int i=n-1;i>=0;i--)
     { float sum=0;
      for(int j=i;j<n;j++)
      sum=sum+Mat[i][j]*x[i];
      x[i]=(Mat[i][n]-sum)/Mat[i][i];
      }
printf("\n the solution is-");
for(i=0;i<n;i++)
printf("\t%lf",x[i]);
}
