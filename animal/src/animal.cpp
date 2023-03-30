#include "animal.h"
#include <iostream>

using namespace std;

animal_EXPORT Animal::Animal(string name) {
	this->name = name;
}

animal_EXPORT void Animal::print_name() {
	cout << "Name is " << this->name << endl;
}
