#include<iostream>
using namespace std;


int main() {
	float kg, h;
	float bmi;
	cin >> kg >> h;
	bmi = kg / (h * h);  

	if (bmi <= 18.5) {
		cout << " Co the ban Gay va nguy co phat benh Thap";
	}
	else if (bmi <= 25.0) {
		cout << "Co the ban bth nguy co phat benh trung binh";
	}
	else if (bmi <= 30.0) {
		cout << "Co the ban hoi beo nguy co phat benh cao";
	}
	else if (bmi <= 35.0) {
		cout << "Co the ban Beo phi cap 1 nguy co phat benh hoi cao";
	}
	else if (bmi <= 40.0) {
		cout << "Co the ban Beo phi cap 2 nguy co phat benh cao";
	}
	else if (bmi > 40.0) {
		cout << "Co the ban Beo phi cap 3 nguy co phat benh cuc cao";
	}
}
 