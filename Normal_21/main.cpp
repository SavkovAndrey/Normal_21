#include <iostream>
#include <string>

using namespace std;
//---------------------������� � ���������---------------------------------------

void �ddRightDigit(string d, string &k)
{

	k = k + d;
	cout << "K = " << k << endl;
}



//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	//-------------------------------���� �����-------------------------------------

	int x = 1;
	string k, d;

	cout << "Enter K: ";
	cin >> k;

	
	while (x == 1)
	{
		cout << "Enter D: ";
		cin >> d;

		�ddRightDigit(d, k);

		cout << "\nUse the function yet? (yes - 1 , no - 2)\n";

		cin >> x;

	}

	system("pause");
	return 0;
}
