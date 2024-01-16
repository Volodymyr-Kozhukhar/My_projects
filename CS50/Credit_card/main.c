#include <math.h>
#include <stdio.h>

int main()
{
    long number;
    do
    {
        printf("Enter card number: ");
        scanf("%li", &number);
    }
    while (number <= 0);
    int sum = 0;
    double first_digit = number / pow(10, 15);
    if (5 < first_digit && first_digit < 6)
        first_digit = 5;
    first_digit *= 2;
    if (first_digit > 10)
    {
        long temp = (first_digit);
        long temp1 = temp / 10;
        long temp2 = temp - 10;
        sum += (temp1 + temp2);
    }
    else if (first_digit == 10)
        sum++;
    else
        sum += first_digit;
    for (int i = 15; i > 0; i -= 2)
    {
        if (i != 15)
        {
            long temp = number;
            long temp1;
            long temp2 = 0;
            temp /= (double) pow(10, i);
            temp1 = temp;
            temp1 /= 10;
            temp1 *= 10;
            temp2 = (temp - temp1) * 2;
            if (temp2 > 10)
            {
                temp = temp2 / 10;
                temp1 = temp2 - 10;
                temp2 = temp + temp1;
            }
            if (temp2 == 10)
                temp2 = 1;
            sum += temp2;
        }
    }
    for (int i = 14; i >= 0; i -= 2)
    {

        long temp = number;
        long temp1;
        temp /= (double) pow(10, i);
        temp1 = temp;
        temp1 /= 10;
        temp1 *= 10;
        sum += (temp - temp1);
    }
    if (sum % 10 == 0)
    {
        if (5100000000000000 <= number && number < 5600000000000000)
            printf("MASTERCARD\n");
        else if ((4000000000000000 <= number && number < 5000000000000000) || (4000000000000 <= number && number < 5000000000000))
            printf("VISA\n");
        else if ((340000000000000 <= number && number < 350000000000000) || (370000000000000 <= number && number < 380000000000000))
            printf("AMEX\n");
        else
            printf("INVALID\n");
    }
    else
        printf("INVALID\n");
}
