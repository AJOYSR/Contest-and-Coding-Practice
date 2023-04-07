//CPP code to illustrate operators in pair
#include <iostream>
#include<utility>
using namespace std;

int main()
{
	pair<int, int>pair1 = make_pair(1, 12);
	pair<int, int>pair2 = make_pair(9, 12);
/// Output 1 mane true 0 mane false

	cout << (pair1 == pair2) << endl;
	cout << (pair1 != pair2) << endl;
	cout << (pair1 >= pair2) << endl;
	cout << (pair1 <= pair2) << endl;
	cout << (pair1 > pair2) << endl;
	cout << (pair1 < pair2) << endl;

	return 0;
}

