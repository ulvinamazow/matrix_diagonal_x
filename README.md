# Matrix Diagonal X Pattern (C++)

## Program Overview

This C++ program generates a **square matrix** based on user input and prints an **X-shaped diagonal pattern** to the console.

First, the program asks the user to enter the size of the square matrix. Then it creates a 2D matrix of that size and initializes all elements to `0`. After that, the program fills the **main diagonal** (from top-left to bottom-right) and the **secondary diagonal** (from top-right to bottom-left) with `1`s. Finally, the complete matrix is printed to the console.

This program demonstrates the use of:

* 2D arrays
* Nested `for` loops
* Matrix indexing
* Diagonal pattern logic



## Sample Input and Output

**Input:**
5


**Output:**
1 0 0 0 1
0 1 0 1 0
0 0 1 0 0
0 1 0 1 0
1 0 0 0 1


## How to Compile and Run

1. Compile the source file using a C++ compiler:

bash
g++ matrix_diagonal_x.cpp -o matrix

2. Run the program:

bash
./matrix

3. When prompted, enter the size of the square matrix and press Enter.


İstəsən, bir az da **texniki** (compiler qeydi, C++ standard) və ya **daha sadə dil** versiyasını da yaza bilərəm 👍
