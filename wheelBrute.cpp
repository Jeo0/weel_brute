#include <iostream>
#include <ctime>
using namespace std;

double forCir(double long pasCir) {
	// dis = distance
	// rev = revolution
	// pie = 3.14
	// cir = circumference
	// dia = diameter
	double long pie = 3.14;
	double long answerCir = pasCir * pie;
	return answerCir;
}

double forRev(double pasRev){
	// dis = distance
	// rev = revolution
	// pie = 3.14
	// cir = circumference
	// dia = diameter
	int dis = 200;
	double  answerRev = dis / pasRev;

	return answerRev;//
}

int main()
{
	// dis = distance
	// rev = revolution
	// pie = 3.14
	// cir = circumference
	// dia = diameter

	int long long expDistance = 200;
	double dia = 0.00;
	do {
		for(int long long ar = 0; ar <= 100000000; ar++) {
			cout << "case " << ar << '\n';
			cout << "Diameter: " << dia << '\n';
			cout << "Circumference: " << forCir(dia) << '\n';
			double long formulaCir = forCir(dia);
			cout << "Revolution: " << forRev(formulaCir) << '\n';
			double long formulaRevolution = forRev(formulaCir);
			cout << "=============" << '\n';

			dia += 0.000001;
			double long finalAnswer = formulaCir * formulaRevolution;
				if(formulaRevolution == 0) {
					int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z; // for arr[]
					int arr[26] = {a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z};
					if(expDistance == finalAnswer) {
						//a =
						int num = 0;
						do{
							cout << num << ": " << arr[num] << '\n';
							num++;
							int idk = arr[num];
						}while (num <= 26);
					//return 0;
				}
			}
		}
	} while (dia <= 100.0);
}
