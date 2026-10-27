#include <iostream>

using namespace std;

int main() {

    // Виведення назви першого завдання
    cout << "Begin 7: Circle Parameters" << endl;

    // Створюємо змінні типу int для цілих чисел
    int R;
    const int PI = 3; // Для цілих чисел округляємо Пі до 3 за правилами цілочисельної арифметики

    cout << "Enter circle radius R: ";
    cin >> R;

    // Рахуємо довжину і площу кола (результат теж буде цілим числом)
    int L = 2 * PI * R;
    int S_circle = PI * R * R;

    cout << "Circle circumference L = " << L << endl;
    cout << "Circle area S = " << S_circle << endl << endl;

    // Виведення назви другого завдання
    cout << "Begin 30: Triangle Area" << endl;

    // Змінні для катетів трикутника (цілі числа)
    int a, b;

    cout << "Enter cathetus a: ";
    cin >> a;

    cout << "Enter cathetus b: ";
    cin >> b;

    // Обчислення площі прямокутного трикутника через цілі числа
    int S_triangle = (a * b) / 2;

    cout << "Triangle area S = " << S_triangle << endl << endl;


    // Виведення назви третього завдання
    cout << "Begin 47: Electric Circuit Parameters" << endl;

    // Змінні для електричного кола (цілі числа)
    int U, I, t;

    cout << "Enter voltage U: ";
    cin >> U;

    cout << "Enter current intensity I: ";
    cin >> I;

    cout << "Enter working time t: ";
    cin >> t;

    // Розрахунок потужності та роботи струму
    int P = U * I;
    int A = P * t;

    cout << "Electric power P = " << P << endl;
    cout << "Circuit work A = " << A << endl;

    return 0;
}


 
  
 