#ifndef Animal_H
#define Animal_H

#include <string>
#include <iostream>

class Animal
{
protected:
	int age;
	int length;
	int width;
	int height;
	int weight;
public:
	//Constructor
	Animal() { age = 0; length = 0; width = 0; height = 0; weight = 0; }
	Animal(int age, int length, int width, int height, int weight);
	//Destructor
	~Animal() {}
	//Operator
	Animal operator=(const Animal& data);
	friend std::ostream& operator<<(std::ostream& os, const Animal& data);
	friend std::istream& operator>>(std::istream& is, Animal& data);
	//Getters
	const int GetAge();
	const int GetLength();
	const int getWidth();
	const int GetHeight();
	const int getWeight();
	//Setters
	void SetAge(const int age);
	void SetLength(const int length);
	void setWidth(const int width);
	void SetHeight(const int height);
	void setWeight(const int weight);
	virtual std::string GetClassType();
};
#endif
