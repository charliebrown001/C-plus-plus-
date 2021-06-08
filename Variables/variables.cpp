// Variables
//
// Ram --> Random access memory 
//
// Ram is divided into blocks and each block of memory is referred with a 
// unique set of numbers and letters
//
// Referring these block with the real names is hard and can cause mistakes
// So, instead of the real names we use variables, the compiler alots the 
// varible with a block of memory
//
// We can store anything in these blocks, but it has a limit
// we may talk about that further
//
// The variables helps the programmer to have meaningful names and
// understand the code better
//
// Declaration
// variable-type variable-name

int age;

// Initialisation
// variable-name = value

age = 14

// Initialisation + Declaration
// variable-type variable name= value 
//

int mobile_number = 430938103;

// U need to keep some things in mind while making variables
//
// They can contain letters,numbers,_
// They cant start with number or _
// They are case sensitive
// They cannot be same as the reserved keywords in c++
//

int apple;
int Apple; // They both are different variables

// int 89ok; //cannot start with number
// int _ok;  // cannot start with _
// int cout; // reversed keywords
// int return;
// invalid names

// Some other things to keep in mind
//
// Dont do any work with non-declared variables


// Types of initialisation
//
// int age = 21; using the assignment operator '='
// int age (21); constructor initialisation
// int age {21}; benificial way (will talk about this later)
//
