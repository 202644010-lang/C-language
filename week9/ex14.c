#include <stdio.h>

int main() {
    char grade;

    scanf("%c",&grade);

    if(grade == 'A')
    {
        printf("Excellent");
    }
    else if (grade == 'B')
    {
        printf("Good");
    }
    else if (grade == 'C')
    {
        printf("Usually");
    }
    else
    {
        printf("error");
    }

    return 0;
}
