#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int CountW(char letter) {
	if (letter == 'W'|| letter == 'w') {
		cout << "Found w" << endl;
	}
	return 0;
}
int CountH(char letter) {
	if (letter == 'H' || letter == 'h') {
		cout << "Found h" << endl;
	}
	return 0;
}
int CountI(char letter) {
	if (letter == 'I' || letter == 'i') {
		cout << "Found i" << endl;
	}
	return 0;
}
int CountL(char letter) {
	if (letter == 'L' || letter == 'l') {
		cout << "Found l" << endl;
	}
	return 0;
}
int CountE(char letter) {
	if (letter == 'E' || letter == 'e') {
		cout << "Found e" << endl;
	}
	return 0;
}

int main() {

	ofstream MyFile("t.txt");

	MyFile << "wHqciCvdE";

	MyFile.close();

	string myText;

	ifstream MyReadFile("t.txt");

	while (getline(MyReadFile, myText)) {
		cout << myText;
	}

	cout << endl;

	MyReadFile.close();

	char letter;

	ifstream MyReadFileChar("t.txt");

	while ((letter = MyReadFileChar.get()) > 0)
	{
		CountW(letter);
		CountH(letter);
		CountI(letter);
		CountL(letter);
		CountE(letter);
	}

	MyReadFileChar.close();

}
