//2.Write a program using Array of Objects to display area of multiple rectangles.
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
            l=1;
            b =1;
        }
        void Setl(int l)
        {
            this->l=l;
        }
        void Setb(int b)
        {
            this->b=b;
        }
        int area();
        int Getl()
        {
            return l;
        }
        int Getb()
        {
            return b;
        }
};
int Rectangle::area()
        {
            return l*b;
        }
int main()
{
    Rectangle r1;
    Rectangle r2;
    r1.Setl(1);
    r1.Setb(2);
    Rectangle arr[2]={r1,r2};
    for(int i=0;i<2;i++)
    {
        cout<<"area of "<<arr[i].Getl()<<" "<<arr[i].Getb()<<" is "<<arr[i].area()<<endl;
    }
    cout<<"r1 l :"<<r1.Getl()<<endl;
    cout<<"r1 b :"<<r1.Getb()<<endl;
    cout<<"r2 l :"<<r2.Getl()<<endl;
    cout<<"r2 b :"<<r2.Getb()<<endl;


    
    
}
