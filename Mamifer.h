#ifndef Mamifer_H
#define Mamifer_H
#include "Vertebrat.h"
class Mamifer :public Vertebrat
{
public:
	//Constructor
	Mamifer():Vertebrat() {};
	Mamifer(int age, int length, int width, int height, int weight, int nr_vertebre) 
		:Vertebrat(age,length,width,height,weight,nr_vertebre) {};
	//Destructor
	~Mamifer() {};
	//Operators
	Mamifer operator=(const Mamifer& data);
	friend std::ostream& operator<<(std::ostream& os, const Mamifer& data);
	friend std::istream& operator>>(std::istream& is, Mamifer& data);
	//Methods
	std::string GetClassType();
};
#endif

