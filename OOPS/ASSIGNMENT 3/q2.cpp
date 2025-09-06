#include <iostream>
using namespace std;
class Rectangle
{
    private:
        int l;
        int b;
    public:

        Rectangle(int l=0,int b=0)
        {
            this->l=l;
            this->b =b;
        }
        Rectangle(double side)       
        {
            this->l = (int)side;
            this->b = (int)side;
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
        Rectangle(5.0)        // Single parameter
    };
    
    cout<<"r1  :"<<arr[0].area()<<endl;
    cout<<"r2  :"<<arr[1].area()<<endl;
    cout<<"r3  :"<<arr[2].area()<<endl;
    
}
