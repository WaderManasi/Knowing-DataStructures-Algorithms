/*
map element are accesed using "->" operator
Array A of size N.
You need to insert the elements of A into a map(element as key and index as value) and display the results.
Also, you need to erase a given element x from the map and print "erased x" if successfully erased, else print "not found".
*/

map<int,int> mapInsert(int arr[],int n)
{
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]=i;
    }
    return mp;
    
}


void mapDisplay(map<int,int>mp)
{
    for(auto it=mp.begin();it!=mp.end();++it)
    {
        cout<<it->first<<" "<<it->second;
        cout<<"\n";
    }
}


void mapErase(map<int,int>&mp,int x)
{
    if(mp.erase(x))
    cout<<"erased "<<x;
    else
    //else condition
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

    map<int,int>mp=mapInsert(arr,n);
    mapDisplay(mp,x);
    
    mapErase(mp,x);
    mapDisplay(mp);
    return 0;
}