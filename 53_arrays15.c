#include <stdio.h>

#define STUDENTS 3
#define EXAMS 4

int main()
{
    int studentGrades[STUDENTS][EXAMS] =
                            { {77, 68, 86, 73},
                              {96, 87, 89, 78},
                              {70, 90, 86, 81},
                            };
    int low, high, total;
    float average;
    int i, j;
    
    printf("The array is:\n");
    printf("\t\t\t[0] \t[1] \t[2] \t[3]");
    
    for(i = 0; i < STUDENTS; i++)
    {
        printf("\nstudentGrades[%d]", i);
        
        for(j = 0; j < EXAMS; j++)
            printf("\t%d", studentGrades[i][j]);
    }
    
    low = 100;
    
    for(i = 0; i < STUDENTS; i++)
    {
        for(j = 0; j < EXAMS; j++)
        {
            if(studentGrades[i][j] < low)
                low = studentGrades[i][j];
        }
    }
    
    printf("\n\nLowest grade: %d", low);
    
    high = 0;
    
    for(i = 0; i < STUDENTS; i++)
    {
        for(j = 0; j < EXAMS; j++)
        {
            if(studentGrades[i][j] > high)
                high = studentGrades[i][j];
        }
    }
    
    printf("\nHighest grade: %d", high);
    
    for(i = 0; i < STUDENTS; i++)
    {
        total = 0;
        
        for(j = 0; j < EXAMS; j++)
            total = total + studentGrades[i][j];
        
        average = (float)total / EXAMS;
        
        printf("\nThe average grade for student %d is %f", i, average);
    }
    
    return 0;
}
