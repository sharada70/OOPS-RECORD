#include<iostream>
using namespace std;
class Rectangle {
int length, breadth;
public:
void setData(int l, int b); 
void area() { 
cout<<"Area="<<length * breadth<<endl;
}
};
void Rectangle::setData(int l, int b) {
length = l;
breadth = b;
}
int main() {
Rectangle r;
r.setData(10, 5);
r.area();
return 0;
}