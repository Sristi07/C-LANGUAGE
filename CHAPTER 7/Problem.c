// 1. addition of a number to a pointer.
// 2. subtraction of a number from a pointer
// 3. subtraction of one pointer from another
// 4. comparison of two pointer variable.
// Try these operations on another variable by creating pointers in a separate program.
// Demonstrate all the four operations.

#include <stdio.h>

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};
    int *ptr1 = &numbers[0]; // Points to 10
    int *ptr2 = &numbers[2]; // Points to 30

    // 1. Adding a number to a pointer
    int *addPtr = ptr1 + 2; // Now points to 30
    printf("After addition: %p, Value: %d\n", (void *)addPtr, *addPtr);

    // 2. Subtracting a number from a pointer
    int *subPtr = ptr1 + 4; // Points to 50
    subPtr = subPtr - 3;    // Moves to 20
    printf("After subtraction: %p, Value: %d\n", (void *)subPtr, *subPtr);

    // 3. Subtracting one pointer from another
    int diff = ptr2 - ptr1; // Difference in elements (2)
    printf("Pointer difference: %d\n", diff);

    // 4. Comparing two pointers
    if (ptr1 < ptr2)
    {
        printf("ptr1 is before ptr2\n");
    }
    else if (ptr1 > ptr2)
    {
        printf("ptr1 is after ptr2\n");
    }
    else
    {
        printf("ptr1 and ptr2 are the same\n");
    }

    return 0;
}
