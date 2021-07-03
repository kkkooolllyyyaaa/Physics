#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
typedef double dd;
dd mr() {
	dd res = rand() / 32767.0;
	return res;
}
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	double a[100][6] = { 0 };
	double b[100][6] = { 0 };
	string s1, s2;
	dd const procent = 0.07645;
	//for (int i = 100; i <= 700; i += 25) {
	//	int ind = i / 25 - 3;
	//	cin >> a[ind][1] >> b[ind][1];
	//	cin >> a[ind][2] >> b[ind][2];
	//	cin >> a[ind][3] >> b[ind][3];
	//	cin >> a[ind][4] >> b[ind][4];
	//	cin >> a[ind][5] >> b[ind][5];

	//	dd s1 = 0, s2 = 0;
	//	s1 = a[ind][1] + a[ind][2] + a[ind][3] + a[ind][4] + a[ind][5];
	//	s2 = b[ind][1] + b[ind][2] + b[ind][3] + b[ind][4] + b[ind][5];
	//	s1 /= 5;
	//	s2 /= 5;

	//	dd ma1, ma2, mi1, mi2;
	//	ma1 = max(a[ind][1], max(a[ind][2], (max(a[ind][3], max(a[ind][4], a[ind][5])))));
	//	ma2 = max(b[ind][1], max(b[ind][2], (max(b[ind][3], max(b[ind][4], b[ind][5])))));
	//	mi1 = min(a[ind][1], min(a[ind][2], (min(a[ind][3], min(a[ind][4], a[ind][5])))));
	//	mi2 = min(b[ind][1], min(b[ind][2], (min(b[ind][3], min(b[ind][4], b[ind][5])))));
	//	for (int t = 1; t <= 5; t++) {
	//		dd x1 = ma1 - mi1;
	//		dd x2 = ma2 - mi2;
	//		printf("%.4lf ", x1*mr() + s1 - x1 / 2);
	//		printf("%.4lf\n", x2*mr() + s2 - x2 / 2);
	//	}
	//}

	//for (int i = 100; i <= 720; i += 5) {
	//	string s1, s2;
	//	cin >> s1 >> s2;
	//	s1[1] = ',';
	//	s2[1] = ',';
	//	//cout <<s1 << endl;
	//	cout << s2 << endl;
	//	//cout << s1 << ' ' << s2 << endl;
	//}
	for (int i = 100; i <= 700; i += 25) {
		string s;
		cin >> s;
		cout << '(' << i << ';' << s << ')' << ' ';
	}
	return 0;
}
	