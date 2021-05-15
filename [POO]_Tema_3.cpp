#include <iostream>
#include <stdlib.h>
#include "Peste.h"
#include "Mamifer.h"
#include "Nevertebrat.h"
#include "Reptila.h"
#include "Pasare.h"
#include "AtlasZoologic.h"


//Animal operators
std::ostream& operator<<(std::ostream& os, const Animal& data) {
	os << "\n#####################################\n";
	os << "Tip: Animal\n";
	os << "Lugime: " << data.length << "\n";
	os << "Latime: " << data.width<< "\n";
	os << "Inaltime: " << data.height << "\n";
	os << "Greutate: " << data.weight << "\n";
	os << "Varsta: " << data.age << "\n";
	os << "#####################################\n";
	return os;

}
std::istream& operator>>(std::istream& is, Animal& data) {
	is >> data.age >> data.height >> data.length >> data.weight >> data.width;
	return is;
}

//Nevertebrat operators
std::ostream& operator<<(std::ostream& os, const Nevertebrat& data) {
	os << "\n#####################################\n";
	os << "Tip: Nevertebrat\n";
	os << "Lugime: " << data.length << "\n";
	os << "Latime: " << data.width << "\n";
	os << "Inaltime: " << data.height << "\n";
	os << "Greutate: " << data.weight << "\n";
	os << "Varsta: " << data.age << "\n";
	os << "#####################################\n";
	return os;
}
std::istream& operator>>(std::istream& is, Nevertebrat& data) {
	is >> data.age >> data.height >> data.length >> data.weight >> data.width;
	return is;
}

//Vertebrat operators
std::ostream& operator<<(std::ostream& os, const Vertebrat& data) {
	os << "\n#####################################\n";
	os << "Tip: Vertebrat\n";
	os << "Lugime: " << data.length << "\n";
	os << "Latime: " << data.width << "\n";
	os << "Inaltime: " << data.height << "\n";
	os << "Greutate: " << data.weight << "\n";
	os << "Varsta: " << data.age << "\n";
	os << "Numar vertebre" << data.nr_vertebre << "\n";
	os << "#####################################\n";
	return os;
}
std::istream& operator>>(std::istream& is, Vertebrat& data) {
	is >> data.age >> data.height >> data.length >> data.weight >> data.width>>data.nr_vertebre;
	return is;
}

//Mamifer operators
std::ostream& operator<<(std::ostream& os, const Mamifer& data) {
	os << "\n#####################################\n";
	os << "Tip: Mamifer\n";
	os << "Lugime: " << data.length << "\n";
	os << "Latime: " << data.width << "\n";
	os << "Inaltime: " << data.height << "\n";
	os << "Greutate: " << data.weight << "\n";
	os << "Varsta: " << data.age << "\n";
	os << "Numar vertebre" << data.nr_vertebre << "\n";
	os << "#####################################\n";
	return os;
}
std::istream& operator>>(std::istream& is, Mamifer& data) {
	is >> data.age >> data.height >> data.length >> data.weight >> data.width >> data.nr_vertebre;
	return is;
}

//Peste operators
std::ostream& operator<<(std::ostream& os, const Peste& data) {
	os << "\n#####################################\n";
	os << "Tip: Peste " << data.type<<"\n";
	os << "Lugime: " << data.length << "\n";
	os << "Latime: " << data.width << "\n";
	os << "Inaltime: " << data.height << "\n";
	os << "Greutate: " << data.weight << "\n";
	os << "Varsta: " << data.age << "\n";
	os << "Numar vertebre" << data.nr_vertebre << "\n";
	os << "#####################################\n";
	return os;

}
std::istream& operator>>(std::istream& is, Peste& data) {
	is >> data.age >> data.height >> data.length >> data.weight >> data.width>>data.nr_vertebre>>data.type;
	return is;
}

//Reptila operators
std::ostream& operator<<(std::ostream& os, const Reptila& data) {
	os << "\n#####################################\n";
	os << "Tip: Mamifer\n";
	os << "Lugime: " << data.length << "\n";
	os << "Latime: " << data.width << "\n";
	os << "Inaltime: " << data.height << "\n";
	os << "Greutate: " << data.weight << "\n";
	os << "Varsta: " << data.age << "\n";
	os << "Numar vertebre" << data.nr_vertebre << "\n";
	os << "#####################################\n";
	return os;
}
std::istream& operator>>(std::istream& is, Reptila& data) {
	is >> data.age >> data.height >> data.length >> data.weight >> data.width >> data.nr_vertebre;
	return is;
}

//Pasare operators
std::ostream& operator<<(std::ostream& os, const Pasare& data) {
	os << "\n#####################################\n";
	os << "Tip: Mamifer\n";
	os << "Lugime: " << data.length << "\n";
	os << "Latime: " << data.width << "\n";
	os << "Inaltime: " << data.height << "\n";
	os << "Greutate: " << data.weight << "\n";
	os << "Varsta: " << data.age << "\n";
	os << "Numar vertebre" << data.nr_vertebre << "\n";
	os << "#####################################\n";
	return os;
}
std::istream& operator>>(std::istream& is, Pasare& data) {
	is >> data.age >> data.height >> data.length >> data.weight >> data.width >> data.nr_vertebre;
	return is;
}


int main()
{
	AtlasZoologic<Animal*> li_animal;
	int n;
	std::cout << "Introduceti numarul de animale pe care vreti sa le cititi: ";
	std::cin >> n;
	for (; n > 0; --n) {
		system("CLS");
		std::string animal_type;
		std::cout << "Introduceti tipul animalului pe care vreti sa il cititi, capitalizat";
		std::cin >> animal_type;
		std::cout << "introduceti datele in ordinea urmatoare:\n varsta,inaltime,lungime,greutate,latime,nr_vertebre,tip peste";
		std::cout << "\nultimele 2 campuri sunt disponibile in functie de animalul selectat";
		if (animal_type == "Animal"){
			Animal elm;
			std::cin >> elm;
			li_animal += &elm;
		}
		else if (animal_type == "Vertebrat") {
			Vertebrat elm;
			std::cin >> elm;
			li_animal += &elm;
		}
		else if (animal_type == "Nevertebrat") {
			Nevertebrat elm;
			std::cin >> elm;
			li_animal += &elm;
		}
		else if (animal_type == "Mamifer") {
			Mamifer elm;
			std::cin >> elm;
			li_animal += &elm;

		}
		else if (animal_type == "Peste") {
			Peste elm;
			std::cin >> elm;
			li_animal += &elm;

		}
		else if (animal_type == "Pasare") {
			Pasare elm;
			std::cin >> elm;
			li_animal += &elm;

		}
		else {
			Reptila elm;
			std::cin >> elm;
			li_animal += &elm;
		}
	}
	int len_li_animal; 
	int fr_rapitor = 0;
	len_li_animal = li_animal.GetSize();
	for (int i = 0; i < len_li_animal; i++) {
		if (li_animal[i]->GetClassType() == "Peste") {
			Peste* p = (Peste*)li_animal[i];
			if (p->getFishType() == "rapitor"&&p->GetLength()>=1)
				++fr_rapitor;
		}
	}
	std::cout << fr_rapitor;
}