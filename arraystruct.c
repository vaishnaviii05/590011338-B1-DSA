#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

// Define the Student structure
struct Student {
    char name[100];
    int age;
    float marks;
};

// Function prototypes
void inputStudentDetails(struct Student students[], int n);
void displayStudentDetails(struct Student students[], int n);
void sortStudentsByMarks(struct Student students[], int n);
void displayHighestMarksStudent(struct Student students[], int n);

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[MAX_STUDENTS];

    // Input details of all students
    inputStudentDetails(students, n);

    // Display details of all students
    printf("\nDetails of all students:\n");
    displayStudentDetails(students, n);

    // Sort students by marks in descending order
    sortStudentsByMarks(students, n);
    printf("\nStudents sorted by marks (descending):\n");
    displayStudentDetails(students, n);

    // Find and display the student with the highest marks
    printf("\nStudent with the highest marks:\n");
    displayHighestMarksStudent(students, n);

    return 0;
}

// Function to input student details
void inputStudentDetails(struct Student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Name: ");
        getchar();
        scanf("%[^\n]", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
}

// Function to display student details
void displayStudentDetails(struct Student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Age: %d, Marks: %.2f\n", students[i].name, students[i].age, students[i].marks);
    }
}

// Function to sort students by marks in descending order
void sortStudentsByMarks(struct Student students[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (students[i].marks < students[j].marks) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

// Function to display the student with the highest marks
void displayHighestMarksStudent(struct Student students[], int n) {
    struct Student *topStudent = &students[0];
    for (int i = 1; i < n; i++) {
        if (students[i].marks > topStudent->marks) {
            topStudent = &students[i];
        }
    }
    printf("Name: %s, Age: %d, Marks: %.2f\n", topStudent->name, topStudent->age, topStudent->marks);
}
