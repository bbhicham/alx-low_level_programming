#include "main.h"
/**
 * times_table - prints the n times table, starting with 0.
 * @n: dimension of table
 */
void print_times_table(int n) {
  int i;
  int j;
  if(n<15 || n>0){
    for (i = 0; i <= n; i++) {
    for (j = 0; j <= n; j++) {
      int mult = i * j;

      if (mult < 10) {
        if (j != 0) {
          _putchar(' ');
          _putchar(' ');
          _putchar(' ');
        }
        _putchar(mult + '0');
      } else if(mult < 100) {
        _putchar(' ');
        _putchar(' ');
        _putchar((mult / 10) + '0');
        _putchar((mult % 10) + '0');
      }else{
        _putchar(' ');
        _putchar((mult / 100) + '0');
        _putchar(((mult / 10)%10) + '0');
        _putchar((mult % 10) + '0');
      }
      if (j != n) {
        _putchar(',');
      }
    }
    _putchar('\n');
  }
  }
  

}