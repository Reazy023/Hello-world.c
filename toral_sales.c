/*
Name:Sanchez Ochieng
Registration number:CT101/G/26450/25
Description:Read result

*/


#include <stdio.h>

int main(void) {
    const char *filename = "sales.txt";
    FILE *fp = fopen(filename, "r");
    if (!fp) {
        perror("Unable to open sales.txt");
        return 1;
    }

    double amount, total = 0.0;
    int items = 0;
    
    while (fscanf(fp, "%lf", &amount) == 1) {
        total += amount;
        items++;
    }

    if (ferror(fp)) {
        perror("Error reading sales file");
        fclose(fp);
        return 1;
    }

    printf("Transactions read: %d\n", items);
    printf("Total sales for the day: %.2f\n", total);

    if (fclose(fp) != 0) {
        perror("Error closing file");
        return 1;
    }

    return 0;
}
