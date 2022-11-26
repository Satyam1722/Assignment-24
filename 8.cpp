#include<iostream>
#include<math.h>
using namespace std;

float area(int);
int area(int ,int );
float area(int ,int ,int );

int main(){
int r,a,b,c;
cout<<"enter the radius : ";
cin>>r;
cout<<"area : "<<area(r)<<endl;
cout<<"enter length and breadth : ";
cin>>a>>b;
cout<<"area : "<<area(a,b)<<endl;
cout<<"enter sides of triangles : ";
cin>>a>>b>>c;
cout<<"area : "<<area(a,b,c)<<endl;
return 0;

}

float area(int r){
return 3.14*r*r;
}

int area(int l,int b){
return l*b;
}

float area(int a,int b,int c){
float s=(a+b+c)/2.0;
return sqrt(s*(s-a)*(s-b)*(s-c));
}
