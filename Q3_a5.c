#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void matrixAddition(int mat1[][100], int mat2[][100], int result[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void matrixMultiplication(int mat1[][100], int mat2[][100], int result[][100], int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int mat1[100][100], mat2[100][100], result[100][100];
    int rows1, cols1, rows2, cols2;

    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter the elements of first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    printf("Enter the elements of second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    pid_t pid = fork();

    if (pid < 0) {
        fprintf(stderr, "Fork failed\n");
        return 1;
    } else if (pid == 0) { // Child process
        if (rows1 != rows2 || cols1 != cols2) {
            printf("Matrices cannot be added as dimensions are not same.\n");
            return 1;
        }
        printf("Matrix addition result:\n");
        matrixAddition(mat1, mat2, result, rows1, cols1);
        for (int i = 0; i < rows1; i++) {
            for (int j = 0; j < cols1; j++) {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    } else { // Parent process
        if (cols1 != rows2) {
            printf("Matrices cannot be multiplied as number of columns of first matrix is not equal to number of rows of second matrix.\n");
            return 1;
        }
        printf("Matrix multiplication result:\n");
        matrixMultiplication(mat1, mat2, result, rows1, cols1, cols2);
        for (int i = 0; i < rows1; i++) {
            for (int j = 0; j < cols2; j++) {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
