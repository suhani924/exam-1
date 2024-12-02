#include <stdio.h>

int main() {
    int roll_no;
    char name[50];
    float marks[3], total = 0.0, percentage;
    char grade;

    
    printf("Enter Roll No: ");
    scanf("%d", &roll_no);
    printf("Enter Name: ");
    scanf("%s", name);

    
    for (int i = 0; i < 3; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }


    percentage = (total / 300) * 100;

    
    if (percentage >= 60) {
        grade = 'A';
    } else if (percentage >= 50) {
        grade = 'B';
    } else if (percentage >= 40) {
        grade = 'C';
    } else {
        grade = 'D';
    }

    
    printf("Roll No: %d\n", roll_no);
    printf("Name: %s\n", name);
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}

