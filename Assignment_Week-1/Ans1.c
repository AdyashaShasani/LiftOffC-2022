//ASSIGNMENT-1 Q.1 :-
//Adyasha Shasani_ETC_2nd year

#include<stdio.h>
int main()
{
    int n;
    char a[50], b[80], c[200];

    printf("Enter your name :\n");
    scanf("%s", &a);
    printf("Enter your regd. no. :\n");
    scanf("%d", &n);
    printf("Enter your branch :\n");
    scanf("%s", &b);
    printf("Mention your hobbies :\n");
    scanf("%s", &c);

    printf("Name : %s\n", a);
    printf("Regd. No. : %d\n", n);
    printf("Branch : %s\n", b);
    printf("Hobbies : %s\n", c);

    return(0);
}