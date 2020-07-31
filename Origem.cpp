#include <iostream>
#include <locale>

using namespace std;

char alternativas1[1000];
char alternativas2[1000];
int i,x, tamanho;
char linha;
char verificadorDLinhas;

void revelador();
void armazenador2();
void armazenador1();
void armazenador2S();
void armazenador1S();

int main()
{

	while (true)
	{

		setlocale(LC_ALL, "");

		cout << "tamanho da prova:"; cin >> tamanho; cout << endl;

		system("cls");

		cout << "tamanho:" << tamanho << endl<<endl;


		cout << "tem linha entre o número e a letra no primeiro?" << endl;

		cin >> verificadorDLinhas; cout << endl;
		if (verificadorDLinhas == 's') armazenador1(); else armazenador1S();
		system("cls");
		

		cout << "tem linha entre o número e a letra no segundo?" << endl;
		cin >> verificadorDLinhas; cout << endl;
		if (verificadorDLinhas == 's')armazenador2(); else armazenador2S();
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

void armazenador1S() {

	cout << "primeiro gabarito:" << endl;
	for (x = 0; x < tamanho; x++) {
		cin >> i >> alternativas1[x];
	}

}


void armazenador2() {
	cout << "segundo gabarito:" << endl;
	for (x = 0; x < tamanho; x++) {
		cin >> i >> linha >> alternativas2[x];
	}

}
void armazenador2S() {
	cout << "segundo gabarito:" << endl;
	for (x = 0; x < tamanho; x++) {
		cin >> i >> alternativas2[x];
	}

}


void revelador(){

	for (x = 0; x < tamanho; x++)
	{
		if (alternativas1[x] == alternativas2[x])cout << x+1 << "-" << alternativas1[x] << endl;
		else cout <<"||"<< x+1<<"["<< alternativas1[x] << "|" << alternativas2[x]<<"]"<<endl;
	}

}