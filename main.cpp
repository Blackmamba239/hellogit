#include "Familytree.h"
#include <iostream>
#include <vector>

using namespace std;

	int main()
	{

 Familytree James;

 Familytree Blake = {"Ron", "Father"};

 Familytree Jordan = {"June", "Mother"};

 Familytree Stephen = {"Tron", "Son"};

 Familytree Paul = {"Jake", "Son"};

 vector <Familytree> Slide;

 Slide.push_back(George);
 Slide.push_back(Jordan);
 Slide.push_back(Stephen);
 Slide.push_back(Paul);

for (int x = 0; x < Slide.size(); x++){

 cout << Slide[x].getName()<< " "<< Slide[x].getRelation()<<endl;
}
