4.Write a program to define function cube() as inline for calculating cube of a number.
#include <iostream>
using namespace std;
class Number
{
    private:
        int i;
    public:
        Number()
        {
            i=1;
        }
        void Seti(int i)
        {
            this->i=i;
        }
        inline int Cube();
        int Geti()
        {
            return i;
        }

};
inline int Number::Cube()
        {
            return i*i*i;
        }
int main()
{
    Number o1;
    o1.Seti(2);
    cout<<"o1 i :"<<o1.Geti()<<endl;
    cout<<o1.Cube()<<" is the cube "<<endl;    
    
}
