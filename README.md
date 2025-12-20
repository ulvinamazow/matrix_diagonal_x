Matrix Diagonal X Pattern (C++)
Program Overview

This C++ program generates a square matrix based on user input and prints an X-shaped diagonal pattern to the console.

First, the program asks the user to enter the size of the square matrix. Then it creates a 2D matrix of that size and initializes all elements to 0. After that, the program fills the main diagonal (from top-left to bottom-right) and the secondary diagonal (from top-right to bottom-left) with 1s. Finally, the complete matrix is printed to the console.

This program demonstrates the use of:

2D arrays

Nested for loops

Matrix indexing

Diagonal pattern logic

Sample Input and Output

Input:

5


Output:

1 0 0 0 1
0 1 0 1 0
0 0 1 0 0
0 1 0 1 0
1 0 0 0 1

How to Compile and Run

Compile the source file using a C++ compiler:

g++ matrix_diagonal_x.cpp -o matrix


Run the program:

./matrix


When prompted, enter the size of the square matrix and press Enter.
