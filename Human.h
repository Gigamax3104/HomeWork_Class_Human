#pragma once

class Human {
public:
	Human(const char* name,int nameSize, double height, double weight);
	Human(const Human& human);
	~Human();

	void operator=(const Human& human);

	const char* get_name() { return m_name; } //この中で書いていいのか？
	double get_height() { return m_height; } //同様
	double get_weight() { return m_weight; } //同様

	void HumanDraw();

	double grow_fat(double value);
	double slim_off(double value);

private:
	char* m_name; //人名
	int m_nameSize; //人名の文字数

	double m_height; //身長
	double m_weight; //体重
};