#include<iostream>

using namespace std;


	int main()
	{
		int a=0,b=0;
		cout << "Satir Sayisi : " ;
		cin >> a ;
		cout << endl ;
		cout << "Sutun Sayisi : " ;
		cin >> b ;
		cout << endl << endl ;
		int dizi[a][b];
		
		for(int i=0 ; i<a ;i++)
			{
				for(int j=0 ; j<b ; j++)
					{
						cout << "*" ;
					}
				cout << endl ;
			}
		
	}
