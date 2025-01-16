
#include<iostream>

using namespace std;
int main(){
int* user_input;
user_input = new int;

	*user_input = 25;
	cout << "the address of pointer" << &user_input << endl;
	cout << "the value of pointer is" << *user_input << endl;
delete user_input;
system("pause");
return 0;
}