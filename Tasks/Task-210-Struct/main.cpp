#include "mbed.h"

// Date Type ComplexNumber_C
typedef struct {
  double real;
  double imag;
} ComplexNumber_C;


int main() {

    //Create instance of a complex number
    ComplexNumber_C p;

    //Initialise each attribute 
    p.real = 2.0;
    p.imag = 3.0;
    
    //Create and Initialise 
    ComplexNumber_C q = {1.0, 1.0};
    ComplexNumber_C y = {0.0, 0.0};

    // TASK:
    // Create another complex number y
    // Calculate the complex sum of p and q and store in y
    // Use printf to display as a complex number (hint: you need two placeholders)
    
    while (true) {
    y = {p.real + q.real, p.imag + q.imag};
    int Resultreal = y.real, Resultimag = y.imag;
    printf("real component %d\n", Resultreal);
    printf("imaginary component %d\n", Resultimag);
    wait_us(1000000);
    }
}
