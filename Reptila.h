#ifndef Reptila_H
#define Reptila_H
#include "Vertebrat.h"
class Reptila : public Vertebrat
{
public:
	//Constructor
	Reptila() :Vertebrat() {};
	Reptila(int age, int length, int width, int height, int weight, int nr_vertebre)
		:Vertebrat(age, length, width, height, weight, nr_vertebre) {};
	//Destructor
	~Reptila() {};
	//Operators
	Reptila operator=(const Reptila& data);
	friend std::ostream& operator<<(std::ostream& os, const Reptila& data);
	friend std::istream& operator>>(std::istream& is, Reptila& data);
	//Methods
	std::string GetClassType();
};
#endif

