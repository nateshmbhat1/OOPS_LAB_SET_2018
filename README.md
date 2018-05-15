# OOPS LAB SET 2018

###QUESTION BANK

1. Write a C++ program to create a class to represent entities of type Circle, specified by its attributes
radius and coordinates of its center. Include appropriate Constructors and display methods. Also write
a friend function that determines whether two circles intersect one another or they touch each other or
they are disjoint.
2. Write a C++ program that stores the time duration in hh:mm:ss format in a class called Duration having
the members hh, mm and ss.
Include the following constructors
zero parameter constructor that sets all data members to zero
three parameter constructor that sets values of hh, mm and ss respectively if the values are valid
Implement the following methods
getDuration method that reads and validates a time duration
showDuration method that displays the time duration
addDuration method that adds two durations
Illustrate the addition of two time durations
3. Create a RainGauge class that store rainfallincm information and city name. Include a zero parameter
constructor. Implement the following methods
fnReadMeasurement that generates a random decimal value in the range 0-20cms and reads the name
of the city
fnDispReading that display city name and rainfall received
Write a friend function that takes an array of RainGauge objects and the number of cities as parameters
and calculates the average rainfall received
Create an array of RainGauge objects in main and display the results
4. Write a class to represent entities of type Fraction with appropriate data members. Include a method
simplify that simpfies a given fraction ( for eg: 6/8 to 3/4).
Overload the following operators
 to read a fraction object
 to display a fraction object
== to check if two fractions are the same + to add two fractions
Illustrate these operations in main function.
5. Write a C++ program to create a class called EXPRESSION which can store an arithmetic expression
in both infix and postfix representations. Implement the following methods in the class.
i. Read and store an infix expression (input expression assumed to be valid)
ii. convert to postfix representation
iii. display the expressions in both infix and postfix representations
The expression is supposed to contain the operators + - * / only, along with the open and close parentheses.
6. Create two classes DB & DM which store the value of distances. DM stores distances in metres &
centimeters and DB in feet & inches. Write a program that can read values for the class objects and add
one object of DM with another object of DB. Use friend function to carry out the addition. The object
that stores the result should be a DB object.
7. Write a C++ program to create class called bank account. Include the following data member and member
functions.
Data Members
i.Name of depositor ii.Account holder iii.Type of account iv.Balance amount in the account
Member functions
i.Parametrized Constructor ii.To deposit an amount iii.To withdraw amount
iv.To display bank account details with balance.
2
8. Write a C++ program that reads contents from two text files that are specified as command line arguments
and create a file by name “merge.txt”. Read one line at a time from each input file in an alternate
manner and write to the output file till you have reached the end.
A Sample output is shown here:
Input File1 Input File1 merge.txt
abcdeabc
fghijfgh
12345678
67890123
abcdeabc
fghijfgh
12345678
67890123
9. Write a C++ program to create class called MATRIX using a two dimensional array of integers. Implement
the following operations by overloading the operator == which checks the compatibility of two matrices
m1 and m2 to be added and subtracted. Perform the addition and subtraction by overloading the operator + and – respectively. Display the results (sum matrix m3 and difference matrix m4) by overloading the operator .
10. Write a C++ program to create class called MATRIX. Overload the operator ‘==’ which checks the
compatibility of two matrices m1 and m2 to be multiplied. Perform the multiplication of matrices by
overloading the operator *. Display the results (product matrix m3) by overloading the operator .
11. Create a POLYGON class that has the following members
Data members : name, number of sides and area
Methods :
constructors and destructors
display method to display details of the POLYGON object
pure virtual function calcArea
Next Derive the following classes from POLYGON namely TRIANGLE and SQUARE with appropriate
data members and methods. Both these derived classes have to define the calcArea method to suit its
purpose.
12. Write a class called ResistancePair that represents a pair of resistance connected either in series or parallel.
Implement a method too read the resistance values of the resistance pair. Provide a pure virtual function
that calculates the combined resistance of the resistance pair which will be implemented in its child
classes namely SeriesResistancePair and ParallelResistancePair. Now calculate the combined resistance
of 4 ResistancePair objects connected in parallel.
Note :
the combined resistance for two resistors connected in series is the sum of its individual resistances.
the combined resistance for two resistors connected in parallel is the reciprocal of the sum of the individual
reciprocal of the resistances.
13. Design and develop a ITEM class with itemName, itemCode, itemPrize, numberOfItems (itemCount) as
data members. Implement suitable methods
Working with Files: demonstrate the following file operations;
a. Writing an object at the end of file
b. Reading all objects from a file and display on console
c. Update a given object information on the file
14. Write a C++ program to perform the following string operations by using the C++ string library
i. Parameterized and copy constructor
ii. Compare two string objects
iii. Find substring in a main string
iv. Return the position of the first occurrence a given substring in the string.
v. Return the position of the last occurrence a given substring in the string
vi. Insert a given substring at the end of main string
vii. Swap content of two given strings
15. Write a C++ program to create a template functions for Insertion sort and Selection Sort. Demonstrate
sorting of integers and double data types for both sorting algorithms.
16. Write a C++ program to create a template class STACK, with push and pop and display member
functions. Write a menu based program to illustrate the working for stack of doubles and stack of integers.
Use exception handling to handle the special conditions underflow and overflow of the stack.