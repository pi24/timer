#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
	int seconds1 = 0;
	int hours1 = 0;
	int minutes1 = 0;
	int seconds2;
	int minutes2;
	int hours2;
	char placeholder;
	char choice;

	cout << "this is a timer and a stopwatch to choose the timer type -t-. to choose the stopwatch type -s-." << endl;
	cin >> choice;

	if(choice == 's')
	{
		cout << "stopwatch started" << endl;		

		while(seconds1 >= 0)
		{
			cout << hours1 <<" hours "<< minutes1 <<" minutes "<< seconds1 << " seconds " << endl;

			if(seconds1 == 60)
			{
				seconds1 = 0;
				minutes1 = minutes1 + 1;
			}
			if(minutes1 == 60 && seconds1 == 60)
			{
				minutes1 = 0;
				hours1 = hours1 +1;
			}
			seconds1 = seconds1 + 1;
			sleep(1);	
		}
	}
	if(choice == 't')
	{
		cout << "this is a timer -t- to countinue" << endl;
		cin >> placeholder;
		cout << "how many hours" << endl;
		cin >> hours2;
		cout << "how many minutes" << endl;			
		cin >> minutes2;

		if(minutes2 > 59)
		{
			cout << "invalid number must be below 59. if you want a high number then use hours." << endl;
			return 0;
		}

		cout << "how many seconds" << endl;
		cin >> seconds2;
	
		if(seconds2 > 59)
		{
			cout << "invalid number must be below 59. if you want a high number then use minutes." << endl;
			return 0;
		}
	
		cout << "timer has started" << endl;	
		while(hours2 +1 > 0)
		{
			cout << hours2 <<" hours "<< minutes2 <<" minutes "<< seconds2 << " seconds " << endl;

			if(seconds2 == 0)
			{
				seconds2 = 60;
				if(minutes2 != 0)
				{
				minutes2 = minutes2 -1;
				}
			}
			if(minutes2 == 0 && seconds2 == 1)
			{
				minutes2 = 60;
				hours2 = hours2 -1;
			}
			seconds2 = seconds2 - 1;
			sleep(1);	
		}
		cout << "timer has ended" << endl;
	}
}
