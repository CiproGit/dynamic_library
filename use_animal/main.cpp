#include "animal.h"
#include "animal_Export.h"
#include <iostream>

using namespace std;

int main() {
	cout << "************************\n";
	cout << "*      USE ANIMAL      *\n";
	cout << "************************\n" << endl;

	Animal animal("Dog");
	animal.print_name();

	cout << "\nEnd" << endl;
	return EXIT_SUCCESS;
}
