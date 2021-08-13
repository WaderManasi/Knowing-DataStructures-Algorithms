// You need to sort elements of an array where the array can be of following data-types:

// Integer
// String
// floating number
// Your task is to complete the given two functions: sortArray() and printArray()

template <class T>
void sortArray(T a[], int n)
{ 
	sort(a,a+n);
}

template <class T>
void printArray(T a[], int n)
{
	for(int i=0;i<n;i++)
	{
	    cout<<a[i]<<" ";
	}
	cout<<"\n";
}