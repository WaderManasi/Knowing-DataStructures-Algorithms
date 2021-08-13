//https://practice.geeksforgeeks.org/problems/replace-all-0s-with-5/1/?track=amazon-arrays&batchId=192

//You are given an integer N. You need to convert all zeroes of N to 5.

//solution

int convertFive(int n) {
int i=0;
int ans=n;
while(n)
{
  int temp = n%10;
  if(temp==0)
  {
   ans = (ans + (5*pow(10,i)));
  }
  i++;
  n=n/10;
}
return ans;
}