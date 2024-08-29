#include <iostream>

class calculator {

    //calculator(double num1 = 0.0, double num2 = 0.0) : number1(num1), number2(num2) {}

private:
    double number1, number2;

    // устанавливаем значение переменной
    bool setMeaning(double meaning, double& number) {
        if (isZero(meaning)) {
            return false;
        }
        else {
            // устанавливаем значение переменной
            number = meaning;
            return true;
        };
    }
    ////////
public:
    double add() {
        return number1 + number2;
    }
    double multiply() {
        return number1 * number2;
    }
    double subtract_1_2() {
        return number2 - number1;
    }
    double subtract_2_1() {
        return number1 - number2;
    }
    double divide_1_2() {
        return number1 / number2;
    }
    double divide_2_1() {
        return number2 / number1;
    }
    bool set_num1(double num1) {
        return setMeaning(num1, number1);
    }
    bool set_num2(double num2) {
        return setMeaning(num2, number2);
    }

    void print_number() {
        std::cout << number1 << ", " << number2 << "\n";
    }
    // проверка число равно нулю или нет
    bool isZero(double number) {
        if (0 == number) {
            return true;
        }
        else {
            return false;
        }
    }


};

void setTheValue(calculator& calculatorClass, int order) {
    bool rezult = true;
    double number{ 0.0 };
    while (rezult) {
        std::cin >> number;
        rezult = calculatorClass.isZero(number);

        if (rezult) {
            std::cout << "Неверный ввод!" << "\n";
        }
        else {

            rezult = false;
            switch(order) {
            case 1:
                calculatorClass.set_num1(number);
                break;
            case 2:
                calculatorClass.set_num2(number);
                break;
            }
        }

    }
}

void printRezultCalculator(calculator& calculatorClass) {
    // распечатаем результат работы класса
    std::cout << "num1 + num2 = " << calculatorClass.add();
    std::cout << "\n";
    std::cout << "num1 - num2 = " << calculatorClass.subtract_2_1();
    std::cout << "\n";
    std::cout << "num2 - num1 = " << calculatorClass.subtract_1_2();
    std::cout << "\n";
    std::cout << "num1 * num2 = " << calculatorClass.multiply();
    std::cout << "\n";
    std::cout << "num1 / num2 = " << calculatorClass.divide_1_2();
    std::cout << "\n";
    std::cout << "num2 / num1 = " << calculatorClass.divide_2_1();
}

int main() {

	std::setlocale(LC_CTYPE, "Russian");
    calculator calc_one;

    std::cout << "Введите num1: ";
    setTheValue(calc_one, 1);

    std::cout << "Введите num2: ";
    setTheValue(calc_one, 2);

    printRezultCalculator(calc_one);

    return 0;
}