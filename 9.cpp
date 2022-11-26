#include<iostream>
using namespace std;

int max(int a,int b){
if(a>b)
    return a;
else
    return b;
}

float max(float a,float b){
if(a>b)
    return a;
else
    return b;
}

int main(){
  cout<<max(5,2)<<endl;
  cout<<max(3.5,5.3);
  return 0;
}
