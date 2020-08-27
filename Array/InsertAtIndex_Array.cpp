//You are given an array arr(0-based index). The size of the array is given b

void insertAtIndex(int arr[], int sizeOfArray, int index, int element)
{
   if(sizeOfArray-1==index)//last position
    {
        arr[sizeOfArray-1]=element;
    }

    else
    {
        for(int j=sizeOfArray;j>=index;j--)
        {
            arr[j]=arr[j-1];
        }
        
        arr[index]=element;
    }
    return;
}