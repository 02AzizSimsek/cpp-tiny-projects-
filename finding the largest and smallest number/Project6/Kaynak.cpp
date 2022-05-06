/*
                **************EN BÜYÜK SAYÝYÝ BULMA****************** 
#include<iostream>

using namespace std;

int en_buyuk_sayi(int n);

int main()
{
	int n;
	cout << "Kac sayi  gireceksiniz:";
	cin >> n;
	cout << "Girilen sayilar arasýnda en buyuk olani:" << en_buyuk_sayi(n);
	return(0);
}
int en_buyuk_sayi(int n)
{
	int enBuyuk = 0;
	int sayi;
	cout << "Sayilari giriniz:";
	for (int i = 0; i < n; ++i) {
		cin >> sayi;
		if (sayi > enBuyuk)
			enBuyuk = sayi;
	}
	return enBuyuk;
}

*/

/*

              ************** EN KüçüK SAYÝYÝ BULMA******************
#include<iostream>

using namespace std;

int en_kucuk_sayi(int n);
int main()
{
	int n;
	cout << "Kaç Sayi Giriceksiniz:";
	cin >> n;
	cout << "Girilen sayilar arasinda en kucugu:" << en_kucuk_sayi(n);
	return 0;
}
int en_kucuk_sayi(int n)
{
	int enKucuk = 1000000;
	int sayi;
	cout << "Sayilari Giriniz:";
	for (int i = 0; i < n; ++i) {
		cin >> sayi;
		if (sayi < enKucuk)
			enKucuk = sayi;
	}
	return enKucuk;
}

*/