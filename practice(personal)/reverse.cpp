#include<iostream>	
using namespace std;

void spinwords(string s){

  for( int i = 0 ; i < s.length() ; i++ ){              // This Loop runs for every char in the string

    int j = i ;                                         // stored the initial value of i in j

    while( s[i] != ' ' && i < s.length() )              // incremented the value of i till ' ' or the total length of string
	  i++;	

    if( (i-j) > 4 ){                                    // (i-j) is the length of word
      
	  for(int k = (i-1) ; k >=  j ; k--)                // if length of word > 4 , reverse print
        cout<<s[k];

      cout<<" ";                                        // space after word

    }

    else if( (i-j) > 0 && (i-j) <= 4 ){					// else if word <= 4 and >0 print as it is

      for(int m = j ; m <= (i-1) ; m++)
        cout<<s[m];

      cout<<" ";										// space after word

    }

  }														// loop ended
  
}														// function ended

int main()
  
{ 
    string s;                 // created a string s
    cout<<"Enter string:";    // asked for input
    getline(cin,s);           // took input
	
    spinwords(s);             // using function to get the desired output
	
	cout << endl;			  // line break
    return 0;
}
