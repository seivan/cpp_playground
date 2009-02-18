#include <iostream>
using namespace std;

int main()
{
	int iMax = 0, iSum = 0;
	cout << "Ange övre gräns: " << endl;
	cin >> iMax;

	cout << "Perfekta tal: ";

	for (int num = 1; num < iMax; num++)
	{
		for (int comp_num = 1; comp_num < num; comp_num++)
			if (num % comp_num == 0)
				iSum += comp_num;

		if (iSum == num)
			cout << " " << num;

		iSum = 0;
	}

	return 0;
}
