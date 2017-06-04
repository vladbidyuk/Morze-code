#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
using namespace std;
char glbuffer[1024];

void decode(char* source) {

	for (int i = 0; i < strlen(source); i++)
	{
		source[i] = toupper(source[i]);

		if (source[i] == ' ')		cout << "| ";
		// Numbers
		else if (source[i] == '1')	cout << "10000" << " ";
		else if (source[i] == '2')	cout << "11000" << " ";
		else if (source[i] == '3')	cout << "11100" << " ";
		else if (source[i] == '4')	cout << "11110" << " ";
		else if (source[i] == '5')	cout << "11111" << " ";
		else if (source[i] == '6')	cout << "01111" << " ";
		else if (source[i] == '7')	cout << "00111" << " ";
		else if (source[i] == '8')	cout << "00011" << " ";
		else if (source[i] == '9')	cout << "00001" << " ";
		else if (source[i] == '0')	cout << "00000" << " ";

		//Alphabets
		else if (source[i] == 'A')	cout << "10" << " ";
		else if (source[i] == 'B')	cout << "0111" << " ";
		else if (source[i] == 'C')	cout << "1010" << " ";
		else if (source[i] == 'D')	cout << "011" << " ";
		else if (source[i] == 'E')	cout << "1" << " ";
		else if (source[i] == 'F')	cout << "1101" << " ";
		else if (source[i] == 'G')	cout << "001" << " ";
		else if (source[i] == 'H')	cout << "1111" << " ";
		else if (source[i] == 'I')	cout << "11" << " ";
		else if (source[i] == 'J')	cout << "1000" << " ";
		else if (source[i] == 'K')	cout << "010" << " ";
		else if (source[i] == 'L')	cout << "1011" << " ";
		else if (source[i] == 'M')	cout << "00" << " ";
		else if (source[i] == 'N')	cout << "01" << " ";
		else if (source[i] == 'O')	cout << "000" << " ";
		else if (source[i] == 'P')	cout << "1001" << " ";
		else if (source[i] == 'Q')	cout << "0010" << " ";
		else if (source[i] == 'R')	cout << "101" << " ";
		else if (source[i] == 'S')	cout << "111" << " ";
		else if (source[i] == 'T')	cout << "0" << " ";
		else if (source[i] == 'U')	cout << "110" << " ";
		else if (source[i] == 'V')	cout << "1110" << " ";
		else if (source[i] == 'W')	cout << "100" << " ";
		else if (source[i] == 'X')	cout << "0110" << " ";
		else if (source[i] == 'Y')	cout << "0100" << " ";
		else if (source[i] == 'Z')	cout << "0011" << " ";

		//For fun
		else if (source[i] == '.')	cout << "111111" << " ";
		else if (source[i] == ',')	cout << "101010" << " ";
		else if (source[i] == ':')	cout << "000111" << " ";
		else if (source[i] == ';')	cout << "010101" << " ";
		else if (source[i] == '(' || source[i] == ')')	cout << "010010" << " ";
		else if (source[i] == '\'')	cout << "100001" << " ";
		else if (source[i] == '"')	cout << "101101" << " ";
		else if (source[i] == '-')	cout << "011110" << " ";
		else if (source[i] == '/')	cout << "010010" << " ";
		else if (source[i] == '?')	cout << "110011" << " ";
		else if (source[i] == '!')	cout << "001100" << " ";
	}
}
void encode(int n, char* s) {
	ifstream read;
	char word[25];
	read.open("Message.txt", ios_base::binary);
	for (int i = 0; i < n; i++) 
	{
		read.read((char*)&s[i], sizeof(char));
		cout << s[i];
		glbuffer[i] = s[i];

		if (strcmp((char*)&s[i], "10") == 0)	cout << "A" << endl;
	}
	if (n == 0)	cout << "File is clear!" << endl;
	read.close();
	cout << endl;
}
void record(char* source) {
	ofstream rec;
	rec.open("Message.txt", ios_base::binary | ios_base::out);
	
	for (int i = 0; i < strlen(source); i++)
	{
		source[i] = toupper(source[i]);

		if (source[i] == ' ')		rec << "| ";
		// Numbers
		else if (source[i] == '1')	rec << "10000" << " ";
		else if (source[i] == '2')	rec << "11000" << " ";
		else if (source[i] == '3')	rec << "11100" << " ";
		else if (source[i] == '4')	rec << "11110" << " ";
		else if (source[i] == '5')	rec << "11111" << " ";
		else if (source[i] == '6')	rec << "01111" << " ";
		else if (source[i] == '7')	rec << "00111" << " ";
		else if (source[i] == '8')	rec << "00011" << " ";
		else if (source[i] == '9')	rec << "00001" << " ";
		else if (source[i] == '0')	rec << "00000" << " ";

		//Alphabets
		else if (source[i] == 'A')	rec << "10" << " ";
		else if (source[i] == 'B')	rec << "0111" << " ";
		else if (source[i] == 'C')	rec << "1010" << " ";
		else if (source[i] == 'D')	rec << "011" << " ";
		else if (source[i] == 'E')	rec << "1" << " ";
		else if (source[i] == 'F')	rec << "1101" << " ";
		else if (source[i] == 'G')	rec << "001" << " ";
		else if (source[i] == 'H')	rec << "1111" << " ";
		else if (source[i] == 'I')	rec << "11" << " ";
		else if (source[i] == 'J')	rec << "1000" << " ";
		else if (source[i] == 'K')	rec << "010" << " ";
		else if (source[i] == 'L')	rec << "1011" << " ";
		else if (source[i] == 'M')	rec << "00" << " ";
		else if (source[i] == 'N')	rec << "01" << " ";
		else if (source[i] == 'O')	rec << "000" << " ";
		else if (source[i] == 'P')	rec << "1001" << " ";
		else if (source[i] == 'Q')	rec << "0010" << " ";
		else if (source[i] == 'R')	rec << "101" << " ";
		else if (source[i] == 'S')	rec << "111" << " ";
		else if (source[i] == 'T')	rec << "0" << " ";
		else if (source[i] == 'U')	rec << "110" << " ";
		else if (source[i] == 'V')	rec << "1110" << " ";
		else if (source[i] == 'W')	rec << "100" << " ";
		else if (source[i] == 'X')	rec << "0110" << " ";
		else if (source[i] == 'Y')	rec << "0100" << " ";
		else if (source[i] == 'Z')	rec << "0011" << " ";

		//For fun
		else if (source[i] == '.')	rec << "111111" << " ";
		else if (source[i] == ',')	rec << "101010" << " ";
		else if (source[i] == ':')	rec << "000111" << " ";
		else if (source[i] == ';')	rec << "010101" << " ";
		else if (source[i] == '(' || source[i] == ')')	rec << "010010" << " ";
		else if (source[i] == '\'')	rec << "100001" << " ";
		else if (source[i] == '"')	rec << "101101" << " ";
		else if (source[i] == '-')	rec << "011110" << " ";
		else if (source[i] == '/')	rec << "010010" << " ";
		else if (source[i] == '?')	rec << "110011" << " ";
		else if (source[i] == '!')	rec << "001100" << " ";
	}

	rec.close();
}

void sizeF(int *size) {
	ifstream name("Message.txt", ios_base::binary);
	name.seekg(0, ios::end);
	*size = name.tellg();
	name.close();
}

int main() {
	int size;
	char arr[128];


	cout << "Enter some text: ";	
	cin.getline(arr, strlen(arr));
	
	cout << "Result: ";
	decode(arr);
	record(arr);
	
	cout << "\nRead file: " << endl;
	sizeF(&size);
	char *s = new char[size];
	encode(size, s);
	delete[] s;

	cout << glbuffer;

	system("pause");
	return 0;
}