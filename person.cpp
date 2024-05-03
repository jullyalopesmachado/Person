#include <string>
#include <iostream>
using namespace std;
#include "person.h"

	void Person::setName(const string & n) {

	name = n;
	}	
	
        void Person::setAge(int a){
		
	age = a;	
		
	}

        void Person::setCountry(const string & c) {

	country = c;

	}

        string Person::getName(){

	return name;

	}


	int Person::getAge(){
	
	return age;

	}



        string Person::getCountry(){


	return country;


	}
