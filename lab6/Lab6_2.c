#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int n, m;
    printf("Enter the number of rows of the array: ");
    printf("\nn = ");
    scanf_s("%d", &n);
    printf("Enter the number of array columns: ");
    printf("\nm = ");
    scanf_s("%d", &m);
    const int Low = -100, High = 100;
    srand(time(0));

    int arr['n']['m'];
    printf("\nGenerated array %dx%d\n", n, m);
    printf("arr=");
    for (int i = 0; i < n; i++) {
        printf("\t{");
        for (int j = 0; j < m; j++) {
            arr[i][j] = Low + rand() % High;
            printf("%d, ", arr[i][j]);
        }
        printf("}\n");
    }
    int max = 0, min = 0;

    int min_index = 0, max_index = 0;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++)
            sum += arr[i][j];
        printf("\n");
        printf("Array sum = %d\n", sum);

        if (i < 1 || sum > max) {
            max = sum;
            max_index = i;
            
        }

        if (i < 1 || sum < min) {
            min = sum;
            min_index = i;
            
        }
    }
    
    for (int j = 0; j < m; j++) {
        int temp = arr[min_index][j];
        arr[min_index][j] = arr[max_index][j];
        arr[max_index][j] = temp;
        
    }

    

    printf("\nAn array with two permuted elements, maximum and minimum sums\n", n, m);
    printf("arr=");
   
    for (int i = 0; i < n; i++) {
        printf("\t{");
        for (int j = 0; j < m; j++)
         printf("%d, ", arr[i][j]);
        
        printf("}\n");
    }
    

    return 0;
}