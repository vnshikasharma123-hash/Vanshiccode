#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int roll_no;
    char mobile_no[15];
    float CGPA;
    char DoB[15];
    char course[30];
    int year;
} Student;

Student inputStudent() {
    Student s;
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);
    printf("Enter mobile number: ");
    scanf("%s", s.mobile_no);
    printf("Enter CGPA: ");
    scanf("%f", &s.CGPA);
    printf("Enter Date of Birth (dd-mm-yyyy): ");
    scanf("%s", s.DoB);
    printf("Enter course: ");
    scanf("%s", s.course);
    printf("Enter year: ");
    scanf("%d", &s.year);
    return s;
}

void displayStudent(Student s) {
    printf("\n--- Student Information ---\n");
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Mobile No: %s\n", s.mobile_no);
    printf("CGPA: %.2f\n", s.CGPA);
    printf("Date of Birth: %s\n", s.DoB);
    printf("Course: %s\n", s.course);
    printf("Year: %d\n", s.year);
}

Student findTopper(Student arr[], int n) {
    Student topper = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i].CGPA > topper.CGPA) {
            topper = arr[i];
        }
    }
    return topper;
}

int main() {
    Student students[10];
    for(int i = 0; i < 10; i++) {
        printf("\nEnter details of student %d:\n", i+1);
        students[i] = inputStudent();
    }

    Student topper = findTopper(students, 10);
    printf("\nTopper of the class:\n");
    displayStudent(topper);

    return 0;
}
