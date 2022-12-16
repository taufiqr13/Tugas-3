#include <iostream>
#include<cstdlib>

using namespace std;
int main ()
{
	int n, i, j;
	char coba_lagi;
	ulangi:
	
	system("cls");
	
	cout << "Input Jumlah Baris : ";
	cin >> n;
	
	if (n%2 == 0){
		
		cout << "Bilangan yang diinput harus bernilai ganjil";
		cout<<endl;
	}else {
		
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	for (i = n; i > 1; i--)
	{
		for(j = 1; j < i; j++)
		{
			cout << "*";	
		}
		cout << "\n";
		}
	}
	
	cout << "Coba Lagi Masukan nilai? (y/n)";
	cout<<endl;
	scanf("%s", &coba_lagi);
	if(coba_lagi == 'y'){
		goto ulangi;
	}else{
	cout << "Terimakasih. Tekan Enter Untuk Keluar.";	
	}
}