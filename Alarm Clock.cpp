#include "Alarm Clock.h"
using namespace std;


int main()	 //Run On Execute
{
	string command; //Command
	cout << "\nEnter Command : "; 
	getline(cin, command); //Get Command
	if (command == "setAlarm") //Set Alarm
	{
		string alTime;
		cout << "\nEnter Alarm Time : ";
		getline(cin, alTime); //Get Alarm Time
		string time;
		alTime = noSpace(alTime); //Delete Spaces
		while (true) //Loop
		{
			time = HourMin(); //Get Time Now
			if (time == alTime) //If Alarm Time
			{
				cout << "Alarm!"; //Show
				break; //Stop Loop
			}
		}
	}
	else if (command == "showTime") //Print Time
	{
		cout << timeAndDate();
	}
	return 0; //Do Not Give Anything
}	