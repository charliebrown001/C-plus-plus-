#include<iostream>
using namespace std;

int main()
{
    int r;
    cout<<"Enter rows:";
    cin>>r;
    cout<<endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = r; j > i; j--)
        {
            cout<<" ";
        }

        for (int k = 0; k <= i ; k++)
        {
            cout<<"*";
        }   
        cout<<endl;
    }
    
    return 0;
}