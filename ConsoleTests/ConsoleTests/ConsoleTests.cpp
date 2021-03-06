#include "pch.h"
#include <iostream>
#include <string>
using namespace std;



class Hellower {
public:
	void Hello() { cout << "Hellower1: Hi\n"; }	
};


class Hellower2 {
public:
	void Hello2() { cout << "Hellower2: Hi\n"; }
};









class Program : Hellower, Hellower2 { //множественное наследование
public:

	void Main() { //пользовательская точка входа
		Hello(); //наследовано от Hellower
		Hello2(); //наследовано от Hellower2
		cout << "Your age: ";
		Valid(ReadValue());
	}



	void Valid(string Age) {
		try {
			if (stoi(Age) < 18) cout << "Ok"; //попытка конвентирования с исключением 
			else cout << "Not ok";
		}
		catch (...) { //исключение общее
			printf("Enter your age (number)! ");
			Main();
		}
		
	}

	

	


	string ReadValue() {
		string inp;
		cin >> inp;
		return inp;
	}
};









int main()
{
	setlocale(LC_ALL, ""); //разрешает кирилицу

	Program Start;
	Start.Main();

	printf("\n\n   ***** \n Program ended... \n   ***** \n\n");
	cin.get(); //аналог ReadKey

	return 0;
}





