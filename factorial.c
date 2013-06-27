/* just a demo main() for the factorial funcs
 */

#include <stdio.h>
#include "maths.h"

int main(int argc, char *argv[]) {
  int atoi();
  
  if (argc >= 2) { /* prevent seg fault */
    printf("rec: %d\n", factorial_r(atoi(argv[1])));
    printf("for: %d\n", factorial_f(atoi(argv[1])));
  }
  
  return 0;
}
