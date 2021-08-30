/******************************************************************************

Bubble Sort/ Sinking sort/ Exchange Sort
(stable sort technique) (in-place sort)

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int n){
    bool swapp = false;
    for(int i=0;i<n;i++){
        swapp=false;
        for(int j=1;j<n;j++){
            if(arr[j]<arr[j-1]){
                swapp=true;
                swap(arr[j],arr[j-1]);
            }
        }
        if(!swapp)      break;  //all elements are sorted
    }
  
    //printing the sorted array
    for(int i=0;i<5;i++)  cout<<arr[i]<<" ";
}
int main()
{
    int arr[] = {5,1,2,4,3};
    bubbleSort(arr,5);
    return 0;
}
