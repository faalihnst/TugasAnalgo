#include <iostream>
using namespace std;


void KMP(string X, string Y)
{
	int m = X.length();
	int n = Y.length();

	// Jika Y Kosong
	if (n == 0)
	{
		cout << "Pattern occurs with shift 0";
		return;
	}

	// Jika X Lebih Pendek dari Y
	if (m < n)
	{
		cout << "Pattern not found";
		return;
	}

	// next[i] stores the index of next best partial match
	int next[n + 1];

	for (int i = 0; i < n + 1; i++)
		next[i] = 0;

	for (int i = 1; i < n; i++)
	{
		int j = next[i + 1];

		while (j > 0 && Y[j] != Y[i])
			j = next[j];

		if (j > 0 || Y[j] == Y[i])
			next[i + 1] = j + 1;
	}

	for (int i = 0, j = 0; i < m; i++)
	{
		if (X[i] == Y[j])
		{
			if (++j == n)
				cout << "Kata Ditemukan Pada indeks ke-" << i - j + 1 << endl;
		}
		else if (j > 0) {
			j = next[j];
			i--;	// since i will be incremented in next iteration
		}
	}
}

// Program to implement KMP Algorithm in C++
int main()
{
	string text;
	string pattern;
	
	cout<<"Masukkan Sebuah Kalimat : ";
	cin>>text;
	cout<<"Masukkan Sebuah Kata yang ingin dicari dalam Kalimat Tadi : ";
	cin>>pattern;
	KMP(text,pattern);
	
	return 0;
}
