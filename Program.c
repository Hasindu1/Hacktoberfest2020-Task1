
#include <stdio.h>

int main()
{
    //To store user inputs
    char name[100];
    char country[100];
    char skill;
    int age;

    printf("Welcome to Hacktoberfest 2020\n");
    printf("Enter your name : ");//Get User name
    scanf("%[^\n]%*c", name);//Scanning the user input of name including the spaces between 
    printf("Enter your Country of Residance : ");//Get user country
    scanf("%[^\n]%*c", country);//Scaning the user input of country considering spaces between 
    printf("Enter your Age : ");//Get user Age
    scanf("%d",&age);//Scanning the user input of age
    printf("Rate your programmings skills from A-D (A being the highest and D being the lowest : ");//Get user skill level
    scanf(" %c",&skill);
    printf("Thank you %s Happy Hacking",name);//Thank the user

    return 0;
}
