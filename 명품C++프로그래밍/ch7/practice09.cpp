#include <iostream>

using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() { cout << "radius = " << radius << " ÀÎ ¿ø" << endl; }
	friend Circle operator++(Circle& a, int x);
	friend Circle& operator++(Circle& a);
	friend Circle operator+(int op,Circle& a);
};

Circle operator++(Circle& a, int x) {
	Circle tmp = a;
	a.radius++;
	return tmp;
}

Circle& operator++(Circle& a) {
	a.radius++;
	return a;
}
Circle operator+(int op,Circle& a){
    Circle tmp = a;
    tmp.radius += op;
    return tmp;
}
int main() {
	Circle a(5), b(4);
	b = 1 +a;
	a.show();
	b.show();
}

