/*
Nama	: Natillah Faalih Nanda Mustika Nasution
Kelas	: B
NPM 	: 140810170044
Nama Program : Sequential Search
*/
#include <iostream>
using namespace std;

main()
{
    int n, cari, A[100], index, jwb;
	bool ketemu = false;
	cout << "\n=====================================";
	cout << "\nMasukan banyak data =  "; cin >> n;
	cout << "\n-------------------------------------" << endl;	  
	
	for(int i=0; i<n; i++)
	{
	   cout << "Data ke-" << i+1 << " : ";
	   cin >> A[i];
	}
	
	cout << "\nMasukan data yang akan dicari : "; cin >> cari;
	cout << "\n-------------------------------------" << endl;
	  
	for(int i=0; i<n; i++){
	    if(A[i] == cari){
	 	    ketemu = true;
	        index = i;
	    	i = n;
	   }
	}
	if(ketemu == true){
	   cout << "Data telah ditemukan pada data ke-" << index+1;
	}
	else{
	   cout << "Maaf. Data tidak ditemukan!";
	}
	cout << "\n=====================================" << endl;
	cout << "\n";
	system("pause");
}
