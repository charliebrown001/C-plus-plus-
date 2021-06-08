#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter rows:";
    cin>>n;
    cout<<endl;

    for(int i = 0; i < n ; i++){ // this just one comment done using vim
        for (int j = 0; j <=i ; j++)
        {
            if ( (i+j) % 2 == 0 )
            {
                cout<<"1 ";
            }
            else
            {
                cout<<"0 ";
            }   
        }       
    cout<<endl;
    }  
    
    cout<<endl;            
    return 0;
}
