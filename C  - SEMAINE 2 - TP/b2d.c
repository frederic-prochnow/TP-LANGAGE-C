#include <stdio.h>
#include <ctype.h>

int b2d();
void main()
{
  int valeur = 0;
  char c;
  c = getchar();
  while(c!= '\n') {
    if(isdigit(c) && valeur != -1) {
      valeur = valeur*2 + c-'0';
    } else {
      valeur = -1;
    }
    c = getchar();
  }
  printf("%d\n",valeur);
}
