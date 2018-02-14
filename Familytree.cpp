#include "Familytree.h"
#include <string>
using namespace std;
	
Familytree::Familytree () {
	username = " ";
	relation = " ";
}

Familytree::Familytree (string firstName, string Fam) {

	username = firstName;
	relation = Fam;
}


void Familytree::setName (string firstName) {
	username = firstName;
}


string Familytree::getName () {
	return username;
}
 

void Familytree::setRelation (string Fam) {
	relation = Fam;
}
 

string Familytree::getRelation (){
	return relation;
}
		

