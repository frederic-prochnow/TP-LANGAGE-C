#include <stdio.h>
void main()
{
  int cpt =0;
  int verif1 = 0;
  int verif2 = 0;
  char c;
  c = getchar();
  while (c!= EOF) {
    if(c == '(') {
      verif1 = 1;
    }
    if(c == ')') {
      verif2 = 1;
    }
    c = getchar();
  }
  if(verif1 == 1 && verif2 == 1) {
    cpt = 1;
  }
  printf("%d\n",cpt);
}
