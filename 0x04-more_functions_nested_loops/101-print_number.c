#include "main.h"


void print_number(int n)
{

  int length = 0;
  unsigned int number;
  int i;
  int p;
  int j;
 
    if (n < 0)
	   {
	    _putchar('-');
	      number = (unsigned int)(-n);
	     
	   }else{
	       number = n;
	   }
 
  if (number == 0)
  {
      length = 1;
  }
  else
  {
      while (number != 0)
     	{
    	  number /= 10;
    	  length++;
      	}
  }
  
   if (n < 0)
	   {
	      number = (unsigned int)(-n);
	     
	   }else{
	       number = n;
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
