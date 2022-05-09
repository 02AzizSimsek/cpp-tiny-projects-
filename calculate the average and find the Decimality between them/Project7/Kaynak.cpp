/*


 **************************Ortalama Hesaplama**************************

#include<iostream>
#include<iomanip>

using namespace std;

float ortalama_hesapla(int n);

int main()
{
	int n;
	cout << "Kaç sayi gireceksiniz ?:";
	cin >> n;
	cout << fixed << setprecision(2);
	cout << "Girilen sayilarin Ortalamasi:" << ortalama_hesapla(n);
	return 0;
}
float ortalama_hesapla(int n) {
	int sayi;
	float toplam = 0;
	cout << "Sayilari Giriniz:";
	for (int i = 0; i < n; ++i) {
		cin >> sayi;
		toplam += sayi;

	}
	return toplam / n;
}

*/




/*

 **********************Aralaýnda asal Sayilari Bulma*******************************
  
#include<iostream>

using namespace std;

void aralarinda_asal_mi(int sayi_1, int sayi_2, bool *sonuc);

int main()
{
	int a, b;
	bool cevap;
	cin >> a >> b;
	aralarinda_asal_mi(a, b, &cevap);
	cout << (cevap ? "Aralarinda asal" : "Aralarinda asal degil");
	return 0;
}
void aralarinda_asal_mi(int sayi_1, int sayi_2, bool *sonuc) {
	//küçük sayiyi bul
	int kucuk_sayi = sayi_1;
	if (sayi_2 < kucuk_sayi)kucuk_sayi = sayi_2;
	//sayi_1 ve sayi_2 aralarýnda asal kabul edelim
	*sonuc = 1;
	//küçük sayiya kadar olan sayilari kalansýz bölme için dene...
	for (int i = 2; i <= kucuk_sayi; ++i) {
		//bir tane ortak bölen olmasý o iki sayinin aralýnda asal olmadýgý anlamýna gelir.
		if (sayi_1 % i == 0 && sayi_2 % i == 0) {
			*sonuc = 0;
			return;
		}
	}

}

*/