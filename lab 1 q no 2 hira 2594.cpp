
#include<iostream>

using namespace std;

	



		void modifyCOINVALUE(int *ptr){
			if (*ptr % 2 == 0){
				*ptr = *ptr * 2;
				cout << "the modifiedcoin value is" << *ptr << endl;
			}
			else{
				*ptr += *ptr;
				cout << "the modifiedcoin value is" << *ptr << endl;
			}
			
		}
		int main(){
			int coinvalue;
			int* ptr = &coinvalue;
			cout << "enter the coin value" << endl;
			cin >> *ptr;
			modifyCOINVALUE(ptr);
		
	cout << endl;
	system("pause");
	return 0;
}