#include<iostream>
using namespace std;

int main()
{
    float h,w;

    cout<<"Enter your hieght(m):";
    cin>>h;
    cout<<"Enter your weight(kg):";
    cin>>w;
    int bmi = (w/(h*h));
    cout<<endl<<endl<<"Your BMI is "<<bmi<<endl<<endl;
    if(bmi < 18)
        cout<<"You are undernourished";
    else if(bmi >= 18 && bmi <= 25)
        cout<<"You are perfect";
    else if(bmi > 25)
        cout<<"Do some exercise!";
    return 0;
}

