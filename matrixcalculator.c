#include <stdio.h>

int main() {
    int row_a;
    int column_a;
    int row_b;
    int column_b;

    while (1) {
        printf("Enter the number of rows in matrix a: ");
        scanf("%d", &row_a);
        printf("Enter the number of columns in matrix a: ");
        scanf("%d", &column_a);
        printf("Enter the number of rows in matrix b: ");
        scanf("%d", &row_b);
        printf("Enter the number of columns in matrix b: ");
        scanf("%d", &column_b);

        if (row_a != column_b) {
            printf("Invalid Entry. The number of columns in matrix A must match the number of rows in matrix B.\n");
        } else {
            break;
        }
    }

    int matrix_1[row_a][column_a];
    int matrix_2[row_b][column_b];

    for (int mat_row_a = 0; mat_row_a < row_a; mat_row_a++) {
        for (int mat_col_a = 0; mat_col_a < column_a; mat_col_a++) {
            printf("Please enter the value for the first matrix [%d][%d]: ", mat_row_a, mat_col_a);
            scanf("%d", &matrix_1[mat_row_a][mat_col_a]);
        }
    }

    for (int mat_row_b = 0; mat_row_b < row_b; mat_row_b++) {
        for (int mat_col_b = 0; mat_col_b < column_b; mat_col_b++) {
            printf("Please enter the value for the second matrix [%d][%d]: ", mat_row_b, mat_col_b);
            scanf("%d", &matrix_2[mat_row_b][mat_col_b]);
        }
    }

    // Perform matrix multiplication
    int solution[row_a][column_b];

    for (int i = 0; i < row_a; i++) {
        for (int j = 0; j < column_b; j++) {
            solution[i][j] = 0;
            for (int k = 0; k < column_a; k++) {
                solution[i][j] += matrix_1[i][k] * matrix_2[k][j];
            }
        }
    }

    // Print the resulting matrix
    printf("Resulting Matrix:\n");
    for (int i = 0; i < row_a; i++) {
        for (int j = 0; j < column_b; j++) {
            printf("%d ", solution[i][j]);
        }
        printf("\n");
    }

    return 0;
}
