#include <string>
#include <iostream>
#include "person.h"
using namespace std;

//Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.

int main (){

	Person person1;

	person1.setName ("Jullya Lopes Machado");
	person1.setAge(20);
	person1.setCountry("Brazil and USA");

	cout << "Name is: " << person1.getName() << endl;
	cout << "Age: " << person1.getAge() << endl;
	cout << "Country: " << person1.getCountry() << endl;



return 0; 

}


