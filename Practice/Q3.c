// inverse of a matrix

#include <stdio.h>

//Print the matrix
void printMat(int row, int col, double Mat[row][col]){
    printf("\n");
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            printf("%10lf ", Mat[i][j]);
        }
        printf("\n");
    }
}



int main(){
    const int dim = 4;
    int i,j,k;
    double pivot;

    //example matrix
    double mat[4][4] = {
        {2, 5, 0, 8},
        {1, 4, 2, 6},
        {7, 8, 9, 3},
        {1, 5, 7, 8}
    };
    printMat(dim,dim,mat);
    double I[4][4], mul;

    //Declaring identity matrix
    for (i = 0; i < dim; i++)
        I[i][i] = 1;

    //gaussian elemination
    for (i = 0; i < dim; i++){
        pivot = mat[i][i];
        for (k = 0; k < dim; k++){
            mat[i][k] /= pivot;
            I[i][k] /= pivot;
        }
        for (j = 0; j < dim; j++){
            if (j == i)
                continue;
            mul = mat[j][i];
            for (k = 0; k < dim; k++){
                mat[j][k] -= mul * mat[i][k];
                I[j][k] -= mul * I[i][k];
            }
        }
    }
    printMat(dim,dim,I);
    return 0;
}