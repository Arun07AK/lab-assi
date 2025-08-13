// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int binary(int key,int* A)
{
    int len=10;
    int h=len-1;
    int l=0;
    int mid=0;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==A[mid])
        {
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
    return -1;
}
int main() {
    //using binary search
    int *A;
    int size=10;
    A=new int [size]{1,2,3,5,6,7,8,9,10};
    int n=10;
    for(int i=1;i<n;i++)
    {
        if(binary(i,A)==-1)
        {
            cout<<"the missing value is "<<i<<"  it should be added in the index  "<<i-1<<endl;
            break;
        }
    }

    return 0;
}
