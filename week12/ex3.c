#include <stdio.h>

int main()
{
    char name[] = "Yejun";
    int age = 12;

    char friend_name[100];
    int friend_age;

    scanf("%s %d", friend_name, &friend_age);

    printf("Your name: %s, age: %d\n", name, age);
    printf("Friend's name: %s, age: %d\n", friend_name, friend_age);

    return 0;
}
