#pragma once

#include <iostream>
using namespace std;

class Card
{
public:
	Card();
	Card(std::string value, std::string suit);

	string suit = "";
	string value = "";
private:

};