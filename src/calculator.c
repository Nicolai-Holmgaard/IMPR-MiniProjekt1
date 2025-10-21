#include "calculator.h"
#include "math.h"
#include "stdlib.h"
#include "stdio.h"

void do_next_op(char operator, double operand, double* akkumulator) {
  // Switch case looking on the operator
  switch (operator) {
    case '+':
      *akkumulator = *akkumulator + operand;  
      break;
    case '-':
      *akkumulator = *akkumulator - operand;  
      break;
    case '*':
      *akkumulator = *akkumulator * operand;  
      break;
    case '/':
      if (operand != 0) {
        *akkumulator = *akkumulator / operand;  
      }
      break;
    case '^':
      *akkumulator = pow(*akkumulator,operand);  
      break;
    case '#':
      if (*akkumulator > 0) {
        *akkumulator = sqrt(*akkumulator);  
      }
      break;
    case '%':
      *akkumulator = - *akkumulator;  
      break;
    case '!':
      if (*akkumulator != 0) {
        *akkumulator = 1/(*akkumulator);  
      }
      break;
    case 'q':
      exit(1);  
      break;
         
      
  }
}
