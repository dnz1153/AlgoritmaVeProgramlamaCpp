#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
int main(){
	//D��ardan girilen sat�r ve sutun say�s�na g�re matrise 2 basamakl� say�lar� rastgele atayan program� C++ kodlar�yla yaz�n�z.
    srand(time(NULL));
    int m,n;
    cout << "Kac satirli olsun :";
    cin >> m;
    cout << "Kac sutunlu olsun :";
    cin >> n;
    int matris[m][n];
    for(int i=0;i<m;i++){
    	for(int j=0;j<n;j++){
    		matris[i][j]=rand()%99+1;
    		cout << matris[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
