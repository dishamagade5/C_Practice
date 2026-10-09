/*
Electricity Bill Calculator ⚡

Take the number of units consumed and calculate the bill using these slabs:

Units	                    Rate
First 100	             ₹5/unit
Next 100 (101–200)	     ₹7/unit
Above 200	             ₹10/unit

For example:

Enter units: 250

First 100  → 100 × 5  = ₹500
Next 100   → 100 × 7  = ₹700
Remaining  → 50 × 10  = ₹500

Total Bill = ₹1700
*/
#include <stdio.h>

int main() 
{

    int units;
    float bill;

    printf("Enter units: ");
    scanf("%d", &units);

    if (units <= 100) 
    {
        bill = units * 5;
    }
    else if (units <= 200) 
    {
        bill = (100 * 5) + ((units - 100) * 7);
    }
    else 
    {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    }

    printf("Total Bill = %.2f\n", bill);

    return 0;
}