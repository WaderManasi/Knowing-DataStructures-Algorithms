void push(int data)
{
    top++;
    stack[top]=data;
}
//Function to pop the topmost data
void pop()
{
    if(top>=0)
    top--;
    else
    cout<<"Stack Empty\n";
}
//Function to display the stack from index 0 
void display()
{
    if(top<0)
    cout<<"-1\n";
    else{
for(int i=0;i<=top ;i++)
cout<<stack[i]<<" ";
cout<<"\n";
}
}