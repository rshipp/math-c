/* countby.c
 * count by n (0 to 100)
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
  int n, x, atoi();
  if (argc != 2) {
    printf("usage: %s n\nwhere 'n' is some int to count by, from 0 to 100, inclusive.\n", argv[0]);
    return 1;
  }
  x = atoi(argv[1]); /* this must be after the if, or it will segv when argc < 2 */
  if (x == 0) {
    printf("attempting to count by 0 will lead to an infinite loop!\n");
    return 1;
  }
  for(n = 0; n <= 100; n += x)
    printf("%d ", n);
  printf("\n");
  return 0;
}
