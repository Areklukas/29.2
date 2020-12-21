#include <iostream>
#include <fstream>

using namespace std;
class liczba_zad
{
    int liczba;
	public:
    int odwroc_liczbe(); 
    bool czy_suma_jest_palindromem();      
  	private:
    string zamien_liczbe_na_string();
    string odwroc_liczbe_str(string liczbastr); 
    bool czy_palindrom_string(string liczbastr); 
};
void liczba_zad::odwroc_liczbe()
{
	string wynik = odwroc_liczbe_str(zamien_liczbe_na_string(liczba));
	string str = wynik;
    int liczba_druga = strtol(str.c_str(), nullptr, 10);
    int suma = liczba_druga+liczba;
    string suma1 = zamien_liczbe_na_string(suma);
}
void liczba::czy_suma_jest_palindromem()
{
    bool tak_czy_nie = czy_palindrom_string(string suma1);
}
void liczba_zad::odwroc_liczbe_str(string liczba)
{
    ifstream plik;
	plik.open("liczby.txt");
	while(plik.good())
	{
    	plik>>liczba;
	do
    {
        cout << liczba % 10;
        liczba /= 10;
    } 
	while (liczba);
	}
}
void liczba_zad::czy_palindrom_string(string liczba)
{
    int back = liczba.length()-1;
    bool palindrome = true;
    for (int i=0; i<liczba.length()/2 && palindrome; i++)
    if (liczba[i] != liczba[back--])
    palindrome = false;
    return palindrome;
}
void liczba_zad::zamien_liczbe_na_string()
{
    string str = to_string(liczba);
}
int main(int argc, char** argv) 
{
    liczba_zad l;
    l.odwroc_liczbe();
    l.czy_suma_jest_palindromem();
    
    return 0;
}
