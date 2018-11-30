#include "stdafx.h"
#include "Password.h"
#include <string>
#include <iostream>
#include <algorithm>
#include <ctime>
#include <stdlib.h>


Password::Password()
{
}

Password::Password(std::string in_name, std::string in_phrase)
{
	name = in_name;
	phrase = in_phrase;
	std::string random_letter = "";
	std::string reversed = "";
}

void  Password::random_pre_num()
{
	int pre_rand;
	std::string rand_letter;
	srand(time(NULL));
	pre_rand = rand() % 26 + 65;
	//char Alphabet[25] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','X','Y','Z' };
	random_letter = (char)pre_rand;
}

int  Password::random_post_num()
{
	int post_rand;
	post_rand = rand() % 100;
	return post_rand;
}

void  Password::Get_input(std::string in_name, std::string in_phrase)
{
	std::cout << "Please enter your name: " << std::endl;
	getline(std::cin, name);
	std::cout << "Please enter a phrase (no spaces!): " << std::endl;
	getline(std::cin, phrase);
}

void Password::response()
{
	std::cout << "\n Please wait patiently while a password is being made....." << std::endl;
}

void Password::reverse()
{
	reversed = name;
	std::reverse(reversed.begin(), reversed.end());
}

void Password::alpha_phrase()
{
	std::sort(phrase.begin(), phrase.end());
}

void Password::Generate_pass(std::string pre, int post, std::string mid, std::string last)
{
	std::string  generated_pass;
	
	std::cout << std::endl << name << ", your password is: " << pre << mid << last << post << std::endl;
}

Password::~Password()
{
}
