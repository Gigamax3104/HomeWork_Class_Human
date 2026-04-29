#include	"Human.h"
#include	<iostream>
using namespace std;

Human::Human(const char* name, double height, double weight)
	: name(name), height(height), weight(weight) {}

void Human::DrawName() {
	cout << "Name: " << name << endl;

	cout << "Height: " << height << "cm" << endl;

	cout << "Weight: " << weight << "kg" << endl;
}

double Human::grow_fat(double value) {
	weight += value;
	return weight;
}

double Human::slim_off(double value) {
	weight -= value;
	return weight;
}