/*--------------------------------------------------------------
 *  Documentation Section
 *  Program: Rectangle Area and Perimeter
 *  Description: This program calculates and displays the area 
 *               and perimeter of a rectangle using the base 
 *               and height entered by the user.
 *  Author: Andres Joab Pina Zamora
 *  Date: 10/10/2025
 *--------------------------------------------------------------*/

#include <stdio.h>  // Link Section: standard I/O header for printf and scanf

// Definition Section: define variables, constants, and functions if needed

int main()  // Main Function Section
{
    int a, b, area, per;  // Declaration Section: variables for base, height, area, and perimeter

    // Input Section: ask the user for base and height
    printf("Enter base and height of the rectangle: ");
    scanf("%d %d", &a, &b);

    // Processing Section: compute area and perimeter
    area = a * b;           // area = base × height
    per = 2 * (a + b);      // perimeter = 2 × (base + height)

    // Output Section: display the results
    printf("Area: %d\n", area);
    printf("Perimeter: %d\n", per);

    return 0;  // Return Section: end of program
}

