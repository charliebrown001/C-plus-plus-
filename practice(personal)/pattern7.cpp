#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter rows:";
    cin>>n;
    for (int i = 0; i < n ; i++)
    {
        for (int j = i ; j < n ; j++)
            cout<<"  ";
        for (int k = (i+1) ; k >= 1 ; k--)
            cout<<k<<" ";
        for (int m = 2 ; m <= (i+1) ; m++)
            cout<<m<<" ";
        cout<<endl;
    }
    return 0;
}
