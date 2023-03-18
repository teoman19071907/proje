#include <iostream>
#include <cstring>

using namespace std;

int main() 
{
//Kullanıcı Kayıt sistemi
int sayi = "1"||"2";
char email[50];
char email2[50];
char sifre[50];
char girisemaili[50];
char sifre2[50];
const char* dogrumail = "teoman1998@hotmail.com";
const char* dogrusifre = "teoman123456";

cout<<"Kullanici Sistemine Hos geldiniz"<<endl;
cout<<"kayit olmak icin 1 giris yapmak icin 2 yaziniz"<<endl;
cin>> sayi;
if (sayi == 1)
{
    cout<<"email adresi yaziniz :";
    cin>>email;
    cout<<"email adresinizi tekrardan yaziniz :";
    cin>>email2;
    cout<<"Sifrenizi yaziniz :";
    cin>>sifre;
}

else if (sayi == 2)
{
    cout<<"email adresinizi giriniz :"<<endl;
    cin>>girisemaili;
    cout<<"sifrenizi giriniz :"<<endl;
    cin>>sifre2;
    if (strcmp(dogrumail, girisemaili) == 0 && strcmp(dogrusifre, sifre2) == 0)
    {
        cout<<"Basariyla giris yaptiniz";
    }
    else
    {
        cout << "Kullanici adi veya sifre hatali." << endl;
    }
}
else {
    cout<<"Yanlis secim yaptiniz , bir daha olmasin";
}
return 0;
}
