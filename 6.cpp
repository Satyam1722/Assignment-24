#include<iostream>
using namespace std;

void swap(int &a,int &b){
 int t;
 t=a;
 a=b;
 b=t;
}

int main(){

int a,b;
cout<<"enter two number : ";
cin>>a>>b;
cout<<"before swapping a="<<a<<" & b="<<b<<endl;
swap(a,b);
cout<<"after swapping a="<<a<<" & b="<<b;
return 0;
}
