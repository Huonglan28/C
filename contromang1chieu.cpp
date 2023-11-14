#include <iostream>
#include <studio.h>
using namespace std;
void nhap(int *&a, int &n);
void xuat(int *a, int n);
int giatrilonnhat (int *a, int n); 
void swap (int *a, int *b);
void sapxep (int *a, int n);
int main()
{ 
    int *a,n;
    nhap(a,n);
    cout<<giatrilonnhat (a,n) <<<endl;
    sapxep (a,n);
    xuat(a,n);
    delete a;
    return 0;
}
void nhap(int *&a, int &n)
{
    cout<<"Nhap so phan tu cua mang :";
    cin>>n;
    a=new int [n];
    for (int i=0;i<n;i++)
    cin>>* (a+i);
}

void xuat(int *a, int n)
{
    for (int i=0;i<n;i++)
    cout<<* (a+i) <<" ";
}
int giatrilonnhat (int *a, int n)
{
    int max=*a;
    for (int i=1;i<n;i++)
        if ((a+i) >max) 
            max=* (a+i);
    return max;
}
void swap (int *a, int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
void sapxep (int *a, int n)
{
    for(int i=0;i<n-1; i++)
    for (int j=i+1;j<n; j++)
        if (* (a+i)>* (a+j)) 
            swap (a+i,a+j);
}