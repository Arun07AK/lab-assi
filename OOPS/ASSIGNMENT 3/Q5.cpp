// 5.Write a program to swap private values of two classes using a friend function.
#include <iostream>
using namespace std;
class Number2; // Forward declaration

class Number1
{
    private:
        int i=2;
        friend void swapValues(Number1& n1, Number2& n2);
    public:
        int geti()
        {
            return i;
        }
};

class Number2
{
    private:
        int i=1;
        friend void swapValues(Number1& n1, Number2& n2);
    public:
        int geti()
        {
            return i;
        } 
};

void swapValues(Number1& n1, Number2& n2)
{
    int temp = n1.i;
    n1.i = n2.i;
    n2.i = temp;
}
int main() {
    Number1 o1;
    Number2 o2;
    
    cout << "Before: " << o1.geti() << ", " << o2.geti() << endl;
    swapValues(o1, o2);
    cout << "After: " << o1.geti() << ", " << o2.geti() << endl;
    
    return 0;
}
