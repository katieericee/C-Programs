//Katherine Rice
//April 6th, 2016

//Currently there are 6 billion people on the earth. The annual growth rate is 1%.
//Question: After how many years will the number of population reach 8 billion?
//Write a program in Code::Blocks to solve this problem.

//Please use the while statement,do-while statement and for statement to finish respectively.

int main(){

double population = 6.0;
int counter = 0;

while (population <= 8.0) {
    population=population*1.01;
    counter++;
}

printf("\nWhile Statement: The Population will reach 8 Billion in: ""%d",counter);
population = 6.0;

do {
    population=population*1.01;
}
while (population<=8.0 );

printf("\nDo While Statement: The population will reach 8 million in: " "%d",counter);
population=6.0;

for (int counter = 0; population <= 8.0; counter++){
    population=population*1.01;
}
printf("\nFor Statement: The population will reach 8 million in: " "%d",counter);
}
