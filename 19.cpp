#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    
    for(int i=1; i<=n; i++)
    {     for(int s=1;s<=(n-i);s++){
           cout<<" ";
    }
        for(int j=1; j<=i; j++)
        {
            cout<<'*'<<" ";
        }
        cout<<"\n";
    }
    for(int i=n-1; i>=1; i--)
    {     for(int s=1;s<=(n-i);s++){
           cout<<" ";
    }
        for(int j=1; j<=i; j++)
        {
            cout<<'*'<<" ";
        }
        cout<<"\n";
    }
    return 0;
}