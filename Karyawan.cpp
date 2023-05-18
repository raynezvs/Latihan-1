#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	string data [100][100];
	int pilihan, marker1, counter, datacounter, pil1check;

	pilihan = 5; //default loop
	datacounter = 1;
	
	while (pilihan!=0)
	{
		cout << "Masukkan Pilihan Menu" << endl;
		cout << "1: masukkan data" << endl;
		cout << "2: hapus data" << endl;
		cout << "3: tampilkan data" << endl;
		cout << "4: cari karyawan" << endl;
		
		cin >> pilihan;
		if (pilihan==1){marker1=2;}
		
		if (pilihan == 1)
		{
			
			while (marker1 == 2)
			{
				cout << "masukkan kode karyawan" << endl;
				cin >> data[datacounter][datacounter];
				
				cout << "masukkan nama karyawan" << endl;
				cin >> data[datacounter][datacounter+1];
				
				cout << "masukkan alamat karyawan" << endl;
				cin >> data[datacounter][datacounter+2];
				
				cout << "masukkan golongan karyawan" << endl;
				cin >> data[datacounter][datacounter+3];
				
				cout << "status menikah" << endl;
				cout << "0: belum menikah" << endl;
				cout << "1: sudah menikah" << endl;
				cin >> pil1check;
				
				if (pil1check==0)
				{
					data[datacounter][datacounter+4] = "Belum Menikah";
				}
				else if (pil1check==1)
				{
					cout << "masukkan jumlah anak" << endl;
					cin >> data[datacounter][datacounter+4];
				}
			
			cout << "masukkan data lagi?" << endl;
			cout << "1: kembali ke menu utama" << endl;
			cout << "2: tambah data kembali" << endl;
			cin >> marker1;
			
			if (marker1 == 1){pilihan = 5;}
			
			}
			
		}
		
		
		
		if (pilihan == 3)
		{
			
		}

	}
	
}
