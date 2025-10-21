#include "io.h"

void scan_data(double akkumulator, char* operator, double* operand){
  printf("current: %lf ", akkumulator); 
  printf("Next operater pls!!: ");
  char char_in;
  double operand_in;
  scanf("%c %lf", &char_in, &operand_in);
  printf("%c og %lf\n", char_in, operand_in);
}
