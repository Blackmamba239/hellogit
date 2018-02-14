#ifndef Familytree_h
#define Familytree_h
#include <string>
using namespace std;
	
class Familytree {
		
public:

Familytree (); 

Familytree (string firstName, string Fam);

void setName (string firstName);

string getName ();

void setRelation (string Fam);

string getRelation ();


private:

string username;

string relation;

};
#endif
		
