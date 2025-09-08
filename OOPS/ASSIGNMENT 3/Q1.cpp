/*1.Create a class named 'Rectangle' with two data members- length and breadth and a function to calculate the area which is 'length*breadth'. The class has three constructors which are :
(a) having no parameter - values of both length and breadth are assigned zero.
(b) having two numbers as parameters - the two numbers are assigned as length and  
     breadth respectively.
(c) having one number as parameter - both length and breadth are assigned that number.
Now, create objects of the 'Rectangle' class having none, one and two parameters and print their areas.*/
#include <iostream>
using namespace std;
class Rectangle
{
    private:
        int l;
        int b;
    public:
        Rectangle()
        {
            l=0;
            b =0;
        }
        Rectangle(int l=0,int b=0)
        {
            this->l=l;
            this->b =b;
        }
        Rectangle(int c)
        {
            l=c;
            b =c;
        }
        void Setl(int l)
        {
            this->l=l;
        }
        void Setb(int b)
        {
            this->b=b;
        }
        int area()
        {
            return l*b;
        }
        int Getl()
        {
            return l;
        }
        int Getb()
        {
            return b;
        }
        ~Rectangle()
        {
            cout << "Destructor called for rectangle " << l << "x" << b << endl;
        }
};
int main()
{
        Rectangle arr[3] = {
        Rectangle(),        // Default constructor
        Rectangle(6, 4),    // Two parameters
        Rectangle(5)        // Single parameter
    };
    
    cout<<"r1  :"<<arr[0].area()<<endl;
    cout<<"r2  :"<<arr[1].area()<<endl;
    cout<<"r3  :"<<arr[2].area()<<endl;
    
}
