#include <iostream>
using namespace std;
class time
{
    int hrs;
    int mins;
    public:
    void gettime(int h,int m)
        hrs=h;
        mins=m;
    }
    void putime()
    {
        cout<< hrs <<"hours";
        cout<< mins<<endl";
    }
    void sum (time t1,time t2);
};
void time::sum(time t1,time t2)
{
    mins=t1.mins+t2.mins;
    hrs=t1.hrs+t2.hrs+(min/60);
    mins =mins%60;
};
int main()
{
    class time t1,t2,t3;
    t1.gettime(2,45);
    t2.gettime(3,30);
    t3.sum(t1,t2);
    return 0;
}
