#pragma once

class Human {
public:
	Human(const char* name, double height, double weight);

	const char* get_name() { return name; } //この中で書いていいのか？
	double get_height() { return height; } //同様
	double get_weight() { return weight; } //同様

	void DrawName();

	double grow_fat(double value);
	double slim_off(double value);

private:
	const char* name;

	double height;
	double weight;
};