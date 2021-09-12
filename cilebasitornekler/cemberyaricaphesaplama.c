#include <stdio.h>


int main(void)
{  
   float PI=3.14;//pi'değerini 3.14, float olarak atadık
   float yaricap;//yaricap degiskeninin tanımladık
   printf("Cemberin yaricapini giriniz : \n ");
   scanf("%f",&yaricap);
   printf("Cemberin Cevresi = %f", 2*PI*yaricap);
   
   return 0;
}
