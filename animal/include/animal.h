#ifndef ANIMAL_H
#define ANIMAL_H

#include "animal_Export.h"
#include <string>

class Animal {
private:
	std::string name;
public:
	animal_EXPORT Animal(std::string name);
	virtual animal_EXPORT void print_name();
};

#endif // ANIMAL_H
