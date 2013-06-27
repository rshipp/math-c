/* just a demo main() for the factorial functions
 */

#include <stdio.h>
#include "maths.h"

int main(int argc, char *argv[]) {
  int atoi();
  
  if (argc >= 2) { /* prevent seg fault */
    printf("rec: %d\n", factorial_r(atoi(argv[1])));
    printf("for: %d\n", factorial_f(atoi(argv[1])));
  } else {
    printf("usage: %s integer\n", argv[0]);
    printf("where 0 < integer < 12\n");
  }
  
  return 0;
}
