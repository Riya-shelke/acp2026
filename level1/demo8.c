#include<stdio.h>
void input(char *str);
void concatinate_strings(char *str1,char *str2);
void output(char *str);
int main()
{
    char str1[100],str2[100];
    printf("Enter the first string\n");
    input(str1);
    printf("Enter the second string\n");
    input(str2);
    concatinate_strings(str1,str2);
    output(str1);
    return 0;
}
void input(char *str)
{
    scanf("%s",str);
}
void concatinate_strings(char *str1,char *str2)
{
    int i=0,j=0;
    while(str1[i]!='\0')
    {
        i++;
    }
    while(str2[j]!='\0')
    {
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
}
void output(char *str)
{
    printf("The concatenated string is %s",str);
}