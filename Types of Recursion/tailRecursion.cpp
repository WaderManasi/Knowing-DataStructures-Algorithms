#include <iostream>
#include <string.h>

using namespace std;

void fun1(int n){

if(n > 0){
  cout << n <<endl;
  fun1(n-1);
}}
int main(){
  int x;
  cin >> x;
  fun1(x);
  return 0;
}
