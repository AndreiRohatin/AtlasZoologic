#include "Mamifer.h"

//Operator
Mamifer Mamifer::operator=(const Mamifer& data) {
	this->age = data.age;
	this->height = data.height;
	this->length = data.length;
	this->nr_vertebre = data.nr_vertebre;
	this->weight = data.weight;
	this->width = data.width;
	return *this;
}
//Virtual methods
std::string Mamifer::GetClassType() {
	return "Mamifer";
}