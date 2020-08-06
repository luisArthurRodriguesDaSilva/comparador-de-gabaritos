#include <iostream>
#include <locale>

using namespace std;

char armazenamento[9999][9999];
int i,x, tamanho, p=0,Nprov,j=0;
char linha;
char armDoVeri;
bool iguais[9999];

void verificadorDecaracter();
void armazenador();
void armazenadorS();
void comparador();
void revelador();

int main()
{
	setlocale(LC_ALL, "");

	while (true)
	{
		p = 0;
		while (p <= Nprov) { iguais[p] = false; p++; }
		p = 0;

		cout << "número de provas:";	cin >> Nprov;		cout << endl;   //obter numero de provas

		cout << "tamanho das prova:";	cin >> tamanho;		cout << endl;	//obter tamanho


		system("cls");//LIMPEZAAAAAAAAAAAAAAAAAA

		while (p < Nprov) {
			verificadorDecaracter();										//vê se tem ou n
			if (armDoVeri == 's') armazenador(); 
			else armazenadorS();											//armazenando c e sem sinal
			p++;
		}		

		system("cls");//LIMPEZAAAAAAAAAAAAAAAAAA

		comparador();

		revelador();

		cout << endl << endl;
	}

	return 0;
}

void verificadorDecaracter()
{
	cout << "tem caracter entre o número e a letra na prova "<<p+1 <<"?"<< endl;

	
	cin >> armDoVeri; cout << endl;

	system("cls");
}

void armazenador() {

	cout << "primeiro gabarito:" << endl;
	for (x = 0; x < tamanho; x++) {
		cin >> i >> linha >> armazenamento[p][x];
	}

	system("cls");

}

void armazenadorS() {

	cout << "primeiro gabarito:" << endl;
	for (x = 0; x < tamanho; x++) {
		cin >> i >> armazenamento[p][x];
	}
	system("cls");
}

void comparador() 
{
	for (p = 0; p < Nprov; p++)
	{
		for (i = 0; i < tamanho && iguais[j]==false;i++)
		{
			if (armazenamento[p][i] != armazenamento[p][i + 1])
			{
				iguais[p] = true; p = j;
			}
		}

	}
}

void revelador() {
	
	for (x = 0 ; x < tamanho; x++)
	{
		if (iguais[x])cout << x + 1 << "-" << armazenamento[1][x] << endl;
		else 
		{
			cout << "||" << x + 1 << "[";
			//----------------------questões diferentes-----------------------
			i = 0; p = 0;
			while (i < Nprov) 
			{
				if (i < (Nprov - 1))cout << armazenamento[p + i][x] << "|";
				else cout << armazenamento[p + i][x];
				
				
				i++;
			}
			//--------------------------------------------------------------
			cout << "]" << endl;
		}
	
	}

}