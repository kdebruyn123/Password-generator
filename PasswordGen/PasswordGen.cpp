// PasswordGen.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Password.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>
#include <stdlib.h>


int main()
{
	
	std::string name;
	std::string pre_letter;
	std::string phrase;
	std::string organised_phrase;
	int post_rand;
	std::string reverse_name;
	

	Password Pass;
    Pass.random_pre_num();
	pre_letter = Pass.random_letter;

	post_rand = Pass.random_post_num();

    Pass.Get_input(name,phrase);
	Pass.response();

	Pass.reverse();
	reverse_name = Pass.reversed;

	Pass.alpha_phrase();
	organised_phrase = Pass.phrase;

	Pass.Generate_pass(pre_letter, post_rand, reverse_name, organised_phrase);

	return 0;
}

