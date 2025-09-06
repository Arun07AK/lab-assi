#include <iostream>

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
    std::cout << "Local variable count: " << count << std::endl;              // 999
    std::cout << "Static member count: " << Rectangle::count << std::endl;    // static member
    std::cout << "Global variable count: " << ::count << std::endl;  
    
}
