#include<stdio.h>
int square();
int triangle();
int upper_pyramid();
int lower_pyramid();
int diamond();
int butterfly();
int hourglass();
int heading(int n);

int main()
{
    printf("\t\t\t");
    heading(15);
    printf("\n");
    printf("\t\t\tPATTERN PRINTER\n");
    printf("\t\t\t");
    heading(15);
    printf("\n");
    while(1){
        int choice;
        printf("Enter the serial number of the pattern you want to print: \n");
        printf("1.Square\n");
        printf("2.Right Angled Triangle\n");
        printf("3.Upper Pyramid\n");
        printf("4.Lower Pyramid\n");
        printf("5.Diamond\n");
        printf("6.Hourglass\n");
        printf("7.Butterfly\n");
        printf("8.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            printf("\t\t\t");
            heading(6);
            printf("\n");
            printf("\t\t\tSQUARE\n");
            printf("\t\t\t");
            heading(6);
            printf("\n");
            square();
            break;
        case 2:
            printf("\t\t\t");
            heading(8);
            printf("\n");
            printf("\t\t\tTRIANGLE\n");
            printf("\t\t\t");
            heading(8);
            printf("\n");
            triangle();
            break;
        case 3:
            printf("\t\t\t");
            heading(13);
            printf("\n");
            printf("\t\t\tUPPER PYRAMID\n");
            printf("\t\t\t");
            heading(13);
            printf("\n");
            upper_pyramid();
            break;
        case 4:
            printf("\t\t\t");
            heading(13);
            printf("\n");
            printf("\t\t\tLOWER PYRAMID\n");
            printf("\t\t\t");
            heading(13);
            printf("\n");
            lower_pyramid();
            break;
        case 5:
            printf("\t\t\t");
            heading(7);
            printf("\n");
            printf("\t\t\tDIAMOND\n");
            printf("\t\t\t");
            heading(7);
            printf("\n");
            diamond();
            break;
        case 6:
            printf("\t\t\t");
            heading(9);
            printf("\n");
            printf("\t\t\tHOURGLASS\n");
            printf("\t\t\t");
            heading(9);
            printf("\n");
            hourglass();
            break;
        case 7:
            printf("\t\t\t");
            heading(9);
            printf("\n");
            printf("\t\t\tBUTTERFLY\n");
            printf("\t\t\t");
            heading(9);
            printf("\n");
            butterfly();
            break;
        case 8:
            printf("Thank You for using pattern printer. Hope you enjoyed it.");
            return 0;
        default:
            printf("Invalid Input. Please Try again.");
            break;
        }
        for(int i=0; i<60; i++){
            printf("-");
        }
        printf("\nNext Pattern\n");
    }
}

int heading(int n)
{
    for(int i = 0; i<n; i++){
        printf("=");
    }
    // printf("\n");
}
// Square
int square()
{
    int n;
    printf("Enter the size of side of the square: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        printf("\t\t\t");
        for(int j=0; j<n; j++){
            printf("* ");
        }
        printf("\n");
    }
}

// Traingle
int triangle()
{
    int n;
    printf("Enter the size of side of the Right Angled Triangle: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        printf("\t\t\t");
        for(int j=0; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
}

// Upper Pyramid
int upper_pyramid()
{
    int n;
    printf("Enter the size of Base of the Pyramid: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        printf("\t\t\t");
        for(int j=n; j>=i-1; j--){
            printf(" ");
        }
        for(int j=0; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
}

// Lower Pyramid
int lower_pyramid()
{
    int n;
    printf("Enter the size of Base of the Pyramid: ");
    scanf("%d", &n);
    for(int i=n-1; i>=0; i--){
        printf("\t\t\t");
        for(int j=n; j>=i-1; j--){
            printf(" ");
        }
        for(int j=0; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
}

// Diamond
int diamond()
{
    int n;
    printf("Enter the no of stars in the middle line: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        printf("\t\t    ");
        for(int j=n-1; j>=i-1; j--){
            printf(" ");
        }
        for(int j=0; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=n-1; i>=0; i--){
        printf("\t\t    ");
        for(int j=n-1; j>=i-1; j--){
            printf(" ");
        }
        for(int j=0; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
}

// Butterfly
int butterfly()
{
    int n;
    printf("Enter the max no of stars on one side of butterfly: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        printf("\t\t\t");
        for(int j=1; j<=i; j++){
            printf("*");
        }
        for(int j= 1; j<=(n-i) * 2; j++){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=n-1; i>=1; i--){
        printf("\t\t\t");
        for(int j=1; j<=i; j++){
            printf("*");
        }
        for(int j= 1; j<=(n-i) * 2; j++){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}

int hourglass()
{
    int n;
    printf("Enter the no of stars in the first line: ");
    scanf("%d", &n);
    for(int i=n-1; i>=0; i--){
        printf("\t\t    ");
        for(int j=n-1; j>=i-1; j--){
            printf(" ");
        }
        for(int j=0; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=0; i<n; i++){
        printf("\t\t    ");
        for(int j=n-1; j>=i-1; j--){
            printf(" ");
        }
        for(int j=0; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
}