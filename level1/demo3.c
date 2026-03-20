#include<stdio.h>

typedef struct {
    float length;
    float width;
    float area;
} Rectangle;

// Function Prototypes
void input(int n, Rectangle rects[n]);
void calculate_area(int n, Rectangle rects[n]);
int findLargestArea(int n, Rectangle rects[n]);
void output(int n, int largestIndex, Rectangle rects[n]);

int main() {

    int n;

    printf("Enter number of rectangles:\n");
    scanf("%d", &n);

    Rectangle rects[n];

    input(n, rects);
    calculate_area(n, rects);
    int largestIndex = findLargestArea(n, rects);
    output(n, largestIndex, rects);

    return 0;
}

void input(int n, Rectangle rects[n]) {
    // Write code to read length and width for each rectangle
    for(int i=0;i<n;i++){
        printf("Enter length of rectangle %d:\n",i+1);
        scanf("%f",&rects[i].length);
        printf("Enter width of rectangle %d:\n",i+1);
        scanf("%f",&rects[i].width);
    }
}

void calculate_area(int n, Rectangle rects[n]) {
    // Write code to calculate area of each rectangle
    for(int i=0;i<n;i++){
        rects[i].area=rects[i].length*rects[i].width;
    }
}

int findLargestArea(int n, Rectangle rects[n]) {
    // Write code to find index of rectangle with largest area
    int largestIndex = 0;
    for (int i = 1; i < n; i++) {
        if (rects[i].area > rects[largestIndex].area) {
            largestIndex = i;
        }
    }
    return largestIndex;
}

void output(int n, int largestIndex, Rectangle rects[n]) {
    printf("\nAreas of all rectangles:\n");
    for (int i = 0; i < n; i++) {
        printf("Rectangle %d Area: %f\n",i + 1, rects[i].area);
    }
    printf("\nRectangle with Largest Area:\n");
    printf("Length=%f\nWidth=%f\nArea=%f", 
            rects[largestIndex].length,rects[largestIndex].width, rects[largestIndex].area);
    // Write code to display results
}