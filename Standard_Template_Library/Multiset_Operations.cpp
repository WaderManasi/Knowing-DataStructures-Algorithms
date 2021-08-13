/*
array A of size N. 
you need to insert the elements of A into a multiset and display the results.
 Also, you need to erase a given element x from the multiset and print "erased x" if successfully erased, else print "not found".
*/

multiset<int> multisetInsert(int arr[],int n)
{
    multiset<int>s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
    }
    return s;
}


void multisetDisplay(multiset<int>s)
{
    for(auto itr=s.begin();itr!=s.end();++itr)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
}


void multisetErase(multiset<int>&s,int x)
{
    if(s.erase(x)!=NULL)
    cout<<"erased "<<x;
    else
    cout<<"not found";
    
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
        
    multiset<int>s=multisetInsert(arr,n);
    multisetDisplay(s);
    int x;
    cin>>x;
    setErase(s,x);
    setDisplay(s);
    return 0;
}