//reversing array using stack

void reverseArray(int n, int* arr){
    stack<int>s;
    for(int i=0;i<n;i++)
    s.push(arr[i]);
    
    for(int i=0;i<n;i++)
    {
        arr[i]=s.top();
        s.pop();
     
    }
  
}