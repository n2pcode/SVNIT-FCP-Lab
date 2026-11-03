#include <stdio.h>

int main() {
    int m[3][3], i, j, max, min;

    printf("Enter 9 elements of the 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &m[i][j]);

    max = m[0][0];
    min = m[0][0];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (m[i][j] > max)
                max = m[i][j];
            if (m[i][j] < min)
                min = m[i][j];
        }
    }

    printf("Max = %d\nMin = %d\n", max, min);

    return 0;
}