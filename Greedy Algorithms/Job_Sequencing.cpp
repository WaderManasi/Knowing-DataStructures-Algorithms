//calculate ratio (val/wight) for every item
//sort all items in decr order of ratio
#include<bits/stdc++.h>
using namespace std;
struct Job
{
    int deadline;
    int profit;
};
bool compare(struct Item a, struct Item b)
{
    int r1=(double)a.value/a.weight;
    int r2=(double)b.value/b.weight;
    return r1>r2;
}
int jobSequencing(Job arr[], int n)
{
    sort(arr,arr+n,compare);    //array sorted according to ratio (value/weight)
    double current_value=0.0;
    for(int i=0;i<n;i++)
    {
        if(arr[i].weight<=capacity)
        {
            capacity-=arr[i].weight;
            current_value+=arr[i].value;
        }
        else
        {
            current_value+=capacity*(double)arr[i].value/arr[i].weight;
            break;
        }
    }
    return current_value;
}
int main()
{
    int n,capacity;
    //array of structures
    Job arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].value>>arr[i].weight;   
    }
    cout<<jobSequencing(arr,n);
    return 0;
}