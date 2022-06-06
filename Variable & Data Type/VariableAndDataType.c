#include<stdio.h>

int main () {
   
// Data type integer
int aNumber = 100;
printf("Number = %d\n",aNumber);

// Data type float

float floatingNumber = 10.3949;
printf("Floating Number = %f\n",floatingNumber);

// Data type double

double floatingDoubleNumber = 3.14153844894;
printf("The Double Floating Number is %lf\n",floatingDoubleNumber);

//Data Type character

char firstAlphabet = "D";
printf("First Alphabet is %c\n",firstAlphabet);


// User Input and Output
int mathMarks;
int physicsMarks;
int chemistryMarks;

printf("Your marks in Higher Math ");
//scanf("%d",&mathMarks);
printf("Your marks in Physics ");
//scanf("%d",&physicsMarks);
printf("Your marks in Chemistry ");
//scanf("%d",&chemistryMarks);

int totalMarks = mathMarks + physicsMarks + chemistryMarks;
printf("Total Marks is %d\n",totalMarks);
printf("Your favourite alphabet ");
char favAlphabet;
//scanf("%c",&favAlphabet);
printf("Favourite Alphabet is %c\n",favAlphabet);


//Arithmatic Operator

int num1;
int num2;
//scanf("%d %d",&num1,&num2);
int jog = num1 + num2;
printf("%d + %d = %d\n",num1,num2,jog);

int biyog = num1 - num2;
printf("%d - %d = %d\n",num1,num2,biyog);

int gon = num1 * num2;
printf("%d * %d = %d\n",num1,num2,gon);

int vag = num1 / num2;
printf("%d / %d = %d\n",num1,num2,vag);

int vagsesh = num1 % num2;
printf("%d %% %d = %d\n",num1,num2,vagsesh);

//Assignment operator
int fuelPrice = 700;
printf("%d\n",fuelPrice);
fuelPrice += 100;
printf("%d",fuelPrice);


return 0;
}
