#include <iostream>
#include <cmath> // Необхідно для математичних операцій

// Прототипи процедур (void функції без параметрів)
void task_if37();   // Завдання 1.1: Задача If37
void task_if26();   // Завдання 1.2: Задача If26
void task_geom33(); // Завдання 2: Геометрична фігура (Варіант 33)
void showMenu();    // Допоміжна функція для виведення головного меню

int main() {
    int choice = 0;

    // Завдання 3: Організація меню в командному вікні з використанням інструкції вибору
    do {
        showMenu();
        std::cout << "Enter task number (1-4): ";
        std::cin >> choice;

        // Перевірка введеного пункту меню на коректність
        if (!std::cin) {
            std::cout << "Error! Invalid menu input. Please enter a number.\n\n";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            continue;
        }

        // Інструкція вибору для перемикання між завданнями
        switch (choice) {
        case 1:
            std::cout << "\n--- Executing Task 1.1 (If37) ---\n";
            task_if37();
            break;
        case 2:
            std::cout << "\n--- Executing Task 1.2 (If26) ---\n";
            task_if26();
            break;
        case 3:
            std::cout << "\n--- Executing Task 2 (Geometry Var 33) ---\n";
            task_geom33();
            break;
        case 4:
            std::cout << "\nExiting the program. Goodbye!\n";
            break;
        default:
            std::cout << "Wrong task number! Please choose between 1 and 4.\n";
        }
        std::cout << "\n-----------------------------------------\n";

    } while (choice != 4);

    system("pause");
    return 0;
}

// Виведення головного меню
void showMenu() {
    std::cout << "=========================================\n";
    std::cout << "             MAIN MENU                   \n";
    std::cout << "=========================================\n";
    std::cout << "1. Task 1.1: Branching algorithm (If37)\n";
    std::cout << "2. Task 1.2: Branching algorithm (If26)\n";
    std::cout << "3. Task 2: Geometric figure (Var 33)\n";
    std::cout << "4. Exit program\n";
    std::cout << "-----------------------------------------\n";
}

// Реалізація Завдання 1.1 (If37)
void task_if37() {
    std::cout << "************* If 37 *****************\n";
    double x;
    std::cout << "Enter a real number x: ";
    std::cin >> x;

    // Перевірка вхідних даних на коректність
    if (std::cin) {
        int q = 0; // Змінна q цілого типу

        // Розгалуження за умовою If37
        if (x < 0) {
            q = static_cast<int>(-2 * x);
            std::cout << "Condition (x < 0) is met." << std::endl;
        }
        else if (x >= 0 && x <= 2) {
            q = static_cast<int>(x * x + 1);
            std::cout << "Condition (0 <= x <= 2) is met." << std::endl;
        }
        else {
            q = 5;
            std::cout << "Condition (x > 2) is met." << std::endl;
        }

        std::cout << "Calculation result: q = " << q << std::endl;
    }
    else {
        std::cout << "Error! Invalid input data (expected a number)." << std::endl;
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }
}

// Реалізація Завдання 1.2 (If26) — згідно з умовою без зайвих функцій
void task_if26() {
    std::cout << "************* If 26 *****************\n";
    double x;
    std::cout << "Enter a real number x: ";
    std::cin >> x;

    // Перевірка вхідних даних на коректність
    if (std::cin) {
        double result = 0.0;

        // Розгалуження за умовою If26 (присвоєння залежно від проміжку)
        if (x <= 0) {
            result = -x;
            std::cout << "Condition (x <= 0) is met." << std::endl;
        }
        else if (x > 0 && x < 2) {
            result = x;
            std::cout << "Condition (0 < x < 2) is met." << std::endl;
        }
        else {
            result = x;
            std::cout << "Condition (x >= 2) is met." << std::endl;
        }

        std::cout << "Calculation result: result = " << result << std::endl;
    }
    else {
        std::cout << "Error! Invalid input data (expected a number)." << std::endl;
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }
}

// Реалізація Завдання 2 (Варіант 33 - червона фігура)
void task_geom33() {
    std::cout << "************* Geom Var 33 *****************\n";
    double r, x, y;

    // Введення радіуса кола
    std::cout << "Enter radius r (r > 0): ";
    std::cin >> r;

    // Перевірка коректності радіуса
    if (!std::cin || r <= 0) {
        std::cout << "Error! Invalid radius value." << std::endl;
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        return;
    }

    // Введення координат точки
    std::cout << "Enter point coordinates (x y): ";
    std::cin >> x >> y;

    // Перевірка коректності введення координат
    if (!std::cin) {
        std::cout << "Error! Invalid coordinate input." << std::endl;
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        return;
    }

    // Умова для 33 варіанта (червона фігура)
    bool inTopSector = (x >= 0) && (y >= 0) && ((x * x + y * y) <= (r * r));
    bool inBottomTriangle = (x <= 0) && (y <= 0) && (y >= -x - r);

    if (inTopSector || inBottomTriangle) {
        std::cout << "Result: The point (" << x << ", " << y << ") BELONGS to the red figure (Var 33)." << std::endl;
    }
    else {
        std::cout << "Result: The point (" << x << ", " << y << ") DOES NOT BELONG to the red figure." << std::endl;
    }
}