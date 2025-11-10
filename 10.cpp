#include <iostream>
using namespace std;
class Shape {
public:
virtual void area() = 0;
};
class Circle : public Shape {
float r;
public:
void area() {
cout <<"Enter radius: ";
cin >> r;
cout <<"Area of Circle =" &quot; << 3.14 * r * r << endl;
}
};
int main() {
Shape* s;

Circle c;
s = &amp;c;
s-&gt;area();
return 0;
}