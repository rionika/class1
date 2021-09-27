#include "base64.h"
#include <iostream>
#include <algorithm>
#include <string>
int main(){


	string msg = "hi, im biginer";
	
	//auto nuevo = base64::Cifrar(msg);
	//cout << "\nEncoded message: " << nuevo<<endl;
	
	auto nuevo = base64::Cifrar(msg);
	string bs = nuevo; 
		cout << "\n1st Encoded message:\n" << bs<<endl;
		bs.insert(10, "L").insert(19,"o").insert(26,"v").insert(30,"e");
		cout <<"1st addition \n"<< bs;
	
	auto nuevo1 = base64::Cifrar(bs);
	bs = nuevo1; 
	
	cout << "\n2nd Encoded message:\n" << bs<<endl;
	bs.insert(10, "A").insert(19,"k").insert(26,"a").insert(30,"s");
	cout << "\nFinal code:\n"<<bs<<endl;



return 0;
}
