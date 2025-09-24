#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{
int age=0,P=0,gender=0,t;
float R,M=0;
double Y,x=0;
  R=0.04;  //R= karmozd
  t=120;   // t= time of bazpardakht bar hasb mah
  Y=0; // Y= mablagh ghest mahyane
  // P is loan mount (toman)

    printf( "Enter your age \n");
    scanf( "%d", &age);
    printf ( "Enter gender: 1 for female or 2 for male \n");
    scanf ("%d", &gender);

    switch(gender)
     { case 1:
          { if( age < 23)
               P=150000000;
            else
               P=120000000;}
        break;

      case 2:
           {if(age <=25)
                P=150000000;
            else
                P=120000000;}
     }

     M=1+(R/12);
     x=pow(M,t);
     Y=((P*x*(M-1))/(x-1));
     printf("Mablaghe gheste mahyane is %lf\n",Y);

    return 0;
}
