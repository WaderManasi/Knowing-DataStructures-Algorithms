/*inserts an element x to the set s */
void insert(set<int> &s,int x)
{
    //Your code here
    s.insert(x);
}

/*prints the contents of the set s */
void print_contents(set<int> &s)
{
    for(int i:s)
        cout<<i<<" ";
}

/*erases an element x from the set s */
void erase(set<int> &s,int x)
{
    //Your code here
    if(s.find(x)!=s.end())
        s.erase(x);
}

/*returns 1 if the element x is
present in set s else returns -1 */
int find(set<int> &s,int x)
{
    //Your code here
    if(s.find(x)!=s.end())
    return 1;
    return -1;
}

/*returns the size of the set s */
int size(set<int> &s)
{
   //Your code here
   return s.size();
}