#include <iostream>

using namespace std;

int main() {
    char op;
    float num1, num2, result;

    cout << "Hesap makinesi programina hos geldiniz." << endl;
    cout << "Lutfen bir islem seciniz (+, -, *, /): ";
    cin >> op;

    cout << "Iki sayi giriniz: ";
    cin >> num1 >> num2;

    switch(op) {
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            result = num1 / num2;
            break;

        default:
            cout << "Hatali bir islem sectiniz." << endl;
            return 0;
    }

    cout << "Sonuc: " << result << endl;

    return 0;
}
