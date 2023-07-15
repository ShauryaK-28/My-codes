#include <iostream>
using namespace std;
int main()
{
    // input the two matrices
    int r1, c1;
    cin >> r1 >> c1;
    int A[r1][c1]; // defining matrix A
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> A[i][j];
        }
    }
    int r2, c2;
    cin >> r2 >> c2;
    int B[r2][c2]; // defining matrix B
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> B[i][j];
        }
    }
    int C[r1][c2];
    if (c1 != r2)
    {
        cout << "Input matrices can't be multiplied" << endl;
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < r2; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}






// // C++ program to multiply two matrices

// #include <bits/stdc++.h>
// using namespace std;

// // Edit MACROs here, according to your Matrix Dimensions for
// // mat1[R1][C1] and mat2[R2][C2]
// #define R1 2 // number of rows in Matrix-1
// #define C1 2 // number of columns in Matrix-1
// #define R2 2 // number of rows in Matrix-2
// #define C2 2 // number of columns in Matrix-2

// void mulMat(int mat1[][C1], int mat2[][C2])
// {
// 	int rslt[R1][C2];

// 	cout << "Multiplication of given two matrices is:\n";

// 	for (int i = 0; i < R1; i++) {
// 		for (int j = 0; j < C2; j++) {
// 			rslt[i][j] = 0;

// 			for (int k = 0; k < R2; k++) {
// 				rslt[i][j] += mat1[i][k] * mat2[k][j];
// 			}

// 			cout << rslt[i][j] << "\t";
// 		}

// 		cout << endl;
// 	}
// }

// // Driver code
// int main()
// {
// 	// R1 = 4, C1 = 4 and R2 = 4, C2 = 4 (Update these
// 	// values in MACROs)
// 	int mat1[R1][C1] = { { 1, 1 },
// 						{ 2, 2 } };

// 	int mat2[R2][C2] = { { 1, 1 },
// 						{ 2, 2 } };

// 	if (C1 != R2) {
// 		cout << "The number of columns in Matrix-1 must "
// 				"be equal to the number of rows in "
// 				"Matrix-2"
// 			<< endl;
// 		cout << "Please update MACROs according to your "
// 				"array dimension in #define section"
// 			<< endl;

// 		exit(EXIT_FAILURE);
// 	}

// 	// Function call
// 	mulMat(mat1, mat2);

// 	return 0;
// }

// // This code is contributed by Manish Kumar (mkumar2789)
