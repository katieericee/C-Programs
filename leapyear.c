//Katherine Rice
//April 6th, 2016

//Write a program in Code::Blocks to determine whether the input year is a leap year or not.
//HINT: A leap year is divisable by 4, but not by 100 (except if divisable by 400.)

int main()
{
    int year;

    printf("Enter the year: \n");
    scanf("%d", &year);

if ((year%4 == 0) || (year%400 == 0)){
    printf("It is a leap year!!");
}

else
    printf("It is not a leap year! ");

}
}
