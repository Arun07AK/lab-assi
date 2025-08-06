// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    //binay search
    int *A;
    int size=10;
    A=new int [size]{1,2,3,4,5,6,7,8,9,10};
    int len=10;
    int h=len-1;
    int l=0;
    int mid=0;
    int key=6;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==A[mid])
        {
            cout<<mid<<endl;
            return mid;
        }
        if(key>A[mid])
        {
            l=l+1;
        }
        if(key<A[mid])
        {
            h=h-1;
        }
    }

    return 0;
}
