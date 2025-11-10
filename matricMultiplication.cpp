#include <iostream>
using namespace std;

int main() {

    int matrix1[2][2]={
                      {1,2},
                      {3,4}
                    };
    int matrix2[2][2]={
                      {5,6},
                      {7,8}
                    };
    int matrix3[2][2]; 

    int row = sizeof(matrix1) / sizeof(matrix1[0]);
    int col = sizeof(matrix1[0]) / sizeof(matrix1[0][0]);


    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            matrix3[i][j] = 0;
            for(int k = 0; k < row; k++){
                matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    cout << "Multiplicatoin of Matrix1 * Matrix2 -> " << endl;
    for(int i = 0; i < row; i++){
        cout << "[ " ;
        for(int j = 0 ; j < col; j ++){
            cout << matrix3[i][j] << " ";
        }
        cout  << "]" << endl;
    }
  
    return 0;
}