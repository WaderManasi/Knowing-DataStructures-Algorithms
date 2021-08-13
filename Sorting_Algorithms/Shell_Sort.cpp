///////////////////////////////////////////////////////////////////////////////////
//Name     :Manasi Mohan Wader.                                                  //
//Program  :Shell  Sort.                                                         //
//Approach :Using Array.                                                         //                                              
//Language :C++                                                                  //
//Functions:To perform ascending sorting of elements.                            //                                                            //
///////////////////////////////////////////////////////////////////////////////////

#include<iostream>
#define MAX 30
using namespace std;

///////////////////////////////////////////////////////////////////////////////////
void ShellSort(int arr[],int size)
{
    for(int gap=size/2;gap>=1;gap=gap/2)
    {
        for(int j=gap;j<size;j++)
        {
            for(int i=j-gap;i>=0;i=i-gap)
            {
                if(arr[i]<arr[i+gap])
                    break;
                else
                {
                    int temp;
                    temp=arr[i];
                    arr[i]=arr[i+gap];
                    arr[i+gap]=temp;
                }
                
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
    ShellSort(arr,size);
    cout<<"\nSorted Array : ";
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
//End of code
///////////////////////////////////////////////////////////////////////////////////