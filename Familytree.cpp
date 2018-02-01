#include "Familytree.h"

	
Familytree::Familytree () {
	username = " ";
	relation = " ";
}

 Familytree::Familytree (std::string firstName, std::string Fam) {

	username = " ";
	relation = " ";
}

 void Familytree::setName (std::string firstName) {
	username = " ";
}

 std::string Familytree::getName () {
	return username;
}
 
 void Familytree::setRelation (std::string Fam) {
	relation = Fam;
}
 
 std::string Familytree::getRelation (){
	return relation;
}
		

