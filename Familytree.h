#ifndef Familytree_h
#define Familytree_h
#include <string>
	
class Familytree {
		
	public:

 Familytree (std::string firstName, std::string Fam);

 void setName (std::string firstName);

 std::string getName ();

 void setRelation (std::string Fam);

 std::string getRelation ();

	private:

	std::string username;
	std::string relation;

};
#endif
		
