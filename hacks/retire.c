#include<stdio.h>
#include<stdlib.h>
int main()
{
    double initial_balance, monthly_contribution , annual_rate_of_return , annual_rate_of_inflation;
    printf("Enter the initial balance, monthly contribution, annual rate of return, annual rate of inflation\n");
    scanf("%1f,%1f,%1f,%1f", &initial_balance , &monthly_contribution , &annual_rate_of_return , &annual_rate_of_inflation);

    int years_till_retirement;
    printf("enter the number of years till retirement");
    scanf("%d",&years_till_retirement);

    if(initial_balance<=0 || monthly_contribution<=0 || annual_rate_of_return<=0 ||annual_rate_of_inflation<=0 || years_till_retirement<=0)
     {
        printf("this is an invalid information, please enter positive values\n");
        return 1;
     }
     double monthly_rate_of_return = annual_rate_of_return / 12.0;
     double monthly_rate_of_inflation = annual_rate_of_inflation/12.0;
     double balance = initial_balance;
     
}
