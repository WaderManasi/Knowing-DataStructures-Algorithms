//Given N in Gray code equivalent. Find its binary equivalent. 

//solution:

int grayToBinary(int n)
{
   int num = n;

   while (n>=1){
   n=n>>1;
   num = (num^n);

}
   return num;
}