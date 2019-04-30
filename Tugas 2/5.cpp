/*
Nama	: Natillah Faalih Nanda Mustika Nasution
Kelas	: B
NPM 	: 140810170044
Nama Program : Selection Sort
*/
#include <iostream>
#include<conio.h>

using namespace std;

int data[100],data2[100];
int n;

void tukar(int a, int b)
{
	int t;
	t = data[b];
	data[b] = data[a];
	data[a] = t;
}
void selection_sort()
{
	int pos,i,j;
	for(i=1;i<=n-1;i++)
	{
	    pos = i;
	    for(j = i+1;j<=n;j++)
	    {
		   if(data[j] < data[pos]) pos = j;
		}
        if(pos != i) tukar(pos,i);
    }
}

int main()
{
	cout << "\n=====================================";
	cout<<"\nMasukkan Jumlah Data : ";cin>>n;
	cout << "\n-------------------------------------" << endl;
	for(int i=1;i<=n;i++)
	{
		cout<<"Masukkan data ke-"<<i<<" : ";
		cin>>data[i];
		data2[i]=data[i];
	}
	
	selection_sort();
	cout << "\n-------------------------------------" << endl;
	cout<<"Data Setelah di Sort : "<<endl;
	for(int i=1; i<=n; i++)
	{
	  	cout<<" "<<data[i];
	}
	
	cout << "\n=====================================\n";
	getch();
}

