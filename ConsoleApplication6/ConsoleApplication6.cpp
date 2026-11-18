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
	double srednia4 = suma4 / 10; 
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
	}
	int szczesliwy_numerek = (rand() % 10) + 1; 
	for (int i = 0; i < 10; i++) {
		if (szczesliwy_numerek == tablica_losowanka[i]) {
			suma5 = suma5 + 1; 
		}
	}
	cout << "Wylosowana liczba wystepuje w tablicy " << suma5 << "razy" << endl; 

	//zadanie 6 
	int macierz1[2][2] = {
		{2,4},
		{1,3}
	}; 
	int macierz2[2][2] = {
		{5,6},
		{7,8}
	}; 
	int macierzwynik[2][2]; 
	for (int i = 0; i < 2; i++) {
		for (int j = 0; i < 2; i++) {
			macierzwynik[i][j] = macierz1[i][j] + macierz2[i][j];
			cout << macierzwynik[i][j] << " ";
		} cout << endl; 
	}
	
}