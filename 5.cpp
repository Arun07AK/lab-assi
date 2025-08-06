// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    //reverse
    int *A;
    int size=10;
    A=new int [size]{1,2,3,4,5,6,7,8,9,10};
    int len=10;
    int h=len-1;
    int l=0;
    int mid=0;
    int key=6;
    int j=len-1;
    for(int i=0;i<len/2;i++)
    {
        swap(A[i],A[j]);
        j--;
    }
    for(int i=0;i<len;i++)
    {
        cout<<A[i]<<endl;
    }

    return 0;
}
