#include <iostream>
using namespace std;
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
    cout<<Rectangle::getCount()<<endl; 
    Rectangle r1;
    Rectangle r2;
    cout<<Rectangle::getCount()<<endl;   
    
}
