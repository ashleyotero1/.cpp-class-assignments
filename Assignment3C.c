// ------------------------------------------------------------------------------------------
// Name: Ashley Otero
// Class: SET-151 C Programming #1
// Homework 3 - Loops
// ------------------------------------------------------------------------------------------

#include <stdio.h>
#include <math.h>    

int main(void)
{
    // ------------------------------------------------------------------------
    // Variable Declarations
    // ------------------------------------------------------------------------
    int intIndex = 0;
    int intTotal2 = 0, intTotal3 = 0, intTotal4 = 0, intTotal5 = 0, intTotal8 = 0;
    int intNum6 = 0;
    int intScore = 0, intCount = 0, intSum = 0;
    char chrLetter;

    // ------------------------------------------------------------------------
    // Problem #1 - Print 1 to 100
    // ------------------------------------------------------------------------
    printf("Problem #1\n");
    for (intIndex = 1; intIndex <= 100; intIndex++) {
        printf("%d ", intIndex);
    }
    printf("\nConfirmation\n\n");

    // ------------------------------------------------------------------------
    // Problem #2 - Sum 1 to 100
    // ------------------------------------------------------------------------
    printf("Problem #2\n");
    intTotal2 = 0;
    for (intIndex = 1; intIndex <= 100; intIndex++) {
        intTotal2 += intIndex;
    }
    printf("Total (1 to 100) = %d\n", intTotal2);
    printf("Confirmation\n\n");

    // ------------------------------------------------------------------------
    // Problem #3 - Sum odd 7 to 313
    // ------------------------------------------------------------------------
    printf("Problem #3\n");
    intTotal3 = 0;
    for (intIndex = 7; intIndex <= 313; intIndex += 2) {
        intTotal3 += intIndex;
    }
    printf("Total (odds 7 to 313) = %d\n", intTotal3);
    printf("Confirmation\n\n");

    // ------------------------------------------------------------------------
    // Problem #4 - Sum even -2 to -146
    // ------------------------------------------------------------------------
    printf("Problem #4\n");
    intTotal4 = 0;
    for (intIndex = -2; intIndex >= -146; intIndex -= 2) {
        intTotal4 += intIndex;
    }
    printf("Total (evens -2 to -146) = %d\n", intTotal4);
    printf("Confirmation\n\n");

   // ------------------------------------------------------------------------
   // Problem #5 - Every 3rd number from 2000 to -60
   // ------------------------------------------------------------------------
    printf("Problem #5\n");
    intTotal5 = 0;
    for (intIndex = 2000; intIndex >= -60; intIndex -= 3) {
        intTotal5 += intIndex;
    }
    printf("Total (every 3rd from 2000 to -60) = %d\n", intTotal5);
    printf("Confirmation\n\n");


    // ------------------------------------------------------------------------
    // Problem #6 - Square root of valid input
    // ------------------------------------------------------------------------
    printf("Problem #6\n");
    do {
        printf("Enter a number (1 through 100): ");
        (void)scanf_s("%d", &intNum6);
    } while (intNum6 < 1 || intNum6 > 100);

    printf("Square root of %d = %.2f\n", intNum6, sqrt(intNum6));
    printf("Confirmation\n\n");

    // ------------------------------------------------------------------------
    // Problem #7 - Test scores average and grade
    // ------------------------------------------------------------------------
    printf("Problem #7\n");
    intSum = 0;
    intCount = 0;
    while (1) {
        printf("Enter a test score (0 through 100, -1 to end): ");
        (void)scanf_s("%d", &intScore);
        if (intScore == -1) break;
        if (intScore >= 0 && intScore <= 100) {
            intSum += intScore;
            intCount++;
        }
    }
    if (intCount > 0) {
        double dblAverage = (double)intSum / intCount;
        char chrGrade;
        if (dblAverage >= 90) chrGrade = 'A';
        else if (dblAverage >= 80) chrGrade = 'B';
        else if (dblAverage >= 70) chrGrade = 'C';
        else if (dblAverage >= 60) chrGrade = 'D';
        else chrGrade = 'F';

        printf("The average was %.2f and the letter grade is %c\n", dblAverage, chrGrade);
    }
    printf("Confirmation\n\n");

    // ------------------------------------------------------------------------
    // Problem #8 - Sum multiples of 3 or 5 below 1000
    // ------------------------------------------------------------------------
    printf("Problem #8\n");
    intTotal8 = 0;
    for (intIndex = 1; intIndex < 1000; intIndex++) {
        if (intIndex % 3 == 0 || intIndex % 5 == 0) {
            intTotal8 += intIndex;
        }
    }
    printf("Total (multiples of 3 or 5 below 1000) = %d\n", intTotal8);
    printf("Confirmation\n\n");

    // ------------------------------------------------------------------------
    // Problem #9 - Uppercase to lowercase
    // ------------------------------------------------------------------------
    printf("Problem #9\n");
    do {
        printf("Enter an uppercase letter: ");
        (void)scanf_s(" %c", &chrLetter, 1);   

        if (chrLetter >= 'A' && chrLetter <= 'Z') {
            printf("Here is the letter in uppercase %c and lowercase %c\n",
                chrLetter, chrLetter + 32);
        }
    } while (chrLetter >= 'A' && chrLetter <= 'Z');

    printf("Confirmation\n\n");

    return 0;
}

