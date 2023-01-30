#include "Fixed.hpp"

int main(){
	Fixed f1;
	Fixed f2 (f1);

	f1 = f2;
	return 0;
}
