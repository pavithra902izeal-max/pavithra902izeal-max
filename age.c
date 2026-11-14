#include <stdio.h>
int main()
{ 
int birth_year, currrent_year, age;
printf("Enter your birth year: ");
scanf("%d", &birth_year);
printf("Enter your current year: ");
scanf("%d", &current_year);
age = current_year - birth_year;
printf("your age is = %d\n", age);
return 0;
}
