#include "Vertebrat.h"
//Operator
Vertebrat Vertebrat::operator=(const Vertebrat& data) {
	this->age = data.age;
	this->height = data.height;
	this->length = data.length;
	this->nr_vertebre = data.nr_vertebre;
	this->weight = data.weight;
	this->width = data.width;
	return *this;
}
//Get
int Vertebrat::GetNr_vertebre() {
	return this->nr_vertebre;
}
//Set
void Vertebrat::SetNr_vertebre(int nr_vertebre) {
	this->nr_vertebre = nr_vertebre;
}
//Virtual methods
std::string Vertebrat::GetClassType() {
	return "Vertebrat";
}