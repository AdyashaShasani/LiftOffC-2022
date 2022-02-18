//ASSIGNMENT-1 Q.5 :-
//Adyasha Shasani_ETC_2nd year

#include<stdio.h>
int main()
{
    float r,dia,peri,area;
    printf("Enter the radius of circle :\n");
    scanf("%f\n", &r);
    dia = 2*r;
    peri = 2*3.14*r;
    area = 3.14*r*r;
    printf("The diameter is %f\n", dia);
    printf("The circumference is %f\n", peri);
    printf("The area is %f\n", area);
    return(0);
}