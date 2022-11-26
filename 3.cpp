#include<iostream>
using namespace std;

int power(int n,int p){
 int t=n;
 for(int i=1;i<p;i++){
    n*=t;
 }
 return n;
}

int main(){
 int n,p;
 cout<<"enter number and its power : ";
 cin>>n>>p;
 cout<<"answer is "<<power(n,p);
 return 0;

}

