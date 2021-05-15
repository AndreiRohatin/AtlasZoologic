#ifndef Vertebrat_H
#define Vertebrat_H

#include "Animal.h"
class Vertebrat :public Animal
{
protected:
	int nr_vertebre;
public:
	//Constructor
	Vertebrat() :Animal() { nr_vertebre = 0; }
	Vertebrat(int age, int length, int width, int height, int weight, int nr_vertebre) 
		:Animal(age, length, width, height, weight) { this->nr_vertebre = nr_vertebre; }
	//Destructor
	~Vertebrat() {}
	//Operators
	Vertebrat operator=(const Vertebrat& data);
	friend std::ostream& operator<<(std::ostream& os, const Vertebrat& data);
	friend std::istream& operator>>(std::istream& is, Vertebrat& data); \
	//Get
	int GetNr_vertebre();
	//Set
	void SetNr_vertebre(int nr_vertebre);
	//Methods
	virtual std::string GetClassType();
};
#endif

