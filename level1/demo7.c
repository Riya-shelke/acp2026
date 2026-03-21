#include <stdio.h>

// Function Prototypes
void inputStrings(char str1[], char str2[]);
int compareStrings(char str1[], char str2[]);
void output(int result);

int main() {

    char str1[100], str2[100];
    int result;

   // Call the function to input the two strings
   inputStrings(str1,str2);
   // Call the function to compare the two strings and store the returned value
 result=compareStrings(str1,str2);
   // Call the function to display the result
   output(result);

    return 0;
}

void inputStrings(char str1[], char str2[]) {
    printf("Enter first string:\n");
    scanf("%s",str1);
    printf("Enter second string:\n");
    scanf("%s",str2);
    // Write code to read both strings
}

int compareStrings(char str1[], char str2[]) {
    // Write code to compare two strings and return 0, 1, or -1
    int i=0;
    while(str1[i]!='\0'&&str2[i]!='\0')
    {
        if(str1[i]>str2[i])
          return 1;
        else if (str1[i]<str2[i])
          return -1;
          i++;
    }
    if(str1[i]=='\0'&& str2[i]=='\0')
     return 0;
    else if (str1[i]=='\0') 
     return -1;
    else
      return 1;
      
}

void output(int result) {
    printf("%d\n", result);
    // Write code to display the result
}