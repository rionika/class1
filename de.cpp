#include "base64.h"
#include <iostream>
#include <algorithm>
#include <string>




int main(){


//int clave;
string msg;

	 msg = "kkjsdkjfksajfksdj==";
	
	msg.erase(10,1).erase(18,1).erase(24,1).erase(27,1);
	cout <<"1st subtraction\n"<< msg<<endl;
	
	auto nuevo = base64::Descifrar(msg);
	msg = nuevo; 
	
	cout << "\n1st Decoded message:\n" << msg<<endl;


	msg.erase(10,1).erase(18,1).erase(24,1).erase(27,1);
	cout<<"\n2nd subtraction:\n"<<msg<<endl;
	
	cout<<"Give the code: ";
	cin>> ws;
	getline(cin, msg);
	
auto nuevo1 = base64::Descifrar(msg);
	msg=nuevo1;
	
cout << "\nFinal code: \n" <<msg<<endl;



return 0;
}
