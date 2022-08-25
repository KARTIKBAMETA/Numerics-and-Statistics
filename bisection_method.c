#include<math.h>
#include<stdio.h>
float f(float(x))
{
    return(cos(x)-3*x+1);
}
int main()
{
    float x0,x1,x,e;
    int itr=1;
    while(1)
    {
        printf("\n Enter the value of x0 and x1-- ");
        scanf("%f%f",&x0,&x1);
        if(f(x0)*f(x1)<0)
        { break; }
        else{
            printf("\n WRONG INTERVAL!!!!!");
        }
    }
    printf("\n Enter the error---");
    scanf("%f",&e);
     while(1)
     {
         x=(x0+x1)/2;
         printf("\n At iteration %d, the value is %f",itr++,x);
         if(fabs(f(x))<e)
         {
             printf("\n %f is the root of the equation.",x);
             break;
         }
         else if(f(x0)*f(x)<0)
         { x1=x; }
         else{
             x0=x;
         }
     }
}
