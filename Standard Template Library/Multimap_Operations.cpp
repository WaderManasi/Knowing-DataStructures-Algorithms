/*
Array A of size N. 
You need to insert the elements of A into a multimap(element as key and index as value) and display the results.
Also, you need to erase a given element x from the multimap and print "erased x" if successfully erased, else print "not found".
*/

multimap<int,int> multimapInsert(int arr[],int n)
{
    multimap<int,int>mp;
   for(int i=0;i<n;i++)
   {
       mp.insert(pair<int,int>(arr[i],i));
   }
    return mp;
}

void multimapDisplay(multimap<int,int>mp)
{
   for(auto i=mp.begin();i!=mp.end();++i)
   {
       cout<<i->first<<" "<<i->second;
       cout<<endl;
   }
}

void multimapErase(multimap<int,int>&mp,int x)
{
    if(mp.erase(x))
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
    int x;
    cin>>x;

    multimap<int,int>mp=multimapInsert(arr,n);
    multimapDisplay(mp,x);
    
    multimapErase(mp,x);
    multimapDisplay(mp);
    return 0;
}