/*
Given an array A of size N. 
you need to insert the elements of A into a set and display the results.
Also, you need to erase a given element x from the set and print "erased x" if successfully erased, else print "not found
*/


set<int> setInsert(int arr[],int n)
{
    set<int>s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
    } 
    return s;
}


void setDisplay(set<int>s)
{
    set<int>::iterator it;
    
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}


void setErase(set<int>&s,int x)
{
    bool flag = false;
        for(auto i=s.begin();i!=s.end();i++)
        {
        if(x == *i)
        {
        flag = true;
        s.erase(i);
        }
        }
        if(flag)

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
    set<int>s=setInsert(arr,n);
    setDisplay(s);
    int x;
    cin>>x;
    setErase(s,x);
    setDisplay(s);
    return 0;
}