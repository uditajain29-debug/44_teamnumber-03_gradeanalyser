#include <stdio.h>
// here we have defined the structure to input the student details.
struct Student {
    char name[50];
    int marks[5];
    int total;
    float percentage;
    char grade[3];
    int pass;
};
// main code body strts after function
int main() {
    struct Student s[100];
    int n, topper = 0;
    float classaverage = 0;
    int passcount = 0;
float passpercentage;

    printf("Enter number of students: ");
    scanf("%d", &n);
//nested loops used to enter student name and marks simultaneously.
    for(int i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", s[i].name);
// here we have initilised total as 0 and stored pass as 1 i.e. true.
        s[i].total = 0;
        s[i].pass = 1;

        printf("Enter marks in 5 subjects: ");

        for(int j = 0; j < 5; j++) {
            scanf("%d", &s[i].marks[j]);
            s[i].total += s[i].marks[j];

            if(s[i].marks[j] < 40)
                s[i].pass = 0;
        }

        s[i].percentage = s[i].total / 5.0;
// here we have used sprint to directly store the information into the string instead of having it displayed every time.
        if(!s[i].pass)
            sprintf(s[i].grade, "F");
        else if(s[i].percentage >= 90)
            sprintf(s[i].grade, "A+");
        else if(s[i].percentage >= 80)
            sprintf(s[i].grade, "A");
        else if(s[i].percentage >= 70)
            sprintf(s[i].grade, "B");
        else if(s[i].percentage >= 60)
            sprintf(s[i].grade, "C");
        else if(s[i].percentage >= 50)
            sprintf(s[i].grade, "D");
        else
            sprintf(s[i].grade, "E");

        classaverage += s[i].percentage;

        if(s[i].total > s[topper].total)
            topper = i;
            if(s[i].pass)
               passcount++;
    }
passpercentage = (passcount * 100.0) / n;
    classaverage /= n;
// here is the full student summary for the analyser.
    printf("\n--- STUDENT RESULT SUMMARY ---\n");

    for(int i = 0; i < n; i++) {
        printf("\nName: %s", s[i].name);
        printf("\nTotal: %d/500", s[i].total);
        printf("\nPercentage: %.2f%%", s[i].percentage);
        printf("\nGrade: %s", s[i].grade);
        printf("\nStatus: %s\n", s[i].pass ? "PASS" : "FAIL");
    }

    printf("\n--- CLASS PERFORMANCE REPORT ---\n");
    printf("Passed Students: %d\n", passcount);
printf("Failed Students: %d\n", n - passcount);
printf("Pass Percentage: %.2f%%\n", passpercentage);
    printf("Class Average: %.2f%%\n", classaverage);
    printf("Class Topper: %s\n", s[topper].name);
    printf("Topper Percentage: %.2f%%\n", s[topper].percentage);

    return 0;
}
