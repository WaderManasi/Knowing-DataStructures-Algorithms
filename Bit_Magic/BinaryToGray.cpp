//You are given a decimal number N. You need to find the gray code of the number N and convert it into decimal.

//solution:

int greyConverter(int n)
{   
  return (n^(n>>1));
}