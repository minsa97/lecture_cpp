// ComplexClassTest2.cpp
#include "Complex.h"

int main(){
	Complex a, b, c;

	a.read ( "A =" );
	b.read ( "B =" );
	c.add (a, b);

	a.print ( "  A  = ");
	b.print ( "  B  = ");
	c.print ( " A+B = ");

	return 0;
}