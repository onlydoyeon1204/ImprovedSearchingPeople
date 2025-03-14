#pragma once
#include <iostream>
#include <string>
using namespace std;

class People
{
	struct Member //Section of Information
	{
		string group;
		string agency;
		string debut;
		string mbti;
		string birthday;
	};

public:  //Public Variation & Function Declaration
	int getAverageage(int member);
	void output_information();
	void print_member(Member member);
	int checkAverageage(string ans);
	string name;
	string ans;
	string isTrue = "TRUE";

private: //Private Variation & Function Declaration
	int number, average, member;
	int age;
	int sum = 0;
};