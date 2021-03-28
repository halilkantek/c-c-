#include<iostream>

using namespace std;
	
	float pi=3.14;

	void hesapla(int yaricap,float *cevre,float *alan)
	{
		float cevr=0 ,aln=0;
		
		
		
		cevre=&cevr;
		alan=&aln;		
		cevr=2*pi*yaricap;
		aln=pi*yaricap*yaricap;
		cout << "Cevresi : " << cevr << endl ;
		cout << "Alani : " << aln << endl ;
	}
	
	
	
	int main()
	{
		
		int a=0;
		float *cevre=0 ,*alan=0;		
		
		cout << "Yaricap Giriniz : " ; 
		cin >> a;
		hesapla(a,cevre,alan);
	}
