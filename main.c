// Katherine Rice
// C Programming
// April 6th, 2016

//Write a program in Code::Blocks that you can input your score, using the switch-case statement to convert it.
//Above 90: A   80-89: B  70-79: C   60-69: D  Under 60: F
//For other numbers, you can print out "Your input score is a wrong number"

int main()
{
int grade;

printf("Enter your numeric grader: ");
scanf("%d",&grade);

switch(grade/10) {

case (10): {

    printf("Your grade is an: A\n");
    break;
    }
case (9):{
    printf("Your grade is an: A\n");
    break;
}
case (8): {
    printf("Your grade is a: B\n");
    break;
}
case (7): {
    printf("Your grade is a: C\n");
    break;
    }

case (6):{
    printf("Your grade is a: D\n");
    break;
}
case (5): {
    printf("You FAILED\n");
    break;
}
case (4): {
    printf("You FAILED\n");
    break;
}
case (3): {
    printf("You FAILED\n");
    break;
}
case (2): {
    printf("You FAILED\n");
    break;
}
case (1): {
    printf("You FAILED\n");
    break;
}
default:{
    printf("Invalid entry!\n");
}
}
}
