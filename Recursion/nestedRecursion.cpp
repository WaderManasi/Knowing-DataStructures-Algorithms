#include <iostream>
#include <string.h>

using namespace std;
int fun1(int n){
if(n > 100){
  return n-10;
}else{
return  fun1(fun1(n+11));
}}
int main(){
  int x;
  int y;
  cin >> x;
y =fun1(x);
cout << y <<endl;
  return 0;
}
