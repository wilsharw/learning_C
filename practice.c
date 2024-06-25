//program to calculate the grade//
#include<stdio.h>
int main (void)

{
    int number_of_grades, i, grade, failing_count,grade_total;
    float average;

    failing_count = 0;
    average = 0;
    grade_total = 0;

    printf("How many grades will you be entering:   \n");
    scanf("%i", &number_of_grades);

    for (i = 1; i <= number_of_grades; ++i)

        {
        printf("Enter the grade #%i:  \n", i);
        scanf("%i", &grade);
        grade_total = grade_total + grade;
        
        if(grade<65)
            ++failing_count;

        average = (float)grade_total / number_of_grades;
        }
        printf("The average of the grades is :%f\n", average);
        printf("The number of failing test grades are:%i\n", failing_count);

        return 0;
}
