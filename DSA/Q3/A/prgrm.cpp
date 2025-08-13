// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    //binay search
    int *A;
    int size=10;
    A=new int [size]{1,2,3,0,5,6,7,8,9,10};
    int len=10;
    int h=len-1;
    int l=0;
    int mid=0;
    int key=6;
    for(int i=0;i<len-1;i++)
    {
        if(A[i+1]!=A[i]+1)
        {
            cout<<i+1<<"th index is missing "<< "it should be "<<A[i]+1<<endl;
            return 0;
        }
    }
    
    

    return 0;
}
