#include <iostream>

using std::cout;
using std::endl;

class Rectangle {
	double width, height;

public:
	void Init(double w, double h) {
		width = w;
		height = h;
	}
	double GetArea() {
		return width * height;
	}
	double GetGirth() {
		return (width + height) * 2;
	}
};

class Circle {
	double radius;

public:
	void Init(double r) {
		radius = r;
	}
	double GetArea() {
		return radius * radius * 3.14;
	}
	double GetGirth() {
		return 2 * 3.14 * radius;
	}
};

class Triangle {
	double width, height;

public:
	void Init(double w, double h) {
		width = w;
		height = h;
	}
	double GetArea() {
		return width * height * 0.5;
	}
	double GetGirth() {
		return width * 3;
	}
};

int main() {
	Rectangle rec;
	rec.Init(3, 4);
	cout << "면적 : " << rec.GetArea() << endl;
	cout << "둘레 : " << rec.GetGirth() << endl;

	Circle cir;
	cir.Init(5);
	cout << "면적 : " << cir.GetArea() << endl;
	cout << "둘레 : " << cir.GetGirth() << endl;

	Triangle tri;
	tri.Init(6, 7);
	cout << "면적 : " << tri.GetArea() << endl;
	cout << "둘레 : " << tri.GetGirth() << endl;

	return 0;
}