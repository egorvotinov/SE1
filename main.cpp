#include <iostream> // The program is educational. The student is Egor Votinov. 2025. Group KE-217.

using namespace std;

int main() {
    int num1, num2;
    cout << "Введите первое целое число: ";
    cin >> num1;
    cout << "Введите второе целое число: ";
    cin >> num2;
    cout << "Сумма чисел: " << num1 + num2 << endl;
    cout << "Разность чисел: " << num1 - num2 << endl;
    cout << "Произведение чисел: " << num1 * num2 << endl;

    if (num2 != 0) {
        cout << "Частное чисел: " << num1 / num2 << endl;
    }
    else {
        cout << "Ошибка: деление на ноль невозможно." << endl;
    }

    return 0;
}
