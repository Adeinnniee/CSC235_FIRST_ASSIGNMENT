#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



int main(){


    // 1. This program says hello world to your lecturer.
    printf("This program says hello world to your lecturer.");
    char lecturer_name[70];
    printf("\nWhat is the name of your lecturer? ");
    fgets(lecturer_name, 70, stdin);
    printf("Hello World!, %s", lecturer_name);
     



    // 2. This program accepts the names of 10 students.
    printf("\n\nThis program accepts the names of 10 students.");
    char student_names[10][70];
    printf("\n");
    for(int num = 1; num <= 10; num++){
        printf("Enter student %d name: ", num);
        fgets(student_names[num], 70, stdin);
    }
    
    


    // 3. This program counts from 1 to N (i.e to the number inputted by the user).
    printf("\n\nThis program counts from 1 to the chosen number inputted by you.");
    int chosen_number;
    printf("\nEnter your chosen number: ");
    scanf("%d", &chosen_number);
    printf("The count is:\n");
    for(int num_count = 1; num_count <= chosen_number; num_count++){
        printf("%d\n", num_count);
    }
    



    return 0;

}


