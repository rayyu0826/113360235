#include <stdio.h>

int main() {
    float weight, height, bmi;
    printf("Please enter height(m): ");
    scanf_s("%f", &height);
    printf("Please enter weight(kg): ");
    scanf_s("%f", &weight);
    bmi = weight/ height/height;
    printf("Your BMI is: %.2f\n", bmi);

    if (bmi < 18.5) {
        printf("You are underweight.\n");
    }
    else if (bmi >= 18.5 && bmi <= 23.9) {
        printf("You have a normal weight.\n");
    }
    else if (bmi >= 24 && bmi <= 27.9) {
        printf("You are overweight.\n");
    }
    else {
        printf("You are obesity.\n");
    }

    return 0;
}