#include <stdio.h>

#include <math.h>

int main()

{

    int number,count=0,sum = 0, rem = 0, cube = 0,i, temp;

    scanf("%d", &number);

    temp = number;

    while (number != 0)

    {

        rem = number % 10;

        cube = pow(rem, 3);

        sum = sum + cube;

        number = number / 10;

    }
    

    if (sum == temp)

        printf ("The given no  %d is armstrong no",temp);

    else

        printf ("The given no %d is not a armstrong no",temp);
    return 0;

}
