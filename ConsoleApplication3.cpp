#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");

	//int a, b, c, d, ar;
	//cin >> a >> b >> c >> d;
	//ar = a + b + c + d;
	//ar = ar / 4;
	//cout << ar;

	//int min=1, max=40;
	//for (int i=0 ; i < max; ++i) {
	//	cout << i - i * (i % 2) << "\n";
	//}

	//int a;
	//cin >> a;
	//if (a <= 9) cout << "1 разряд";
	//else if (a <= 99) cout << "2 разряда";
	//else if (a <= 999) cout << "3 разряда";
	//else if (a <= 9999) cout << "4 разряда";
	//else if (a <= 99999) cout << "5 разряда";
	
	char s='*';
    int n;
    cin>> n;
    if (n % 2 == 0)n++;
    for (int i = 0; i < n; i++) {
        cout << s << " ";
    }
    cout << endl;
    for (int i = 0; i < n - 2; i++) {
        cout << "* ";
        for (int j = 0; j < n - 2; j++) {
                cout << "  ";

        }
        cout << "*" << endl;
    }
    for (int i = 0; i < n; i++) {
        cout << s << " ";

	}


}
