///////////////////////////////////////////////////////////////////////////////////
//Name     :Manasi Mohan Wader.                                                  //
//Program  :Bubble Sort.                                                         //
//Approach :Using Array.                                                         //                                              
//Language :C++                                                                  //
//Functions:To perform ascending sorting of elements.                            //                                                            //
///////////////////////////////////////////////////////////////////////////////////

#include<iostream>
#define MAX 30
using namespace std;

///////////////////////////////////////////////////////////////////////////////////
void BubbleSort(int arr[],int size)
{
    int temp; //for swapping of elements
    int flag;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            flag=0;     
            //if the list is already sorted we can skip passes
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////
int main()
{
    int size;
    int arr[MAX];
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nInitial Array : ";
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    BubbleSort(arr,size);
    cout<<"\nSorted Array : ";
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
//End of code
///////////////////////////////////////////////////////////////////////////////////