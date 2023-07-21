#include "main.h"


void print_number(int n)
{

  int length = 0;
  int number = n;
  int i;
  int p;
  int j;
  if (number == 0)
  {
      length = 1;
  }
  else
  {
      if (number < 0)
	   {
	      number = -number;
	   }

      while (number != 0)
     	{
    	  number /= 10;
    	  length++;
      	}
  }
  number = n;
  if (number < 0)
	   {
	      number = -number;
	      _putchar('-');
	   }
  for (i = length-1 ; i >=0; i--) {
      p =1;
      if(i >=1){
        for (j = 0; j < i; j++) {
            p *= 10; 
        }
      
        if(i==length-1){
         _putchar('0' + (number /p)); 
        }else{
         _putchar('0' + ((number /p)%10));
        }
        
      }else{
        _putchar('0' + (number  % 10)) ;
      }
  }
  
}
