#include	"Human.h"
#include	<iostream>
using namespace std;

Human::Human(const char* name, int nameSize, double height, double weight)
	: m_name(new char[nameSize]), m_nameSize(nameSize), m_height(height), m_weight(weight) {
	std::copy(name, name + nameSize, m_name);
}

Human::Human(const Human& human)
	: m_name(new char[human.m_nameSize]), m_nameSize(human.m_nameSize), m_height(human.m_height), m_weight(human.m_weight) {
	std::copy(human.m_name, human.m_name + human.m_nameSize, m_name);
}

void Human::operator=(const Human& human) {
	cout << "operator= called" << endl << endl;

	if (m_name != nullptr) {
		delete[] m_name;
		m_name = nullptr;

		m_name = new char[human.m_nameSize];
		m_nameSize = human.m_nameSize;
		std::copy(human.m_name, human.m_name + human.m_nameSize, m_name);
	}

	m_weight = human.m_weight;
	m_height = human.m_height;
}

void Human::HumanDraw() {
	cout << "Draw called" << endl
		 << "Name: " << m_name << endl
		 << "Height: " << m_height << "cm" << endl
		 << "Weight: " << m_weight << "kg" << endl
		 << endl;
}

double Human::grow_fat(double value) {
	m_weight += value;
	return m_weight;
}

double Human::slim_off(double value) {
	m_weight -= value;
	return m_weight;
}

Human::~Human() {
	if (m_name != nullptr) {
		delete[] m_name;
		m_name = nullptr;
	}
}