#include <iostream>
#include <locale>

using namespace std;

char armazenamento[9999][9999];
int i,x, tamanho, p=0,Nprov;
char linha;
char armDoVeri[9999];

void verificadorDecaracter();
void armazenador();
void armazenadorS();
void revelador();

int main()
{
	setlocale(LC_ALL, "");

	while (true)
	{
		cout << "número de provas:";	cin >> Nprov;		cout << endl;   //obter numero de provas

		cout << "tamanho das prova:";	cin >> tamanho;		cout << endl;	//obter tamanho


		system("cls");//LIMPEZAAAAAAAAAAAAAAAAAA

		while (p < Nprov) {
			verificadorDecaracter();										//vê se tem ou n
			if (armDoVeri[p] == 's') armazenador(); else armazenadorS();	//armazenando c e sem sinal
			p++;
		}		

		system("cls");//LIMPEZAAAAAAAAAAAAAAAAAA

		revelador();
	}

	return 0;
}

void verificadorDecaracter()
{
	cout << "tem caracter entre o número e a letra na prova "<<p+1 <<"?"<< endl;

	
	cin >> armDoVeri[p]; cout << endl;

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

void revelador() {

	for (x = 0 ; x < tamanho; x++)
	{
		if (armazenamento[p][x] == armazenamento[p + 1][x])cout << x + 1 << "-" << armazenamento[1][x] << endl;
		
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