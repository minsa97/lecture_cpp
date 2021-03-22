// ComplexClassTest1.cpp
#include "Complex.h"

int main(){
	Complex a, b, c;

	a.readComplex ( "A =" );
	b.readComplex ( "B =" );
	c.addComplex (a, b);

	a.printComplex( "  A  = ");
	b.printComplex( "  B  = ");
	c.printComplex( " A+B = ");

    return 0;
}