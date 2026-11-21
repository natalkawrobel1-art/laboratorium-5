// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std; 

int main() {
	
	//zadanie 1
	int tablica_odwracanie_kolejnosci[10];
	cout << "Podaj 10 liczb calkowitych" << endl;
	for (int i = 0; i < 10; i++) {
		cin >> tablica_odwracanie_kolejnosci[i];
	}
	for (int i = 9; i >= 0; i--) {
		cout << tablica_odwracanie_kolejnosci[i] << " ";
	}cout << endl;

	//zadanie 2
	int ile_liczb;
	cout << "Ile kolejnych liczb ciagu Fibonacciego chcesz wyznaczyc?" << endl;
	cin >> ile_liczb;
	int* tablica_ciag = new int[ile_liczb + 2];
	tablica_ciag[0] = 0;
	tablica_ciag[1] = 1;
	for (int i = 2; i < (ile_liczb + 2); i++) {
		tablica_ciag[i] = tablica_ciag[i - 2] + tablica_ciag[i - 1];
	}
	for (int i = 0; i < (ile_liczb + 2); i++) {
		cout << tablica_ciag[i] << " ";
	}
	cout << endl;

	//zadanie 3
	int losowa_tablica[10];
	int licznik = 0;
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		losowa_tablica[i] = (rand() % 10) + 1;
	}
	double suma = 0.0;
	for (int i = 0; i < 10; i++) {
		suma = suma + losowa_tablica[i];
	}
	double srednia = suma / 10;
	for (int i = 0; i < 10; i++) {
		if (losowa_tablica[i] < srednia) {
			licznik = licznik + 1;
		}
	}
	int najmniejszy = losowa_tablica[0];
	for (int i = 1; i < 10; i++) {
		if (losowa_tablica[i] < najmniejszy) {
			najmniejszy = losowa_tablica[i];
		}
	}
	int najwiekszy = losowa_tablica[0];
	for (int i = 1; i < 10; i++) {
		if (losowa_tablica[i] > najwiekszy) {
			najwiekszy = losowa_tablica[i];
		}
	}
	cout << "Srednia wartosc liczb z tablicy: " << srednia << endl;
	cout << "Ilosc elementow mniejszych od obliczonej wartosci sredniej: " << licznik << endl;
	cout << "Element najmniejszy z tablicy: " << najmniejszy << endl;
	cout << "Element najwiekszt z tablicy: " << najwiekszy << endl;

	//zadanie 4
	int tablica_zad4[10];
	int ile_elementow;
	cout << "Podaj ile elementow tablicy chcesz wypelnic" << endl;
	cin >> ile_elementow;
	cout << "Podaj (0-10) liczb rzeczywistych ktore chcesz umiescic w tablicy" << endl;
	for (int i = 0; i < ile_elementow; i++) {
		cin >> tablica_zad4[i];
	}
	for (int i = ile_elementow; i < 10; i++) {
		tablica_zad4[i] = 0;
	}
	double suma4 = 0.0;
	for (int i = 0; i < 10; i++) {
		suma4 = suma4 + tablica_zad4[i];
	}
	double srednia4 = suma4 / ile_elementow;
	int minimalna = tablica_zad4[0];
	for (int i = 1; i < 10; i++) {
		if (tablica_zad4[i] < minimalna) {
			minimalna = tablica_zad4[i];
		}
	}
	int maksymalna = tablica_zad4[0];
	for (int i = 1; i < 10; i++) {
		if (tablica_zad4[i] > maksymalna) {
			maksymalna = tablica_zad4[i];
		}
	}
	cout << "Srednia wartosc elementow tablicy: " << srednia4 << endl;
	cout << "Minimalna wartosc to: " << minimalna << endl;
	cout << "Maksymalna wartosc to: " << maksymalna << endl;

	//zadanie 5
	int suma5 = 0;
	int tablica_losowanka[10];
	for (int i = 0; i < 10; i++) {
		tablica_losowanka[i] = (rand() % 10) + 1;
		cout << tablica_losowanka[i] << " ";
	}
	cout << endl;
	int szczesliwy_numerek = (rand() % 10) + 1;
	cout << "Szczesliwy numerek to: " << szczesliwy_numerek << endl;
	for (int i = 0; i < 10; i++) {
		if (szczesliwy_numerek == tablica_losowanka[i]) {
			suma5 = suma5 + 1;
		}
	}
	cout << "Wylosowana liczba wystepuje w tablicy " << suma5 << "razy" << endl;

	//zadanie 6
	int macierz1[2][2] = {
		{ 2,4 },
		{ 1,3 }
	};
	int macierz2[2][2] = {
		{ 5,6 },
		{ 7,8 }
	};
	int macierzwynik[2][2];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			macierzwynik[i][j] = macierz1[i][j] + macierz2[i][j];
			cout << macierzwynik[i][j] << " ";
		} cout << endl;
	}

	//zadanie 7
	int macierz_1[2][2] = {
			{ 2,4 },
			{ 1,3 }
	};
	int macierz_2[2][2] = {
		{ 5,6 },
		{ 7,8 }
	};
	int macierz_wynik[2][2];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			macierz_wynik[i][j] = macierz_1[i][j] * macierz_2[i][j];
			cout << macierz_wynik[i][j] << " ";
		} cout << endl;
	}

	//zadanie 8
	int macierz_8[3][3];
	cout << "Podaj 9 liczb do macierzy kwadratowej" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> macierz_8[i][j];
		}
	}
	cout << "Suma liczb na glownej przekatnej: " << macierz_8[0][0] + macierz_8[1][1] + macierz_8[2][2] << endl;

	//zadanie 9- sortowanie bąbelkowe
	int tablica_sort[10];
	cout << "Podaj 10 liczb ktore chcesz umiescic w tablicy do sortowania" << endl;
	for (int i = 0; i < 10; i++) {
		cin >> tablica_sort[i];
	}
	for (int i = 0; i < 10; i++) {
		for (int k = 1; k < 10; k++) {
			if (tablica_sort[k] < tablica_sort[k - 1]) {
				int temp = tablica_sort[k];
				tablica_sort[k] = tablica_sort[k - 1];
				tablica_sort[k - 1] = temp;
			}
		}
	}
	cout << "Elementy tablicy po sortowaniu babelkowym: ";
	for (int i = 0; i < 10; i++) {
		cout << tablica_sort[i] << " ";
	}
	cout << endl;

	//zadanie 10
	int macierz_10[8][8] = {
		{ 1,2,3,4,5,6,7,8 },
		{ 2,3,4,5,9,2,6,9 },
		{ 1,5,7,8,3,5,9,2 },
		{ 2,7,9,5,3,4,7,3 },
		{ 4,7,5,2,9,1,6,0 },
		{ 3,4,1,9,0,7,8,9 },
		{ 5,8,3,6,8,7,9,1 },
		{ 6,8,9,3,4,6,2,1 }
	};
	for (int i = 0; i < 8; i++) {
		int suma_wiersza = 0;
		for (int j = 0; j < 8; j++) {
			suma_wiersza = suma_wiersza + macierz_10[i][j];
		}
		cout << "Suma wiersza " << i << "=" << suma_wiersza << endl;
	}
	for (int i = 0; i < 8; i++) {
		int suma_kolumny = 0;
		for (int j = 0; j < 8; j++) {
			suma_kolumny = suma_kolumny + macierz_10[j][i];
		}
		cout << "Suma kolumny " << i << "=" << suma_kolumny << endl;
	}
	
	//zadanie 11

	int macierz_11[8][6] = {
		{ 12,4,56,18,19,96 },
		{ 75,98,64,8,93,43 },
		{ 23,65,4,91,89,48 },
		{ 56,85,1,99,34,89 },
		{ 23,86,45,90,2,98 },
		{ 12,54,37,5,98,22 },
		{ 45,89,76,42,18,0 },
		{ 34,26,98,55,21,4 }
	};
	int najmniejszy11 = macierz_11[0][0];
	int najwiekszy11 = macierz_11[0][0];
	int temp_wiersz_1 = 0;
	int temp_kolumna_1 = 0;
	int temp_wiersz_2 = 0;
	int temp_kolumna_2 = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 6; j++) {
			if (macierz_11[i][j] < najmniejszy11) {
				najmniejszy11 = macierz_11[i][j];
				temp_wiersz_1 = i;
				temp_kolumna_1 = j;
			}
			if (macierz_11[i][j] > najwiekszy11) {
				najwiekszy11 = macierz_11[i][j];
				temp_wiersz_2 = i;
				temp_kolumna_2 = j;
			}
		}
	} cout << "Najmniejszy element to: " << najmniejszy11 << " i znajduje sie w " << temp_wiersz_1 << " wierszu i " << temp_kolumna_1 << " kolumnie" << endl;
	cout << "Najwiekszy element to: " << najwiekszy11 << " i znajduje sie w " << temp_wiersz_2 << " wierszu i " << temp_kolumna_2 << " kolumnie" << endl;

	//zadanie 12 
	int macierz_12[6][6]{
		{ 1,2,3,9,8,7 },
		{ 5,9,6,1,0,8 },
		{ 2,7,9,9,5,0 },
		{ 3,4,5,6,7,2 },
		{ 5,8,9,3,2,1 },
		{ 2,7,4,9,7,8 }
	};
	int suma2 = 0;
	for (int i = 0; i < 6; i++) {
		suma2 = suma2 + macierz_12[i][5 - i];
	} cout << "Suma drugiej przekatnej macierzy to: " << suma2 << endl;


	//zadanie 13
	int blad = 0;
	int macierz_13[5][5]{
		{ 1,2,3,4,5 },
		{ 2,6,7,8,9 },
		{ 3,7,0,1,2 },
		{ 4,8,1,3,4 },
		{ 5,9,2,4,5 }
	}; for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (macierz_13[i][j] != macierz_13[j][i]) {
				blad = blad + 1;
			}
		}
	}
	if (blad == 0) {
		cout << "Macierz jest symetryczna" << endl;
	}
	else {
		cout << "Macierz nie jest symetryczna" << endl;
	}


	//zadanie 14
	double k = 2.2;
	int macierz_14[6][6]{
		{ 1,2,3,9,8,7 },
		{ 5,9,6,1,0,8 },
		{ 2,7,9,9,5,0 },
		{ 3,4,5,6,7,2 },
		{ 5,8,9,3,2,1 },
		{ 2,7,4,9,7,8 }
	};
	double macierz_mnozenie[6][6];
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			macierz_mnozenie[i][j] = macierz_14[i][j] * k;
			cout << macierz_mnozenie[i][j] << "\t";
		} cout << endl; 
	}
}
	