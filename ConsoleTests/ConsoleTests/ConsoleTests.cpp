#include "pch.h"
#include <iostream>
#include <string>
using namespace std;





class Program { //пользовательская точка входа
public:



	void Main() {
		cout << "Your age: ";
		Valid(ReadValue());
	}



	void Valid(string Age) {
		try {
			if (stoi(Age) < 18) cout << "Ok"; //попытка конвентирования StringTOInt();
			else cout << "Not ok";
		}
		catch (...) {
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





