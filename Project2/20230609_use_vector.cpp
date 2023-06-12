/*
Q2. ex) x,y,z : 1 2 3
		x,y,z : -4 -5 6
		v1 length : 3.74166
		v2 length : 8.77496
		v1 ø° 3¿ª ∞ˆ : 3 6 9
		v2∏¶ 2∑Œ ≥™¥Æ : -2 -2.5 3
		µŒ ∫§≈Õ¿« dot : xx
		µŒ ∫§≈Õ¿« cross : 27 -18 3
		µŒ ∫§≈Õ¿« ªÁ¿Ã∞¢ : 83.0023
*/

#include "20230609_vector.h"

using namespace std;

int main()
{
	cVector3 v1(1, 2, 3);
	cVector3 v2(-4, -5, 6);

	cout << "µŒ ∫§≈Õ¥¬ ∞∞¿∫∞°? " << (v1 == v2) << endl;
	cout << "µŒ ∫§≈Õ¥¬ ¥Ÿ∏•∞°? " << (v1 != v2) << endl;
	cout << endl;
	cout << "v1 length : " << v1.length() << endl;
	cout << "v2 length : " << v2.length() << endl;
	cout << endl;
	cout << "v1ø° 3¿ª ∞ˆ : " << (3 * v1) << endl;
	cout << endl;
	cout << "µŒ ∫§≈Õ¿« µ°º¿ : " << (v1 + v2) << endl;
	cout << "µŒ ∫§≈Õ¿« ª¨º¿ : " << (v1 - v2) << endl;
	cout << "µŒ ∫§≈Õ¿« ≥™¥∞º¿ : " << (v1 / v2) << endl;
	cout << endl;
	cout << "µŒ ∫§≈Õ¿« dot : " << v1.Dot(v2) << endl;
	cout << "µŒ ∫§≈Õ¿« cross : " << v1.Cross(v2) << endl;
	cout << "µŒ ∫§≈Õ¿« ªÁ¿Ã∞¢ : " << v1.Angle(v2) << endl;
	cout << endl;
	cout << "v1¿ª normalize : " << v1.Normalize() << endl;

	return 0;
}