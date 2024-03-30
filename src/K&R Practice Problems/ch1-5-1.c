#include <stdio.h>

int main() {
  int c;
  c = getchar();
  while (c != EOF) {
    putchar(c);
    c = getchar();
  }
  return 0;
}

/* Original K&R C Code:

#include <stdio.h>

main() {
  int c;
  c = getchar();
  while (c != EOF) {
    putchar(c);
    c = getchar();
  }
}

*/
