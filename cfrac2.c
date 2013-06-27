/* cfrac2.c
 * calculate continued fractions - the second, revised version of cfrac
 * this adds the ability to accept the terms as arguments, and fixes the 
 * C syntax errors it had before. It also increases the accuracy of the 
 * output from %f to %.99g.
 */

#include <stdio.h>
#include "maths.h"

int main(int argc, char *argv[]) {
  int el = 0, atoi(); /* el = errorlevel */
  double cfrac(); 
  void noargs(), rightargs(), usage();
  
  if (argc == 3) {
    int a = atoi(argv[1]), n = atoi(argv[2]);
    if (n >= 3) {
      rightargs(a, n);
    } else {
      usage();
    }
  } else if (argc == 1) {
    noargs();
  } else {
    usage();
  }
  
  return el;
}

void noargs() {
  int a, b;
  
  printf("Input term: ");
  scanf("%d", &a);
  printf("\nNumber n, n >= 3: ");
  scanf("%d", &b);
  printf("\nThe value of that continued fraction is about %.99g\n", cfrac(a, b));
  
  return;
}

void rightargs(int a, int n) {
  printf("%.99g\n", cfrac(a, n));
  
  return;
}

void usage() {
  printf("cfrac: calculate Continued FRACtions\nUsage: cfrac [int a] [int n >= 3]\n OR\nUsage: cfrac\t(for interactive mode)\n");
  
  return;
}
