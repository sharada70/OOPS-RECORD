#include<iostream>
using namespace std;
class Sample {
int x, y;
public:
// Default constructor
Sample() {
x = 0;
y = 0;
cout &lt;&lt; &quot;Default Constructor called&quot; &lt;&lt; endl;
}
// Parameterized constructor
Sample(int a, int b) {
x = a;
y = b;
cout &lt;&lt; &quot;Parameterized Constructor called&quot; &lt;&lt; endl;
}
// Copy constructor
Sample(const Sample &amp;s) {
x = s.x;
y = s.y;
cout &lt;&lt; &quot;Copy Constructor called&quot; &lt;&lt; endl;
}
void display() {
cout &lt;&lt; &quot;x = &quot; &lt;&lt; x &lt;&lt; &quot;, y = &quot; &lt;&lt; y &lt;&lt; endl;
}
// Destructor
~Sample() {

cout &lt;&lt; &quot;Destructor called for object&quot; &lt;&lt; endl;
}
};
int main() {
Sample s1; // 
Sample s2(10, 20); 
Sample s3 = s2; 
s1.display();
s2.display();
s3.display();
return 0;
}