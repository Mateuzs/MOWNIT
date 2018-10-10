#include <stdio.h>
#include <gsl/gsl_ieee_utils.h>

int
main (void) 
{
  float f = 1.0/3.0;
  double d = 1.0/3.0;

  double fd = f; /* promote from float to double */
  for(int i =0;i<20;i++){
  printf("i = %d:\n\n", i);    
  
  printf("f: %.100lf\n", f);
  printf("d: %.100lf\n", d);
  printf(" f="); gsl_ieee_printf_float(&f); 
  printf("\n");

  printf("fd="); gsl_ieee_printf_double(&fd); 
  printf("\n");

  printf(" d="); gsl_ieee_printf_double(&d); 
  printf("\n");
  f = f/10000.0;
  d = d/10000.0;
}
  return 0;
}