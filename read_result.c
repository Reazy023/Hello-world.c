/*
Name:Sanchez Ochieng
Registration number:CT101/G/26450/25
Description:Read result

*/


#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[100];
    char regno[32];
    int totalMarks;  
} Student;

int main(void) {
    const char *filename = "results.dat";
    FILE *fp = fopen(filename, "rb");
    if (!fp) {
        perror("Unable to open results.dat");
        return 1;
    }

    Student s;
    size_t read;
    printf("Student results:\n");
    printf("----------------\n");
    int count = 0;
    while ((read = fread(&s, sizeof(Student), 1, fp)) == 1) {
        printf("Name: %s\n", s.name);
        printf("Reg No: %s\n", s.regno);
        printf("Total Marks: %d\n", s.totalMarks);
        printf("----------------\n");
        count++;
    }

    if (ferror(fp)) {
        perror("Error reading file");
        fclose(fp);
        return 1;
    }

    if (count == 0) {
        printf("No records found in %s\n", filename);
    }

    fclose(fp);
    return 0;
}
