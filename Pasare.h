#ifndef Pasare_H
#define Pasare_H
#include "Vertebrat.h"
class Pasare : public Vertebrat
{
public:
	//Constructor
	Pasare() :Vertebrat() {};
	Pasare(int age, int length, int width, int height, int weight, int nr_vertebre)
		:Vertebrat(age, length, width, height, weight, nr_vertebre) {};
	//Destructor
	~Pasare() {};
	//Operators
	Pasare operator=(const Pasare& data);
	friend std::ostream& operator<<(std::ostream& os, const Pasare& data);
	friend std::istream& operator>>(std::istream& is, Pasare& data);
	//Methods
	std::string GetClassType();
};
#endif
