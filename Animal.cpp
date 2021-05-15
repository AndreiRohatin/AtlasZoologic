#include "Animal.h"

//Constructor
Animal::Animal(int age, int length, int width, int height, int weight) {
	this->age = age;
	this->length = length;
	this->weight = weight;
	this->width = width;
	this->height = height;
}

//Getters
const int Animal::GetAge() {
	return this->age;
}
const int Animal::GetHeight() {
	 return this->age;
}
const int  Animal::getWeight() {
	return this->weight;
}
const int Animal::GetLength() {
	return this->length;
}
const int  Animal::getWidth() {
	return this->width;
}

//Setters
void Animal::SetAge(const int age) {
	this->age = age;
}
void Animal::SetHeight(const int height) {
	this->height = height;
}
void Animal::SetLength(const int lenght) {
	this->length = lenght;
}
void Animal::setWeight(const int weight) {
	this->weight = weight;
}
void Animal::setWidth(const int width) {
	this->width = width;
}
//Virtual methods
std::string Animal::GetClassType() {
	return "Animal";
}
//Operator
Animal Animal::operator=(const Animal& data) {
	this->age = data.age;
	this->height = data.height;
	this->length = data.length;
	this->weight = data.weight;
	this->width = data.width;
	return *this;
}