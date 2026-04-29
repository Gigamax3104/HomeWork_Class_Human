#include	"Human.h"
#include	<iostream>
using namespace std;

int main() {
	Human human("John", 1.75, 70.0);
	
	human.DrawName();

	cout << "Fat::Weight: " << human.grow_fat(5.0) << "kg" << endl;

	cout << "Slim::Weight: " << human.slim_off(3.0) << "kg" << endl;
}