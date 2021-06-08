#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter rows:";
    cin>>n;
    cout<<endl;   

    for(int i=0;i<n;i++){
        for (int k = i ; k < n ; k++)
        {
            cout<<" ";
        }
        
        for (int j = 0; j <= n; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}