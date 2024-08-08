#include <stdio.h>

int binarySearchSalary(int salaries[], int beg, int end, int targetSalary) {
    int mid;

    if (end >= beg) {
        mid = (beg + end) / 2;

        if (salaries[mid] == targetSalary) {
            return mid;
        } else if (salaries[mid] < targetSalary) {
            return binarySearchSalary(salaries, mid + 1, end, targetSalary);
        } else {
            return binarySearchSalary(salaries, beg, mid - 1, targetSalary);
        }
    }
    return -1;
}

int main() {
    int salaries[] = {2000, 4000, 5000, 6000, 7000, 8000, 9000, 10000};
    int size = sizeof(salaries) / sizeof(salaries[0]);
    int targetSalary = 4000;
    int result = binarySearchSalary(salaries, 0, size - 1, targetSalary);

    if (result != -1)
        printf("likith's salary %d found at index %d\n", targetSalary, result);
    else
        printf("Salary %d not found in the array\n", targetSalary);

    return 0;
}