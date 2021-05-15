#ifndef Nevertebrat_H
#define Nevertebrat_H

#include "Animal.h"
class Nevertebrat :public Animal
{
public:
	//Constructor
	Nevertebrat():Animal() {}
	Nevertebrat(int age, int length, int width, int height, int weight)
		:Animal(age, length, width, height, weight) {
	}
	//Destructor
	~Nevertebrat() {}
	//Operators
	Nevertebrat operator=(const Nevertebrat& data);
	friend std::ostream& operator<<(std::ostream& os, const Nevertebrat& data);
	friend std::istream& operator>>(std::istream& is, Nevertebrat& data);
	//Methods
	std::string GetClassType();
};
#endif

