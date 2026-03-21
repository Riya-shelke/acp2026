#include <stdio.h>

void read_array(int n, int arr[]);
void print_array(int n, int arr[]);
void swap_array(int n, int a[n], int b[n]);

int main() {
    
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    if(n<=0) {
        printf("Invalid input");
        return 0;
    }
int a[n],b[n];
    printf("Enter the elements of the first array\n");
    // Read first array
    read_array(n, a);
    printf("Enter the elements of the second array\n");
    // Read second array
    read_array(n, b);
    printf("First array before swapping:\n");
    print_array(n, a);
    printf("\nSecond array before swapping:\n");
    print_array(n, b);
    printf("\n");

    // Swap arrays
    swap_array(n, a, b);

    // Print swapped arrays
    printf("First array after swapping:\n");
    print_array(n, a);
    printf("\n");
    printf("Second array after swapping:\n");
    print_array(n, b);

    return 0;
}

void read_array(int n, int arr[]) {
    // Write code here to read n elements into the array
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}

void print_array(int n, int arr[]) {
    // Write code here to print array elements separated by space
    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
}

void swap_array(int n, int a[n], int b[n]) {
    // Write code here to swap elements of arrays a and b
    for(int i=0;i<n;i++)
    {
        int temp=a[i];
        a[i]=b[i];
        b[i]=temp;
    }
}