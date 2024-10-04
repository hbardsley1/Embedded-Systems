#include "mbed.h"

// Date Type ComplexNumber_C
typedef struct {
  double real;
  double imag;
} ComplexNumber_C;

// void extracted(ComplexNumber_C * ptrP) {
//   ComplexNumber_C p = {2.0, 3.0};
//   ComplexNumber_C *ptrP = &p;
//   ComplexNumber_C &nice_ptr = *ptrP;
// }

double calc_mag(ComplexNumber_C c){
    return sqrt(2);
}


int funcy(int a){
    return a+1;
}

int main() {

    int i=5;
    int q = funcy(i);

  // Create instance of a complex number
  ComplexNumber_C p;

  // Initialise each attribute
  p.real = 2.0;
  p.imag = 3.0;

//   // Create and Initialise
//   ComplexNumber_C q = {1.0, 1.0};
//   ComplexNumber_C *ptrP;
//   ptrP = &p;

//   ptrP->imag = 100.0;
//   ptrP->real = 200.0;

//   refQ.real = 33.0;
//   refQ.imag = 66.0;

//   extracted(ptrP);
  // TASK:
  // Create another complex number y
  // Calculate the complex sum of p and q and store in y
  // Use printf to display as a complex number (hint: you need two placeholders)

  while (true) {
  }
}
