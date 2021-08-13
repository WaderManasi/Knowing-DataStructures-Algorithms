// Given two arrays A and B contains integers of size N and M, the task is to find numbers which are present in the first array, but not present in the second array.

vector<long long> findMissing(long long A[], long long B[],  
                 int N, int M) 
	{ 
	       unordered_set<long long>s;
	       for(long long i=0;i<N;i++)
	       s.insert(A[i]);
	       for(int i=0;i<M;i++)
	       {
	           if(s.find(B[i]) != s.end())
	           s.erase(B[i]);
	       }
	       vector<long long>v;
	       for(int i=0;i<N;i++)
	       {
	           if(s.find(A[i])!=s.end())
	            v.emplace_back(A[i]);
	       }
	   
	   return v;
	} 