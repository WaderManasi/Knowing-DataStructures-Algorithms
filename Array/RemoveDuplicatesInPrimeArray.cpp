// Given an array consisting of only prime numbers, remove all duplicate numbers from it. 
// Note: Retain the first occurrence of the duplicate element.

vector<int> removeDuplicate(vector<int>& arr, int n)
{
   unordered_set<int>s; //by default set is ordered
   vector<int>v;
   for(int i=0;i<arr.size();i++)
   {
       if(s.find(arr[i]) == s.end())
       {
           v.push_back(arr[i]);
           //cout<<"in:"<<arr[i]<<" ";
       }
       s.insert(arr[i]);
   }
    return v;
}
