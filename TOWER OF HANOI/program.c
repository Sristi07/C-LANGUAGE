#include <stdio.h>

// Recursive function to solve Tower of Hanoi
void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }
    towerOfHanoi(n - 1, source, destination, auxiliary); // Step 1
    printf("Move disk %d from %c to %c\n", n, source, destination); // Step 2
    towerOfHanoi(n - 1, auxiliary, source, destination); // Step 3
}

int main() {
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);

    printf("\nSequence of moves:\n");
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}
