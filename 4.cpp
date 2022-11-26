#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
        return 1;
    return n*fact(n-1);
}

int comb(int n,int r)
{
    return (fact(n))/(fact(n-r)*fact(r));
}

void Print_Pascal(int n){

for(int i=0; i<n; i++)
        {
           int c=0;
            for(int j=0; j<2*n-1; j++)
                {

                    if(j>=n-1-i && j<=n-1+i)
                        {
                            printf("%d ",comb(i,c));
                            c++;
                            printf("  ");
                            j++;
                        }
                    else
                        printf("  ");
                }
            printf("\n");
        }
}

int main()
{

   int i,j,n;
    cout<<"enter the lines : ";
    cin>>n;

 Print_Pascal(n);

    return 0;
}
