#include<iostream>
using namespace std;

int Check_fibonacci(int n)
{
    int a=0,b=1,c;
    while(a<=n)
        {
            if(a==n)
                return 1;
            c=a+b;
            a=b;
            b=c;

        }
    return 0;
}

int main(){
int n;
cout<<"enter the number : ";
cin>>n;
if(Check_fibonacci(n))
    cout<<"term  is of Fibonacci series"<<endl;
else
    cout<<"term is not of Fibonacci series"<<endl;
return 0;
}
