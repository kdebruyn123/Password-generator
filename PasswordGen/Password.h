#pragma once
#include <string>

class Password
{
public:
	Password();
	Password(std::string in_name, std::string in_phrase);
	~Password();
	void random_pre_num();
	int random_post_num();
	void Get_input(std::string in_name, std::string in_phrase);
	void response();
	void reverse();
	void alpha_phrase();
	void Generate_pass(std::string pre, int post, std::string mid, std::string last);
	std::string random_letter;
	std::string reversed;
	std::string phrase;

private:
	std::string name;


	

};

