#include <iostream>
using namespace std;
int fibonacci(int deger);
int main(){
	/*3. Fibonacci serisinin girilen terimine kadar olan de�erlerinin
toplam�n� veren program� rek�rsif fonksiyon kullanarak
yaz�n�z.*/
    int a;
    cout << "Sayi girin : ";
    cin >> a;
	cout << "Fibonacci hesabi : " << fibonacci(a);
	
	return 0;
}
int fibonacci(int deger){
	if(deger<=1){
		return 1;
	}
	else{
		return fibonacci(deger-1)+fibonacci(deger-2);
	}
}
