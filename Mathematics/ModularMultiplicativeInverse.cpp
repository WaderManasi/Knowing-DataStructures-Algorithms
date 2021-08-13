//
//Given two integers ‘a’ and ‘m’. The task is to find modular multiplicative inverse of ‘a’ under modulo ‘m’.

int modInverse(int a, int m)
{
    int b=0;
  for(int i=1;i<=m;i++)
  {

  if((i*a)%m==1){
  b=i;
  break;
  }
  else{
  b=-1;
  continue;
  }

  }
return b;
}