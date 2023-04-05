#include <stdio.h>

int main (int argc, char **argv) {
  FILE *f = fopen (argv[1], "r");
  unsigned int c = getc (f);
  int offset = 1;
  while (c != EOF) {
    if (c > 128) {
      printf ("unicode found at position %d: %d\n", offset, c);
    }
    c = getc (f);
    offset = offset + 1;
  }
}

  
