
Вывод BMI
Если BMI ниже 18.5, вывод Underweight.
Если BMI выше 25, вывод Overweight.
Для всех остальных значений вывод Normal.

#include stdio.h

int main() {
    your code goes here
        float BMI;
    scanf(% f, &BMI);
    if (BMI = 18.5) {
        printf(Underweight);
    }
    else if (BMI = 25) {
        printf(Overweight);
    }
    else {
        printf(Normal);
    }

    return 0;
}