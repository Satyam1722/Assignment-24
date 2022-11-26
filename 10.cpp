#include<iostream>
using namespace std;

int add(int a,int b){
    return a+b;
}

float add(float a,float b){
return a+b;
}

double add(double a,double b){
return a+b;
}

char add(char a,char b){
return a+b;
}



int main(){
cout<<add(5,3)<<endl;
cout<<add(5.6f,3.79f)<<endl;
cout<<add(5.987,3.6889)<<endl;
cout<<add('a','b');
return 0;
}

