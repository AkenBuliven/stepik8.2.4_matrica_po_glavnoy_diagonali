# stepik8.2.4_matrica_po_glavnoy_diagonali

Входные данные:
Одно натуральное число 
N
N.

Выходные данные: 
Вывести на экран массив 
N
N на 
N
N, указанного вида. Числа разделять пробелами.

Sample Input:
4
Sample Output:
1 2 3 4
2 1 2 3
3 2 1 2
4 3 2 1


#include <stdio.h>
#include <stdlib.h> 
#include <math.h>
 
int n = 0;
int a[100][100];
int i = 0;
int j = 0;
 
int main() {
 
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            a[i][j] =  1 + abs(i - j);
        }
    }
 
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf ("%d ",a[i][j]);
        }
        printf ("\n");
    }
    return 0;
}
