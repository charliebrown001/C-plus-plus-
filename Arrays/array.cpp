// Array
//
// An array is a combination of various variables of the same data type
// Each element is referred with a number(index) starting from zero.
//
// How are they helpful?
//
// Let's say we have a 1000 employes 
// and we want to store their salaries
// instead of creating a 1000 variables
// for each employee we can create a array of 1000 integers
//
// Example:
//

int array_of_salaries [1000];

// This way we can declare variables of a 1001 elements  // because indexing starts from 0
// array-type  array-name [Number of elements];
//
// The number of elemnts can be empty,
// then the compiler will decide the size

// Example:

int array_of_emoplyee_id [];

// Initialisation

int array_of_salaries {3000,8900,90000,8888,78000}  // and so on

// Each element can be accessed by its index

// Example;
//

int array_of_salaries[0] {8000};   // Here we initialised the sallary of employee 0 to 8000
int array_of_salaries[1] {9000};  // Similarly for the other 1000 employees

// Keep in mind that the index(numbers) in c++ start from 0 
// So, for 1000 employees we may just need a array of size 999;

// This is a more easy,organised and efficient way of using variables 
//
// A more advanced version of an array is a vector
// We will talk about that in the following files
//
