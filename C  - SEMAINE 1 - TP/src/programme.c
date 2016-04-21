int incr(int t[8])
{
  int i;
  for (i = 0; i<8; i = i+1) {
    if(t[i] == 0) {
      t[i] = 1;
      return 1;
    }
    if(t[i] ==  1) {
      t[i] = 0;
    }
  }
  return 0;
}

#include <stdio.h>
int main(void)
{
  int i;
  int imem;
  int t[8];
  int j;
  int x;
  
  for( i=0; i<256; i = i+1) {
    for( j=0; j<8; j = j+1) {
    t[j] = 0;
    }
    imem = i;
    if( i >= 128) {
      t[0] = 1;
      i = i- 128;
    }
    if( i >= 64) {
      t[1] = 1;
      i = i - 64;
    }
    if( i >= 32) {
      t[2] = 1;
      i = i - 32;
    }
    if( i >= 16) {
      t[3] = 1;
      i = i - 16;
    }
    if( i >= 8) {
      t[4] = 1;
      i = i - 8;
    }
    if ( i >= 4) {
      t[5] = 1;
      i = i - 4;
    }
    if( i >= 2) {
      t[6] = 1;
      i = i - 2;
    }
    if( i >= 1) {
      t[7] = 1;
      i = i- 1;
    }
    x = 128 * t[0] + 64 * t[1] + 32 * t[2] + 16 * t[3] + 8 * t[4]
      + 4 * t[5] + 2 * t[6] + 1 * t[7];
   
    printf("%d %d %d %d %d %d %d %d =>> %d =>> "
	   ,t[0],t[1], t [2], t[3], t[4], t[5], t[6], t[7] ,x);
    if (incr(t) == 0) {
      printf("DEBORDEMENT CONSTATE \n");
    } else {
      printf("PAS DE DEBORDEMENT \n");
    }
    i = imem;
  }
}
