#include <stdio.h> 

int main(void) 
{ 
  int x = 2;
  print(" x = %d \n", x); 
  return 0; 
}
/* Effacez point virgule : ERROR EXPECTED , OR ; BEFORE PRINTF */
/* Remplacez x par y : ERROR Y UNDECLARED FIRST USE IN THIS FUNCTION */
/* Remplacez main par principal : ERROR REFERENCE INDEFINIE VERS MAIN COLLECTE 2 ERROR LD RETURNED 1 EXIT STATUS */
/* Remplacez printf par print : ERROR REFERENCE INDEFINIE VERS PRINT COLLECTE 2 ERROR LD RETURNED 1 EXIT STATUS */


