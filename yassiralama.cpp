#include <iostream>
using namespace std;
int main()
{ 
    int dizi[100], gecici, adet,ara;
    string k;
    cout<<"Kac kisi girilecek: ";
    cin>>adet;  
    for(int m=0; m<adet; m++)
	{  
		cout<<m+1<<"- "<<"isim giriniz: ";
		cin>>k;
        cout<<m+1<<"- "<<"yas giriniz: ";
        cin>>dizi[m];
    }
    for(int i=0; i<adet-1;i++)
	{ 
        for(int j=i+1; j<adet; j++)
		{
            if(dizi[i] > dizi[j])
			{
                gecici = dizi[i]; 
                dizi[i] = dizi[j]; 
                dizi[j] = gecici; 
            }
        }
    }
    cout<<endl;
        for(int i=0; i<adet; i++)
            cout<<k[i]<<" "<<dizi[i]<<" yasinda "<<endl;    
    cout<<endl;
    return 0;
}
