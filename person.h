#include <iostream>
#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;
class Person{

	//Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.
	private: 

	string name;
	string country;
	int age;

	public:
	
	void setName(const string & n);
	void setAge (int a);
	void setCountry(const string & c);

	string getName();
	int getAge();
	string getCountry();

};
#endif





