//get middle elemet of dstack

int stackMiddle(int n, stack<int> st){
   n=st.size();
   for(int i=0;i<n/2;i++)
   st.pop();
   
   return st.top();
}