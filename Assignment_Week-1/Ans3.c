//ASSIGNMENT-1 Q.3 :-
//Adyasha Shasani_ETC_2nd year

#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number :\n");
    scanf("%d", &a);
    if(a%2==0)
    {
        printf("%d is even number.\n", a);
    }
    else
    {
        printf("%d is odd number.\n", a);
    }
    return(0);
}