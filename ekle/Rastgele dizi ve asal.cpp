#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
int main(){
	//10 elemanl� diziye 50-100 aral���ndaki rastgele say� atayarak, bu say�lar�n asal olup olmad�klar�n� ekrana yazd�ran program kodlar�n� C++ ile yaz�n�z.
	srand(time(NULL));
	int dizi[10],sayac=0;
	for(int i=0;i<10;i++){
		sayac=0;
		dizi[i]=rand()%50+50;
		for(int j=2;j<dizi[i];j++){
			if(dizi[i]%j==0){
				sayac++;
			}
			}
			if(sayac==0){
				cout << dizi[i] << " Asaldir" << endl;
			}
			else{
				cout << dizi[i] << " Asal degil" << endl;
			}
		
	}
	
	
	return 0;
}
