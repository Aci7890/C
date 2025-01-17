/*
����� BMI
���� BMI ���� 18.5, ����� Underweight.
���� BMI ���� 25, ����� Overweight.
��� ���� ��������� �������� ����� Normal.
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
* �������� ���������
��� �� ������ � ���������� �����, �� ����� ��������� ��������� ������� � ������� ��������� if-else-if.
��������, ���������� ��������� ���������, ������� ��������� �������� position � ������� ��������������� ������:

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

�������� switch ����� ���� ����������� ��� �������� ��������� �� ������� ��������, ������ ������������� ���������� else if.
������ case ����� �������� ��� ���������. ����� �������� ���������� switch ����� �������� case, ��� ������ ���� �����������, ���� �� ����� ���������� ����������� break.

#include <stdio.h>

int main() {
    int position = 2;

    switch(position) {
        case 1: //������ �� ���������  position =1
            printf("Gold");
            break;
        case 2: //������ �� ���������  position =2
            printf("Silver");
            break;
        case 3: /������ �� ���������  position =3
            printf("Bronze");
            break;
        default:
            printf("No medal");
    }

    return 0;
}

������
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

���� ������ break, ����� ������� �������, ��������� ��������� ��������� ��� � ��������� �������� case, ���� ���� �� �������� �� ��������� �� ��������� ����������. ����� ��������� ���������� fall-through. ������ ��� ���������� ��-�� ������, ����� ����������� �������� �������� ��������� break ��� ������� case.
*/

/*
* ������
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

�������� `x` ���������� ����������� ������ `2`. �������� `switch` ������������ ��� ������ �������� `x`. 1. `case 1:` - �������� `x` ������������ � `1`, �� ��� �� ���������, ������� ���, ��������� �� ���� �������, �� �����������. 2. `case 2:` - �������� `x` ��������� � `2`, ������� ���, ��������� �� ���� �������, �����������. - `x = 8;` - �������� `x` ����������� �� `8`. 3. `case 3:` - �������� `x` �� ��������� � `3`, �� ��������� ����� `case 2` ��� ��������� `break`, ���������� ���� ������������ �� ���� ��� `case 3`. - `x = 7;` - �������� `x` ����������� �� `7`. - `break;` - ��������� �������� `break`, ��� �������� � ���������� ��������� switch. ��������� ����� `case 2` ��� ��������� `break`, ���������� ���� "�������������" � ��� ��� `case 3`. ����� ��������� ��������� ���������� ������� ����������� ���������������, ���� ��� ��������� `break`. � ���� ������ ����� ��������� ��� `case 2`, ��� � `case 3`. ������� ����� ���������� ���������������� ���� ��������
����� 7
*/

/*
���� default ������ � ����� ��������� switch.
�� ������������ ��� ���������� ����, ����� �� ���� �� ������� �� ��������� :

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
����� No medal
��� ������������� � break � ������ default, ��� ��� ��� ������ ��������� ����������� � switch.
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

/*������������ ����������
���������� � ����
�� �������� ����, ������� ����������� � ������� ����������.

���������� ���������� ��������� �������:
w ��� "�����"
s ��� "����"
a ��� "�����"
d ��� "������"
������: �������� ������ ������� �� ������� ������ � �������� ��������������� �����������. 

��� ����� ������ ������� �������� "Wrong".
����������� �������� switch ��� ��������� �������.
�� ���������, ��� �������� char ������ ���� ��������� � ��������� �������.

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