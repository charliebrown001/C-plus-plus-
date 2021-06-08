#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter rows{even number}:";
    cin>>n;
    cout<<endl;
    for(int i = 0 ; i < n ; i++){
          if (i%2 != 0 | i==0)
        {
            for(int j = i ; j < n; j++)
                cout<<" ";
            for(int k = i ; k >= 0 ; k--)
                cout<<"* ";
        cout<<endl;
        }           
    }
    for(int i = 0 ; i < (n*2) ; i++){
        if (i%2 != 0 | i== 0)
        {
            for(int j = 0 ; j <= i; j++)
                cout<<" ";
            for(int k = i ; k < n ; k++)
                cout<<"* ";
                
            cout<<endl; 
        }
    }
    return 0;
}