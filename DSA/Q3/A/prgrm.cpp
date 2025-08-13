// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int linear(int key,int* A)
{
    int len=10;
    for(int i=0;i<len;i++)
    {
        if(key==A[i])
        {
            return i;
        }
    }
    return -1;
}
int main() {
    //using linear search
    int *A;
    int size=10;
    A=new int [size]{1,2,3,5,6,7,8,9,10};
    int n=10;
    for(int i=1;i<n;i++)
    {
        if(linear(i,A)==-1)
        {
            cout<<"the missing value is "<<i<<"  it should be added in the index  "<<i-1<<endl;
            break;
        }
    }

    return 0;
}
