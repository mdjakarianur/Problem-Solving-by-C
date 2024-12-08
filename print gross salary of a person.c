/*
Base salary of a person is 50000.and he also gets 40% bonus of house rent and
15% bonus of other. print gross salary.
*/

#include <stdio.h>

int main(){
    float salary=50000;
    float house_bonus= 0.40*salary;
    float other_bonus= 0.15*salary;
    float gross_salary = salary + house_bonus + other_bonus;

    printf("%.2f",gross_salary);

    return 0;
}
