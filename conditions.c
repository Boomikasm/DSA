// weather condition//
#include<stdio.h>
   float convert(float f)
      {
        return(5.0/9*(f-32));

      }
   void condition(float t)
      {
        if(t<0)
          printf("freezing");
        else if(t>=0&&t<10)
          printf("very cold");
        else if(t>=10&&t<20)
          printf("cold");
        else if(t>=20&&t<30)
          printf("normal");
        else if(t>=30&&t<40)
          printf("hot");
        else
          printf("very hot");
      }
    int main()
      {
        float t,f;
        scanf("%f",&f);
        t=convert(f);
        condition(t);
        return 0;
       }
