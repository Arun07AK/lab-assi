//5.Write a program to declare static public member variable, global and local variable with the same name. Initialize and display their contents.
#include <iostream>
using namespace std;
int count=50;
class Rectangle
{
    private:
        int l;
        int b;
    
    public:
        static int count;
        Rectangle()
        {
            l=1;
            b=1;
            count++;
        }
        static int getCount()
        {
            return count;
        }
};
int Rectangle::count ;

int main()
{
    int count=999;
    Rectangle r1;
    Rectangle r2;
    cout << "Local variable count: " << count << endl;              // 999
    cout << "Static member count: " << Rectangle::count << endl;    // static member
    cout << "Global variable count: " << ::count << endl;  
    
}
