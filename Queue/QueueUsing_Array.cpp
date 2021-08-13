
//rear :ahead
//front :to pop out element

/* The method push to push element into the queue */
void MyQueue :: push(int x)
{
    arr[rear]=x;
    rear++;
}

/*The method pop which return the element 
  poped out of the queue*/
int MyQueue :: pop()
{
   //all the elements are popped
   if(front==rear)
    {
        front=rear=0;
        return -1;
    }
    int a=arr[front];
    front++;
    return a;
}
