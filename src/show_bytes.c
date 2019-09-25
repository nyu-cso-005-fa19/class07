#include <stdio.h>

void show_bytes(unsigned char * start, int len){
  int i;
  for (i = 0; i < len; i++)
    printf("%p\t%2x\n", start+i, start[i]);
  printf("\n");
}

int main() {
  int x = 0x12345678;
  show_bytes((char *) &x, sizeof(int));
  return 0;
}
