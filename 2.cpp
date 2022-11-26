#include<iostream>
using namespace std;

int h_v(int n){
 int max=0,t;
 while(n){
    t=n%10;
    if(max<t)
        max=t;
    n/=10;
 }
 return max;
}

int main(){
 int n;
 cout<<"enter number : ";
 cin>>n;
 cout<<"highest digit is "<<h_v(n);
 return 0;

}
