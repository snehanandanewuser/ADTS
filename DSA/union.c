#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks[3];
};

int main() {
    int n;  // Variable to store the number of students

    // Ask the user for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Declare an array of structs to hold the details of n students
    struct Student students[n];

    // Input details for each student
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i+1);
        printf("Enter Student ID: ");
        scanf("%d", &students[i].id);

        printf("Enter Student Name: ");
        scanf(" %[^\n]s", students[i].name);  // To read string with spaces

        printf("Enter marks for 3 subjects: ");
        for (int j = 0; j < 3; j++) {
            scanf("%f", &students[i].marks[j]);
        }
    }

    // Display details for each student
    for (int i = 0; i < n; i++) {
        float total = 0;
        printf("\nStudent %d details:\n", i+1);
        printf("Student ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Marks: ");
        for (int j = 0; j < 3; j++) {
            printf("%.2f ", students[i].marks[j]);
            total += students[i].marks[j];
        }
        printf("\nAverage Marks: %.2f\n", total / 3);
    }

    return 0;
}
