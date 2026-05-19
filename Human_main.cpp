#include	"Human.h"
#include	<iostream>
using namespace std;

void Draw(Human human) { human.HumanDraw(); }

int main() {
	Human human("John",128, 1.75, 70.0);
	Human human2("Sherry", 128, 1.53, 50.3);
	
	Draw(human);
	Draw(human2);

	cout << human.get_name() << "Fat::Weight: " << human.grow_fat(5.0) << "kg" << endl << endl;

	cout << human.get_name() << "Slim::Weight: " << human.slim_off(3.0) << "kg" << endl << endl;

	human2 = human;

	Draw(human);
	Draw(human2);
}