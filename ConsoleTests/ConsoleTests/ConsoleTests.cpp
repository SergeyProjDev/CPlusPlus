#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class ConsoleClass {
public:

	virtual void Write(string inp) {
		cout << inp;
	}
	virtual void Write() {
		cout << " ";
	}

	virtual void WriteLine(string inp) {
		cout << inp + "\n";
	}
	virtual void WriteLine() {
		cout << "\n";
	}

	virtual void Read() {
		string inp;
		cin >> inp;
		inp = inp.at(0);
		cout << inp;
	}
	virtual void ReadLine() {
		string inp;
		cin >> inp;
		cout << inp;
	}
	virtual void ReadKey() {
		cin.get();
	}
};
int main()
{
	ConsoleClass Console;
	Console.WriteLine("Hello");
	Console.ReadKey();
}





