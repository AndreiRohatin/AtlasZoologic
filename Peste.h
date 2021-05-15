#ifndef Peste_H
#define Peste_H
#include "Vertebrat.h"
class Peste :public Vertebrat
{
private:
	std::string type;
	
public:
	//Constructor
	Peste() :Vertebrat() {};
	Peste(int age, int length, int width, int height, int weight, int nr_vertebre,std::string type)
		:Vertebrat(age, length, width, height, weight, nr_vertebre) {this->type = type;}
	//Destructor
	~Peste() {}
	//Operators
	Peste operator=(const Peste& data);
	friend std::ostream& operator<<(std::ostream& os, const Peste& data);
	friend std::istream& operator>>(std::istream& is, Peste& data);
	//Get
	std::string GetType() { return this->type; }
	//Set
	void SetType(std::string type) { this->type = type; }
	//Methods
	std::string GetClassType();
	const std::string getFishType();
};
#endif

