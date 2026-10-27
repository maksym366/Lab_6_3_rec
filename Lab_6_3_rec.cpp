#include <iostream>
#include <iomanip>

using namespace std;

// 1. Звичайна рекурсивна функція виведення масиву
void PrintArray(int* a, const int size, int i) {
    if (i < size) {
        cout << setw(5) << a[i];
        PrintArray(a, size, i + 1);
    }
    else {
        cout << endl;
    }
}

// 2. Шаблонна рекурсивна функція виведення масиву
template <typename T>
void PrintArray(T* a, const int size, int i) {
    if (i < size) {
        cout << setw(5) << a[i];
        PrintArray<T>(a, size, i + 1);
    }
    else {
        cout << endl;
    }
}

int main() {
    const int n = 10;

    // Масив цілих чисел
    int a[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    cout << "Integer array (ordinary function):" << endl;
    PrintArray(a, n, 0);

    cout << "Integer array (template function):" << endl;
    PrintArray<int>(a, n, 0);

    // Масив дійсних чисел
    double b[n] = {
        1.1, 2.2, 3.3, 4.4, 5.5,
        6.6, 7.7, 8.8, 9.9, 10.0
    };

    cout << "Double array (template function):" << endl;
    PrintArray<double>(b, n, 0);

    return 0;
}