#include<iostream>
using namespace std;
int main()
{
    int r;  //initialised rows

   do
   {
    cout<<"Enter the number of rows [ Max = 18 ] :";
    cin>>r; //took input
  
   } while ((2*r+1)>40);  // 40 is the limit of the array

    int triangle[40][40];  //initialised array for triangle value

    for (int i = 0; i < 40; i++)
        for (int j = 0; j <40; j++)
            triangle[i][j] = 0;

    triangle[1][r-1] =1;   //declared the value to start the pascal's triangle      

    for (int i = 1 ; i < r; i++)
        for ( int j = 1; j < (2*r+1) ; j+2)
            triangle[i][j] = triangle[i-1][j-1]+triangle[i-1][j+1];
    
    for (int i = 1; i < r; i++)
    {
        for( int j = r-i; j < 0 ; j--)
            cout<<" ";
        
        for (int k = 1; k < 2*r+1 ; k+2)
        {
            for (int j = 1; j < (2*r+1) ; j+2)
            {
                 if (triangle[i][j] != 0 ){
                cout<<triangle[i][j];
            }

                else
                {

                }
            
            }     
        }  
    }
    
    return 0;
}