//--------------------------------------------------------------
// Организация: Сообщество самозанятых программистов
// Проект: Простая математика
// Версия: alfa_0.0
// Описание: программа для решения задач из высшей математики
// Авторы:
//    Аноним Анонимус
//    Аноним Аналимус
//    Аноним Ананисус
//--------------------------------------------------------------

#include "headers.h"

//long int matrix_1[3][3];
//int width_1, height_1;



void matrix_addition() {//.Сложение матриц

}

void matrix_subtraction() {//Вычитание матриц

}

void matrix_multiplication() {//Умножение матриц

}

void transposing_matrices() {//Транспонирование матриц

}

void inverse_matrix() {//Обратная матрица

}

void acs_equations() {//Уравнения СЛАУ

}

int main(){
    int otvet=0,repeat=0; // переменная для сохранение ответа
    char nomer; //В данной переменной сохрается номер выбранной пользователем число, и потом прогоняется по switch...
    setlocale(LC_ALL, "Russian");
    printf("%s%s", main_prefix, "Вас приветствует калькулятор! \nВыберите действие, которое вы хотите провести с матрицей. (Напишите цифру без точки)\n");
    puts("1.Сложение матриц");
    puts("2.Вычитание матриц");
    puts("3.Умножение матриц");
    puts("4.Транспонирование матриц");
    puts("5.Обратная матрица");
    puts("6.Уравнения СЛАУ");
    scanf("%c", &nomer);
        switch (nomer) {
        case '1':
            matrix_addition();
            printf("%s", "1");
            break;
        case '2':
            matrix_subtraction();
            printf("%s", "");
            break;
        case '3':
            matrix_multiplication();
            printf("%s", "");
            break;
        case '4':
            transposing_matrices();
            printf("%s", "");
            break;
        case '5':
            inverse_matrix();
            printf("%s", "");
            break;
        case '6':
            printf("%s", "");
            break;
        case '7':
            acs_equations();
            break;
        default:
            printf("%s", "Ошибка.Введите заново цифру.");
            break;
        }
       
    }

