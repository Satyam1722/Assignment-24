#include<iostream>
using namespace std;
int Prime_Check(int n){
 int i;
 if(n<2)return 0;
 for(i=2;i<=n/2;i++){
    if(n%i==0){
       return 0;
    }
 }
 return 1;
}

int main(){
  int n;
  cout<<"enter number : ";
  cin>>n;
  if(Prime_Check(n))
    cout<<"Prime Number"<<endl;
  else
    cout<<"Non Prime Number"<<endl;

  return 0;
}

