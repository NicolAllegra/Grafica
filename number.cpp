#include "number.h"



number::number(int value)
{
	this->value = value;

}


number::~number()
{
}

number number::somma(number num2) {
	return number(this->value + num2.value);
}