#include <iostream>
#include <locale>

using namespace std;

char alternativas1[1000];
char alternativas2[1000];
int x, tamanho;
char linha;

void revelador();
void armazenador2();
void armazenador1();

int main()
{

	while (true)
	{

		setlocale(LC_ALL, "");

		cout << "tamanho da prova:"; cin >> tamanho; cout << endl;

		system("cls");

		cout << "tamanho:" << tamanho << endl;

		armazenador1();
		system("cls");
		armazenador2();
		system("cls");
		revelador();
	}

	return 0;
}

void armazenador1() {

	cout << "primeiro gabarito:" << endl;
	for (x = 0; x < tamanho; x++) {
		cin >> i >> linha >> alternativas1[x];
	}

}

void armazenador2() {
	cout << "segundo gabarito:" << endl;
	for (x = 0; x < tamanho; x++) {
		cin >> i >> linha >> alternativas2[x];
	}

}

void revelador() {

	for (x = 0; x < tamanho; x++)
	{
		if (alternativas1[x] == alternativas2[x])cout << x+1 << "-" << alternativas1[x] << endl;
		else cout <<"||"<< x+1<<"dif["<< alternativas1[x] << "|" << alternativas2[x]<<"]"<<endl;
	}

}