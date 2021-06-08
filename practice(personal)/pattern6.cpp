#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter rows:";
    cin>>n;
    cout<<endl; //took input for rows

    for (int i = 1 ; i <= n; i++)
    {
        for (int j = i; j < n ; j++)
        {
            cout<<" ";
        }
        for (int k = 1 ; k <= i; k++)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
