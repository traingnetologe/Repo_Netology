// Counter_Class.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Counter {

private:
    int CounterNumber;

public:
    void AddCounter() {
        CounterNumber++;
    }
    void SubtractCounter() {
        CounterNumber--;
    }

    void PrintCounter() {
        std::cout << "Текущее значение счетчика: " << CounterNumber << "\n";
    }

	 Counter() {
        CounterNumber = 1;

	}
    Counter(int Number) {
        CounterNumber = Number;
    }

};

int main()
{
    std::setlocale(LC_CTYPE, "Russian");
    
    Counter currentCounter;
    char simbol = ' ',exitChar = 'x';
    while (simbol != exitChar) {

        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> simbol;

        switch (simbol) {
        case '+': currentCounter.AddCounter(); break;
        case '-': currentCounter.SubtractCounter(); break;
        case '=': currentCounter.PrintCounter(); break;
        }
    }
}
