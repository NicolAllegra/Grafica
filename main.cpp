#include "number.h"
#include <iostream>
using namespace std;
int main() {
	number n1{ 3 };
	number n2{ 5 };
	number somma = n1.somma(n2);
	printf("The sum is %d", somma);
	return 0;
	//ciao
}