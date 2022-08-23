#include<stdio.h>
#include<math.h>
int main()
{
  float True,Absolute;        //Initialise TRue value and ABsolute value
  float Ea,Er,Ep;             
  scanf("%f%f",&True,&Absolute);
  Ea=fabs(True-Absolute);  //Ea=Absolute Error
  Er=Ea/True;  //Er=Relative Error
  Ep=Er*100;    //Ep=Percentage error
  printf("%f",Ea);
  printf("%f",Er);
  printf("%f",Ep);
  return 0;
}
