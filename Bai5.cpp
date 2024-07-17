#include <iostream>

using namespace std;

int main() {
	float a, b, c;
	cout << " Nhập vào số a : ";
	cin >> a;
	cout << " Nhập vào số b : ";
	cin >> b;
	cout << " Nhập vào số c : ";
	cin >> c;

	if (a == b){
		cout << "Loi: khong the chia cho 0 (a-b = 0)." << endl;

	}
	else{
		int ketqua = c / (a - b);
		cout << "Ket qua cua c/(a-b) la: " << ketqua << endl;
	}
	cin.ignore();
	cin.get();
	return 0;
}
