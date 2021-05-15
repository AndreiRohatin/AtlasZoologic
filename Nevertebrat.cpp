#include "Nevertebrat.h"

//Operators
Nevertebrat Nevertebrat::operator=(const Nevertebrat& data) {
	this->age = data.age;
	this->height = data.height;
	this->length = data.length;
	this->weight = data.weight;
	this->width = data.width;
	return *this;
}

//Virtual methods
std::string Nevertebrat::GetClassType() {
	return "Nevertebrat";
}