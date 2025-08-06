// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int search(int *A3,int key,int len, int from)
{
    int s=0;
   for(int i=from +1;i<len;i++)
   {
       if(A3[i]==key)
       {
           s=s+1;
           
       }
   }
   
   cout<<"element "<<key<<" appears "<<s<<" times"<<endl;
   return s;
}
int main() {
    //remove duplicates
    int *A;
    int size=10;
    A=new int [size]{1,2,2,4,5,6,7,5,7,7};
    int len=10;
    int h=len-1;
    int *A4;

    A4=new int [size];
    int k=0;
   
    
    for(int i=0;i<len;i++)
    {
        
        if(search(A,A[i],len,i)==0)
        {
            A4[k]=A[i];
            k++;
        }
    }
    
    for(int i=0;i<k;i++)
    {
        cout<<A4[i]<<endl;
    }
    }

