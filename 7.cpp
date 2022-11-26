#include<iostream>
using namespace std;

int add(int ,int ,int=0);


int main(){
cout<<"7+2="<<add(7,2)<<endl;
cout<<"1+2+3="<<add(1,2,3);
return 0;
}

int add(int x,int y,int z){
return x+y+z;
}
