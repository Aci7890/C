/*
Вывод BMI
Если BMI ниже 18.5, вывод Underweight.
Если BMI выше 25, вывод Overweight.
Для всех остальных значений вывод Normal.
*/
#include stdio.h

int main() {
    your code goes here
        float BMI;
    scanf("%f", &BMI);
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


/*
* Условные выражения
Как мы видели в предыдущем уроке, мы можем проверять несколько условий с помощью выражений if-else-if.
Например, рассмотрим следующую программу, которая проверяет значение position и выводит соответствующую медаль:

#include <stdio.h>

int main() {
    int position = 2;
    
    if(position == 1) {
        printf("Gold");
    } else if(position == 2) {
        printf("Silver");
    } else if(position == 3) {
        printf("Bronze");
    }
    else {
        printf("No medal");
    }

    return 0;
}

Оператор switch может быть использован для проверки равенства со списком значений, вместо множественных операторов else if.
Каждый case имеет значение для сравнения. Когда значение переменной switch равно значению case, код внутри него выполняется, пока не будет достигнуто утверждение break.

#include <stdio.h>

int main() {
    int position = 2;

    switch(position) {
        case 1: //случай со значением  position =1
            printf("Gold");
            break;
        case 2: //случай со значением  position =2
            printf("Silver");
            break;
        case 3: /случай со значением  position =3
            printf("Bronze");
            break;
        default:
            printf("No medal");
    }

    return 0;
}

пример
switch (stars) {
  case 1:
    printf("*");
    break;
  case 2:
    printf("**");
    break;
  case 3:
    printf("***");
    break;
}

Если забыть break, после каждого условия, программа продолжит выполнять код в следующих командах case, даже если их значение не совпадает со значением переменной. Такое поведение называется fall-through. Обычно это происходит из-за ошибок, когда программист забывает добавить операторы break для каждого case.
*/

/*
* Задача
int x = 2;
switch(x) {
  case 1:
    x = 4;
  case 2:
    x = 8;
  case 3:
    x = 7;
    break;
  case 4:
    x = 3;
}

the value of `x` is initially set to `2`. The `switch` statement is used to evaluate the value of `x`. 1. `case 1:` - The value of `x` is compared to `1`, but it does not match, so the code following this case is not executed. 2. `case 2:` - The value of `x` matches `2`, so the code following this case is executed. - `x = 8;` - The value of `x` is updated to `8`. 3. `case 3:` - The value of `x` does not match `3`, but since there is no `break` statement after `case 2`, the code execution continues to the code under `case 3`. - `x = 7;` - The value of `x` is updated to `7`. - `break;` - The `break` statement is encountered, which causes the switch statement to terminate. Since there is no `break` statement after `case 2`, the code execution "falls through" to the code under `case 3`. This behavior allows multiple cases to execute consecutively if there is no `break` statement. In this case, both `case 2` and `case 3` will be executed. Therefore, after the execution of the provided code, the value

значение `x` изначально установлено равным `2`. Оператор `switch` используется для оценки значения `x`. 1. `case 1:` - Значение `x` сравнивается с `1`, но оно не совпадает, поэтому код, следующий за этим случаем, не выполняется. 2. `case 2:` - Значение `x` совпадает с `2`, поэтому код, следующий за этим случаем, выполняется. - `x = 8;` - Значение `x` обновляется до `8`. 3. `case 3:` - Значение `x` не совпадает с `3`, но поскольку после `case 2` нет оператора `break`, выполнение кода продолжается до кода под `case 3`. - `x = 7;` - Значение `x` обновляется до `7`. - `break;` - Обнаружен оператор `break`, что приводит к завершению оператора switch. Поскольку после `case 2` нет оператора `break`, выполнение кода "проваливается" в код под `case 3`. Такое поведение позволяет нескольким случаям выполняться последовательно, если нет оператора `break`. В этом случае будут выполнены как `case 2`, так и `case 3`. Поэтому после выполнения предоставленного кода значение
ответ 7
*/

/*
Есть default случай в конце оператора switch.
Он используется для выполнения кода, когда ни один из случаев не совпадает :

#include <stdio.h>
int main() {
    int position = 8;

    switch (position) {
    case 1:
        printf("Gold");
    case 2:
        printf("Silver");
    case 3:
        printf("Bronze");
    default:
        printf("No medal");
    }


    return 0;
}
Вывод No medal
Нет необходимости в break в случае default, так как это всегда последнее утверждение в switch.
*/

/*
switch(choice){
case 1:
  printf("Item 1");
  break;
  case 2:
  printf("Item 2");
  break;
  default:
  printf("Error");
}
*/

/*ПРАКТИЧЕСКОЕ УПРАЖНЕНИЕ
Управление в игре
Вы создаете игру, которая управляется с помощью клавиатуры.

Необходимо обработать следующие клавиши:
w для "Вверх"
s для "Вниз"
a для "Влево"
d для "Вправо"
Задача: Получите символ клавиши от входных данных и выведите соответствующее направление. 

Для любой другой клавиши выведите "Wrong".
Используйте оператор switch для обработки случаев.
Не забывайте, что значения char должны быть заключены в одинарные кавычки.

#include <stdio.h>

int main() {
    char dir;
    scanf("%c", &dir);

    switch(dir){
    case 'w':
    printf("Up");
    break;
    case 's':
    printf("Down");
    break;
    case 'a':
    printf("Left");
    break;
    case 'd':
    printf("Right");
    break;
    default:
    printf("Wrong");
    }
    return 0;
}

*/