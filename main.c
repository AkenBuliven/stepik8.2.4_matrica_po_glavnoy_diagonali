// #include <stdio.h>

// int main() {
//     int N;
//     int temp;
//     scanf("%d", &N);
//     int a[N][N];
//     for (int i = 0;i<N;i++){
//       for(int j = 0;j<N;j++){
//         a[i][j]=j+1;
//       }
//     }
//     printf("\n");
//     for (int i = 0;i<N;i++){
//       for(int j = i ;j>=0;j--){
//         // temp = a[i][j];
//         // a[i][j] = a[j][i];
//         // a[j][i] = temp;
//         printf("%d ", a[i][j]);
//       }
//       printf("\n");
//     }
//     return 0;
// }


// int main() {
//     int N = 4;
//     int a[N][N], i, j, b;

//     for (i=0; i< N; i++) {
//         for (j=0; j< N; j++) {
//             a[i][j]=j+1;
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
//     for (i=0; i< N; i++) 
//         for (j=0; j< N; j++) 
//             if (i == j) {
//                 b = a[i][j];
//                 a[i][j] = a[i][N-1-j];
//                 a[i][N-1-j] = b;
//             }
//     for (i=0; i< N; i++) {
//         for (j=0; j < N; j++) {
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

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