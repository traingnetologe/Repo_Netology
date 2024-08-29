
//Address city street house number apartment number
//Incoming

#include <iostream>
class Address
{
private:
	std::string city, street;
	int numberhouse, numberappartment;

public:
	//Adress() {};
// конструктор с ключевыми полями;
	Address(std::string in_city,std::string in_street,  int in_numberhouse, int in_numberapartament):
		city(in_city), street(in_street), numberhouse(in_numberhouse),numberappartment(in_numberapartament)
	{ }

	std::string getStringAddress() {
		std::string stringhouse = std::to_string(numberhouse);
		std::string stringappartament = std::to_string(numberappartment);
		return  city + ", " + street + ", " + stringhouse + ", " + stringappartament;
	}

};

// читаем даннные из файла и помещаем их в классы которые лежат в массивах
void readfileToAddress(Address ArrayAddress[]) {

}
void testForClass() {
	Address NewAddress("Москва", "Острова", 10, 1);
	std::cout << NewAddress.getStringAddress() << "\n";
}

int main()
{
	testForClass();
    std::cout << "Hello World!\n";
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
