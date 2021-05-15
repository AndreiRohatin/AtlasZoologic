#ifndef AtlasZoologic_H
#define AtlasZoologic_H

#include "Animal.h"

#include <stdexcept>
template<class T>
class AtlasZoologic
{
private:
	T* data;
	unsigned size;
	unsigned int curr_index;
	const unsigned int extend_size = 10;
	void extend();
public:
	//Constructor
	AtlasZoologic();
	//Destructor
	~AtlasZoologic();
	//Operator
	T& operator[](const int index);
	void operator+=(T data);
	//nu am implementat operatorii >> si << pentru ca nu s-ar fi pretat pentru aceasta clasa
	//elementele din din cadrul listei alocate dinamic fiind accesibile prin operatorul []
	//Methods
	void push(T element);
	static unsigned int GetSize();
};
#endif

