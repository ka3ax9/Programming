#include <stdio.h>
#include <math.h>


int main(){
    int n;
    int sum = 0;
printf("Enter the number of elements in the array:\n");
printf("n = ");
scanf_s("%d", &n);
float a['n'];
printf("Enter real numbers for the array:\n");
for (int i = 0; i < n; i++)
{
    printf("a[%d] = ", i);
    scanf_s("%d", &a[i]);
}

for (int i = 0; i < n; i++)
{
    if (i % 5 == 0)
        sum += i;
    
}
    printf("Sum = %d\n", sum);
  
return 0;

}