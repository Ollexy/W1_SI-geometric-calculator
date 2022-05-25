#include <stdio.h>
#include <string.h>
#include <math.h>

//outputing menu
void menu();
//outputing area and perimeter
void areaPerimeter();

int main()
{
    char choose[30];

    printf("On what basis do you want to make calculations?\n\n");
    printf("1. lenghts\n");
    printf("2. points\n\n");
    scanf_s("%s", choose, 20);

    unsigned int height, radius, a, b, c, d;
    double perimeter, field;
    const double pi = 3.14;

    if (strcmp(choose, "lenghts") == 0)
    {
        menu();

        //choosing variable
        scanf_s("%s", choose, 20);

        //checking which variable were choosen
        //calculating circle
        if (strcmp(choose, "circle") == 0)
        {
            printf("Radius: ");
            scanf_s("%d", &radius);

            //circle field and perimeter
            field = pi * radius * radius;
            perimeter = 2 * pi * radius;
            areaPerimeter(perimeter, field);
        }
        //calculating triangle
        else if (strcmp(choose, "triangle") == 0)
        {
            printf("Height: ");
            scanf_s("%d", &height);
            printf("Base: ");
            scanf_s("%d", &a);
            printf("B side: ");
            scanf_s("%d", &b);
            printf("C side: ");
            scanf_s("%d", &c);

            //triangle area and perimeter
            field = a * height / 2;
            perimeter = a + b + c;

            areaPerimeter(perimeter, field);
        }
        //calculating rectangle
        else if (strcmp(choose, "rectangle") == 0)
        {
            printf("Side A: ");
            scanf_s("%d", &a);
            printf("Side B: ");
            scanf_s("%d", &b);

            //rectangle area and perimeter
            field = a * b;
            perimeter = 2 * a + 2 * b;

            areaPerimeter(perimeter, field);

        }
        //calculating trapeze
        else if (strcmp(choose, "trapeze") == 0)
        {
            printf("Height: ");
            scanf_s("%d", &height);
            printf("Side A: ");
            scanf_s("%d", &a);
            printf("Side B: ");
            scanf_s("%d", &b);
            printf("Side C: ");
            scanf_s("%d", &c);
            printf("Side D: ");
            scanf_s("%d", &d);

            //trapeze area
            field = (a + b) * height / 2;
            perimeter = a + b + c + d;

            areaPerimeter(perimeter, field);
        }
        //calculating square
        else if (strcmp(choose, "square") == 0)
        {
            printf("Side A: ");
            scanf_s("%d", &a);

            //square area and area
            field = a * a;
            perimeter = a * 4;

            areaPerimeter(perimeter, field);
        }
    }
    else if (strcmp(choose, "points") == 0)
    {
        menu();
        scanf_s("%s", choose, 20);

        // points variables
        int x1, x2, x3, x4, y1, y2, y3, y4;

        if (strcmp(choose, "circle") == 0)
        {
            printf("x1: ");
            scanf_s("%d", &x1);
            printf("y1: ");
            scanf_s("%d", &y1);
            printf("x2: ");
            scanf_s("%d", &x2);
            printf("y2: ");
            scanf_s("%d", &y2);

            //distance formula
            radius = pow(pow((x2 - x1), 2) + pow((y2 - y1), 2), .5);
            field = 3.141 * (pow(radius, 2));
            perimeter = 2 * 3.141 * radius;

            areaPerimeter(perimeter, field);
         }
        else if (strcmp(choose, "triangle") == 0)
        {
            printf("x1: ");
            scanf_s("%d", &x1);
            printf("y1: ");
            scanf_s("%d", &y1);
            printf("x2: ");
            scanf_s("%d", &x2);
            printf("y2: ");
            scanf_s("%d", &y2);
            printf("x3: ");
            scanf_s("%d", &x3);
            printf("y3: ");
            scanf_s("%d", &y3);

            //distance formula
            a = pow(pow((x2 - x1), 2) + pow((y2 - y1), 2), 0.5);
            b = pow(pow((x3 - x2), 2) + pow((y3 - y2), 2), 0.5);
            c = pow(pow((x3 - x1), 2) + pow((y3 - y1), 2), 0.5);
            perimeter = a + b + c;
            field = 0.25 * pow(pow(pow(a, 2) + pow(b, 2) + pow(c, 2), 2) - 2 * (pow(a, 4) + pow(b, 4) + pow(c, 4)), 0.5); //calculating field by using heron formula

            areaPerimeter(perimeter, field);
        }
        else if (strcmp(choose, "rectangle") == 0)
        { 
            printf("x1: ");
            scanf_s("%d", &x1);
            printf("y1: ");
            scanf_s("%d", &y1);
            printf("x2: ");
            scanf_s("%d", &x2);
            printf("y2: ");
            scanf_s("%d", &y2);
            printf("x3: ");
            scanf_s("%d", &x3);
            printf("y3: ");
            scanf_s("%d", &y3);
            printf("x4: ");
            scanf_s("%d", &x4);
            printf("y4: ");
            scanf_s("%d", &y4);

            //distance formula
            a = pow(pow((x2 - x1), 2) + pow((y2 - y1), 2), .5);
            b = pow(pow((x3 - x2), 2) + pow((y3 - y1), 2), .5);
            field = a * b;
            perimeter = 2 * a + 2 * b;

            areaPerimeter(perimeter, field);
        }
        else if (strcmp(choose, "trapeze") == 0)
        {
            printf("x1: ");
            scanf_s("%d", &x1);
            printf("y1: ");
            scanf_s("%d", &y1);
            printf("x2: ");
            scanf_s("%d", &x2);
            printf("y2: ");
            scanf_s("%d", &y2);
            printf("x3: ");
            scanf_s("%d", &x3);
            printf("y3: ");
            scanf_s("%d", &y3);
            printf("x4: ");
            scanf_s("%d", &x4);
            printf("y4: ");
            scanf_s("%d", &y4);

            a = pow(pow((x2 - x1), 2) + pow((y2 - y1), 2), .5);
            b = pow(pow((x3 - x2), 2) + pow((y3 - y2), 2), .5);
            c = pow(pow((x4 - x3), 2) + pow((y4 - y3), 2), 0.5);
            d = pow(pow((x4 - x1), 2) + pow((y4 - y1), 2), .5);
            height = 
            perimeter = a + b + c + d;
            field = (a + b) * height / 2;

            areaPerimeter(perimeter, field);
        }
        if (strcmp(choose, "square") == 0)
        {
            printf("x1: ");
            scanf_s("%d", &x1);
            printf("y1: ");
            scanf_s("%d", &y1);
            printf("x2: ");
            scanf_s("%d", &x2);
            printf("y2: ");
            scanf_s("%d", &y2);

            //distance formula
            a = pow(pow((x2 - x1), 2) + pow((y2 - y1), 2), .5);
            field = 4 * a;
            perimeter = a * a;

            areaPerimeter(perimeter, field);
        }
    }
    return 0;
}

void menu()
{
    printf("Choose figure\n");
    printf("---------------\n");
    printf("1. circle\n");
    printf("2. triangle\n");
    printf("3. rectangle\n");
    printf("4. trapeze\n");
    printf("5. square\n\n");
}
void areaPerimeter(double perimeter, double field)
{
    printf("Perimeter = %g\n", perimeter);
    printf("Field = %g\n", field);
}
