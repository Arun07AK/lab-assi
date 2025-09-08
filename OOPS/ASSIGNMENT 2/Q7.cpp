//7.Write a C++ program to declare const member function and attempt any operation within it.
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
