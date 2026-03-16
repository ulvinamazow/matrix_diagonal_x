# Square Matrix with Diagonals Set to 1

This C++ program creates a square matrix of user-defined size, initializes all elements to `0`, then sets both the **main diagonal** and the **anti-diagonal** to `1`. Finally, it prints the resulting matrix.

## How It Works

1. The user is prompted to enter the size of the square matrix.
2. A 2D array `matrix` of size `mySize × mySize` is declared (using a variable-length array extension, common in GCC).
3. All elements are initialized to `0` using nested loops.
4. A second loop sets:
   - `matrix[i][i] = 1` → main diagonal (top-left to bottom-right)
   - `matrix[i][mySize - i - 1] = 1` → anti-diagonal (top-right to bottom-left)
5. The matrix is printed row by row, with each element followed by two spaces.

## Prerequisites

- A C++ compiler that supports variable-length arrays (e.g., GCC).  
  *Note: VLA are not part of standard C++, but many compilers accept them as an extension.*

## Compilation and Execution

1. Save the code to a file, e.g., `matrix_diagonals.cpp`.
2. Compile with:
   ```bash
   g++ matrix_diagonals.cpp -o matrix_diagonals
   ```
3. Run the executable:
   ```bash
   ./matrix_diagonals
   ```

## Example

**Input:**
```
Enter the size of the square matrix:5
```

**Output:**
```
1  0  0  0  1  
0  1  0  1  0  
0  0  1  0  0  
0  1  0  1  0  
1  0  0  0  1  
```

The program prints the matrix with two spaces between numbers for readability.

## Notes

- The matrix size must be a positive integer.
- If the size is odd, the centre element (belonging to both diagonals) will still be `1` (set twice, but remains `1`).
