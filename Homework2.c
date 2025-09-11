// ------------------------------------------------------------------------------------------
// Name: Ashley Otero
// Class: SET-151 C Programming #1
// Homework: 2 - Word Problems and Decision Statements
// ------------------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // ------------------------------------------------------------------------
    // Problem #1 - Floating Point
    // ------------------------------------------------------------------------
    double dblNumber = 0;

    printf("Problem 1\n");
    printf("Enter a floating point number: ");
    scanf_s("%lf", &dblNumber);

    printf("Decimal: %f\n", dblNumber);
    printf("Exponential: %E\n", dblNumber);
    printf("Confirmation\n\n");

    // ------------------------------------------------------------------------
    // Problem #2 - Age in Seconds
    // ------------------------------------------------------------------------
    double dblYears = 0, dblSeconds = 0;

    printf("Problem 2\n");
    printf("Enter your age in years? ");
    scanf_s("%lf", &dblYears);

    dblSeconds = dblYears * 365 * 24 * 60 * 60;

    printf("Your age in seconds is %.0f\n", dblSeconds);
    printf("Confirmation\n\n");

    // ------------------------------------------------------------------------
    // Problem #3 - Water Molecules
    // ------------------------------------------------------------------------
    double dblQuarts = 0, dblGrams = 0, dblMolecules = 0;

    printf("Problem 3\n");
    printf("Enter amount of water in quarts: ");
    scanf_s("%lf", &dblQuarts);

    dblGrams = dblQuarts * 950;
    dblMolecules = dblGrams / 3.0e-23;

    printf("Number of water molecules: %.2E\n", dblMolecules);
    printf("Confirmation\n\n");

    // ------------------------------------------------------------------------
    // Problem #4 - Largest Number
    // ------------------------------------------------------------------------
    int intA = 0, intB = 0, intC = 0, intD = 0, intMax = 0;

    printf("Problem 4\n");
    printf("Enter 4 integers: ");
    scanf_s("%d %d %d %d", &intA, &intB, &intC, &intD);

    intMax = intA;
    if (intB > intMax) intMax = intB;
    if (intC > intMax) intMax = intC;
    if (intD > intMax) intMax = intD;

    printf("Largest number is: %d\n", intMax);
    printf("Confirmation\n\n");

    // ------------------------------------------------------------------------
    // Problem #5 - Leap Year
    // ------------------------------------------------------------------------
    int intYear = 0;

    printf("Problem 5\n");
    printf("Enter a year: ");
    scanf_s("%d", &intYear);

    if (intYear <= 1500 || intYear >= 2200) {
        printf("Invalid Year\n");
    }
    else if ((intYear % 400 == 0) || (intYear % 4 == 0 && intYear % 100 != 0)) {
        printf("Yes, %d is a leap year\n", intYear);
    }
    else {
        printf("No, %d is not a leap year\n", intYear);
    }
    printf("Confirmation\n\n");

    // ------------------------------------------------------------------------
    // Problem #6 - Paycheck
    // ------------------------------------------------------------------------
    double dblRate = 0, dblHours = 0, dblGross = 0, dblTaxes = 0, dblNet = 0;
    double dblRemaining = 0;

    printf("Problem 6\n");
    printf("Enter hourly rate and hours worked: ");
    scanf_s("%lf %lf", &dblRate, &dblHours);

    if (dblRate > 0 && dblHours > 0) {
        dblGross = dblRate * dblHours;
        dblRemaining = dblGross;

        if (dblRemaining > 300) { dblTaxes += 300 * 0.15; dblRemaining -= 300; }
        else { dblTaxes += dblRemaining * 0.15; dblRemaining = 0; }

        if (dblRemaining > 150) { dblTaxes += 150 * 0.20; dblRemaining -= 150; }
        else { dblTaxes += dblRemaining * 0.20; dblRemaining = 0; }

        if (dblRemaining > 0) { dblTaxes += dblRemaining * 0.25; }

        dblNet = dblGross - dblTaxes;

        printf("Gross Pay: %.2f\n", dblGross);
        printf("Taxes: %.2f\n", dblTaxes);
        printf("Net Pay: %.2f\n", dblNet);
    }
    else {
        printf("Invalid input\n");
    }
    printf("Confirmation\n\n");

    system("pause");
    return 0;
}

