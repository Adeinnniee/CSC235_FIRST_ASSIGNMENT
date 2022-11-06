#include <stdio.h>
#include <stdlib.h>
#include <string.h>       
#include <math.h>


int main(){


   // 4. This program reverses a sentence.
    printf("\n\nThis program reverses a sentence inputted by the user.");
    char user_chosen_sentence[150];
    printf("\nType in the sentence you want to reverse: ");
    fgets(user_chosen_sentence, 150, stdin);
    int sentence_length = strlen(user_chosen_sentence);
    printf("The reverse sentence is: ");
    for(int reverse_index = sentence_length ; reverse_index >= 0; reverse_index--){
        printf("%c", user_chosen_sentence[reverse_index]);
    }
    

    

    // 5. This program solves a simple quadratic equation.
    printf("\n\nThis program solves a simple quadratic equation.");
    double coefficient_a;
    double coefficient_b;
    double constant_c;
    printf("\nEnter the coefficient of x square: ");
    scanf("%lf", &coefficient_a);
    printf("Enter the coefficient of x: ");
    scanf("%lf", &coefficient_b);
    printf("Enter the constant c: ");
    scanf("%lf", &constant_c);
    double determinant = (pow(coefficient_b, 2)) - ( 4.0 * coefficient_a * constant_c);
    if(determinant < 0){
        double real_root_part = (-coefficient_b) / (2 * coefficient_a);
        double imaginary_root_part = (sqrt(-determinant)) / (2 * coefficient_a);
        printf("The roots of the quadratic equation are %lf + %lfi and %lf - %lfi.", real_root_part, imaginary_root_part, real_root_part, imaginary_root_part);
    } else{
        double root_1 = ((-coefficient_b) + (sqrt(determinant))) / (2.0 * coefficient_a);
        double root_2 = ((-coefficient_b) - (sqrt(determinant))) / (2.0 * coefficient_a);
        printf("The roots of the quadratic equation are %lf and %lf.", root_1, root_2);
    }





    return 0;
}



