#include <stdio.h>
int main()
{ float  pa = 9000000, pd = 3600000, income , tf , ti;
  int n;
  printf(" Your income of this year:");
  scanf("%f",&income);
  printf("Number of dependent:");
  scanf("%d",&n);
  tf = 12*(pa + n*pd);
  printf("Tax-free income:%.0f\n",tf);
  ti= income - tf;
  if(ti<=0)
  { printf("Taxable income = 0\n");
    printf("Income tax = 0\n");}
   else if (ti>0 && ti<= 5000000)
   { printf("Taxable income = %.0f\n",ti);
    printf("Income tax = %.0f\n",ti*0.05);}
   else if (ti>5000000 && ti<=10000000)
   { printf("Taxable income = %.0f\n ",ti);
     printf("Income tax = %.0f\n",5000000*0.05 + (ti-5000000)*0.1);}
   else if (ti>10000000 && ti<=18000000){
     printf(" Taxable income = %.0f\n",ti);
     printf("Income tax = %.0f\n",5000000*0.05+8000000*0.1+(ti-10000000)*0.15);}
   else {
    printf("Taxable income = %.0f\n",ti);
    printf("Income tax = %.0f\n",5000000*0.05+5000000*0.1+8000000*0.15+(ti-18000000)*0.2);}
    return 0 ;
}

