// Vectors
//
// Vectors are just an advanced version of arrays and provide a wide
// variety of functions and methods
//
#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector <int> vector1 {};
	vector <int> vector2 {};   // two empty integer vectors

	vector1.push_back(10);
	vector1.push_back(20);

	vector2.push_back(100);
	vector2.push_back(200);

	vector < vector <int > > vector2d {};
	
	vector2d.push_back(vector1);
	vector2d.push_back(vector2);

	cout << vector2d.at(0).at(0) << endl;
	cout << vector2d.at(0).at(1) << endl;
	cout << vector2d.at(1).at(0) << endl;
	cout << vector2d.at(1).at(1) << endl << endl;

	vector1.at(0) = 100;

	cout << vector2d.at(0).at(0) << endl;
	cout << vector2d.at(0).at(1) << endl;
	cout << vector2d.at(1).at(0) << endl;
	cout << vector2d.at(1).at(1) << endl << endl;

	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl << endl;

	return 0;
}
