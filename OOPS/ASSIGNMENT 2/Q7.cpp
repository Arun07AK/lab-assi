#include<iostream>
using namespace std;
class Demo
{
private:
    int x=5;
public:
    void Display() const
    {
        x++;
        cout<<x<<endl;
    }
};

int main()
{
    Demo d;
    d.Display();
}
