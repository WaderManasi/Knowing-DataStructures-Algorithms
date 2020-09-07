//Given the adjacency list of a bidirectional graph. Your task is to print the adjacency list for each vertex.

// Function to print graph
// adj: array of vectors to represent graph
// V: number of vertices
void printGraph(vector<int> adj[], int V)
{
   for(int i=0;i<V;i++)
   {
       cout<<i;
       for(int j=0;j<adj[i].size();j++)
       {
           cout<<"-> "<<adj[i][j];
       }
       cout<<"\n";
   }
}