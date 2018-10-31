
#include <iostream>
using namespace std;
 
	 int main(void) {
		 int i = 0, n;
		 cin >> n;
		 while (n != 1) {
			 if (n % 2 != 0) {
				 n = (3 * n + 1) / 2;
				 i++;
			 }
			 else {
				 n = n / 2;
				 i++;
				 }
		 }
		 cout << i;
		 system("pause");
		 return 0;
	 }
 


