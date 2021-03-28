#include<iostream>
#include<fstream>
#include<string>
#include<process.h>
#include<cstdlib>
#include<EH.h >

using namespace std;

		
		
		
		int main()
		{
		menu:
		cout <<"------HOSGELDINIZ----"<<endl;	
		cout << "-----MENU-----" << endl;
		cout << "1 - Ogrenci ekleme" << endl;
		cout << "2 - Ogrenci not hesabi" << endl;
		cout << "3 - Dosyadaki Bilgileri Ekrana Yaz" << endl;
		cout << "4 - Tum Verileri Sil" << endl;
		cout << "5 - Programi Kapat" << endl<< endl<< endl;
		
		int secim;
		cout << "Seciminiz---->";
		cin >> secim;
		cout << endl << endl << endl ;
		
				if(secim==1)
				{
					cout << "------------KAYIT TABLOSU-------------" << endl;
				
				string h,g,durum=" ";
				int a,d,e,ortalama;
				cout << "Ogrenci Numarasi : " ;
				cin >> a;
				cout << "Ad : " ;
				cin >> h;
				cout << "Soyad : " ;
				cin >> g;
				cout << "Vize Notu : " ;
				cin >> d;
				cout << "Final Notu : " ;
				cin >> e;
				ortalama=e*0.6+d*0.4;
				 if(ortalama>=50)
				 {
				 	durum="GECTI";
				 }
				 else
				 {
				 	durum="KALDI";
				 }
				 
				fstream dosya;
				dosya.open("dosya1.txt", ios::out | ios::app);
				
					if(dosya.is_open())
					{
						dosya << a << " " ;
						dosya << h << " " ;
						dosya << g << " " ;
						dosya << d << " " ;
						dosya <<e << " " ;
						dosya << ortalama << " ";
						dosya << durum << endl ;
						cout << "              >>>>>Kayit Islemi Yapildi<<<<<" << endl << endl << endl;
					}
				dosya.close();
				cout << "<=================================================================================================>" << endl << endl ;
				goto menu;
				}
			else if(secim==2)
			{
				
				cout << "                      >>>>>Basari Puani ve Durumu Hesaplandi<<<<<" << endl << endl << endl;
				cout << "<=================================================================================================>" << endl << endl ;
				goto menu;
				
			}
			else if(secim==3)
			{
				cout << "Ogr. Num./ Ad / Soyad / Vize / Final / Ortalama / Durum" << endl ;
				
				fstream dosya;
				dosya.open("dosya1.txt", ios::in | ios::out | ios::app);
				string yaz;
				if(dosya.is_open())
				{		
					while(!dosya.eof())
					{
						
						for(int i=0 ; i<7 ; i++)
						{
							getline(dosya,yaz);
							cout << yaz ; 
							cout << endl;
						}						
					}
					cout << ">>>>>>Ekrana Yazdirma Basarili<<<<<<" << endl << endl << endl;
				}
				dosya.close();
				cout << "<=================================================================================================>" << endl << endl ;
				goto menu;		
			}
			else if(secim==4)
			{		
				int sonuc = remove("dosya1.txt");

				  if(sonuc == 0)
				  {
				    cout << ">>>>>>Dosya silindi<<<<<<" << endl << endl;
				  } 
				  else {
				    cerr << ">>>>>>Dosya'da Veri Yok!!!<<<<<<" << endl << endl << endl << endl;
				    goto menu;
				  }
			}
			else if(secim==5)
			{
				system("exit");
			}
			
		
		}
		
		

