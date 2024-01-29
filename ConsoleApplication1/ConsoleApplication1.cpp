// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


// Функция для формирования массива
#include <iostream>
void createArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << "Введите элемент " << i + 1 << ": ";
        std::cin >> arr[i];
    }
}

// Функция для печати массива
void printArray(const int* arr, int size) {
    std::cout << "Массив: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Функция для нахождения среднего арифметического
double calculateAverage(const int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / size;
}

// Функция для формирования нового массива, содержащего элементы меньше среднего арифметического
void createNewArray(const int* arr, int size, int* newArr, int& newSize, const double average) {
    newSize = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] < average) {
            newArr[newSize] = arr[i];
            ++newSize;
        }
    }
}

int main() {
    const int SIZE = 50;
    int array[SIZE];
    int newArray[SIZE];
    int newSize;
    double average;

    // Формирование массива
    createArray(array, SIZE);

    // Печать исходного массива
    printArray(array, SIZE);

    // Нахождение среднего арифметического
    average = calculateAverage(array, SIZE);
    std::cout << "Среднее арифметическое: " << average << std::endl;

    // Формирование нового массива
    createNewArray(array, SIZE, newArray, newSize, average);

    // Печать нового массива
    printArray(newArray, newSize);

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
