///////////////////////////////////////////////////////////////////////////////////
//Name     :Manasi Mohan Wader  .                                                 //
//Program  :Rotate array elements through Left .                                  //
//Language :C++                                                                  //
///////////////////////////////////////////////////////////////////////////////////

#include<iostream>
#define MAX 50
using namespace std;

///////////////////////////////////////////////////////////////////////////////////
void Rotateleft(int arr[],int size,int freq)
{
    int rotation=1;
    while(freq>0)
    {
        int temp=arr[size-1];
        for(int i=size-1;i>=0;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
        freq--;
        cout<<"\nFor "<<rotation<<" rotation: ";
        for(int j=0;j<size;j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<"\n";
        rotation++;
    }  
}

///////////////////////////////////////////////////////////////////////////////////
int main()
{
    int freq,size;
    int arr[MAX];
    cout<<"\nEnter array size: ";
    cin>>size;
    cout<<"\nEnter elements: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nFrequency of rotating elements through left: ";
    cin>>freq;
    Rotateleft(arr,size,freq);
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////
//End of program
///////////////////////////////////////////////////////////////////////////////////
