#pragma once

//Libraries Used
#include <iostream> //Input/Output Stream For Console
#include <string>   //For String
#include <ctime>    //For Gettig Real Time


using namespace std;//Standart Namespace



//Delete Every Space In String
string noSpace(string input)
{
	size_t size = input.size(); //Get Size Of String
	char symbol; // Get A Char For Every Index
	string ans = ""; //Set Answer To Empty String
	for (size_t i = 0; i < size; i++) //Loop For Extracting Char From String
	{
		symbol = input[i]; //set Symbol To Given Index's Char
		if (symbol != ' ')//If Symbol Is Not Space
		{
			ans += symbol; //Add It To Ansewr
		}
	}
	return ans; //Give Answer
}

//Get Real Time
string timeAndDate()
{
	// current date/time based on current system
	time_t now = time(0);

	// convert now to string form
	char* dt = ctime(&now);
	string given = dt; //Convert It To Default String
	return given; //Give Time
}

//Get Time With Only Hour And Minute
string HourMin()
{
	//Get Real Time
	string given = timeAndDate();
	string HourMin;
	char symbol; //Symbol For Every Index
	for (int i = 11; i < 16; i++) //11 to 16 indec
	{
		symbol = given[i];
		HourMin += symbol; //Add It To Time
	}
	return HourMin; //Give Time
}