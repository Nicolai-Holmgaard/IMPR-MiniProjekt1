#include "calculator.h"
#include "stdio.h"


void scan_data(double akkumulator, char* operator, double* operand){
  // Quick message
  printf("Current: %lf \n", akkumulator); 
  printf("Next operation: ");
  
  // Temperary buffer for the whole line. It catches until the newline. 
  // Max 64 characters, because if you use more then ~60 decimals of precision, then dont use this tool 🤣
  char temp_buffer[64];
  scanf(" %[^\n]", temp_buffer);
  // Taking whole line and getting out the operator and operand
  sscanf(temp_buffer, " %c %lf", operator, operand);
  
  printf("\n");
}

int main(void) {
  // Values with defaults 
  double acc = 0.0;
  char test = '+';
  double new_val = 0.0;

  printf("Starting run\n");
  
  // While true loop = best loop
  while (1) {
    scan_data(acc, &test, &new_val);
    do_next_op(test, new_val, &acc);
  }
}
