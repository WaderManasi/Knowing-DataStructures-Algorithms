///////////////////////////////////////////////////////////////////////////////////
//Name     :Manasi Mohan Wader.                                                  //
//Program  :Selection Sort.                                                      //
//Approach :Using Array.                                                         //                                              
//Language :C++                                                                  //
//Functions:To perform ascending sorting of elements.                            //                                                            
///////////////////////////////////////////////////////////////////////////////////

#include<iostream>
#define MAX 30
using namespace std;

///////////////////////////////////////////////////////////////////////////////////
void SelectionSort(int arr[],int size)
{
    int temp,min; //for swapping of elements
    for(int i=0;i<size-1;i++)
    {
        min=i;
        for(int j=i+1;j<size;j++)
        {
           if(arr[j]<arr[min])
           {
               min=j;
           } 
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
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
    SelectionSort(arr,size);
    cout<<"\nSorted Array : ";
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
//End of code
///////////////////////////////////////////////////////////////////////////////////