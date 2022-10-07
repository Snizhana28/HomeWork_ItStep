//-------------------------------------------Homework 1---------------------------------------------------------//

/*Task 1. The user enters the distance from the keyboard
to the airport and the time it takes to get there. Calculate
the speed at which he needs to travel.*/

#include <iostream>
using namespace std;

int main()
{
	double s, t;
	cout << "Speed in km -> ";
	cin >> s;
	cout << "Time in min -> ";
	cin >> t;
	if (0 < s && t != 0 && 60 >= t && t > 0)                //in 1 hour 60 minutes
	{
		cout << "Speed -> " << s / t << " km/min" << endl;
	}
	else if (0 < s && t != 0 && 60 < t && t > 0)
	{
		cout << "Speed -> " << s / (t / 60) << " km/hour" << endl;
	}
	else
	{
		cout << "Eror!";
	}
	return 0;
}
/*Task 2. The user enters the start time from the keyboard
and time of end of scooter use (hours, minutes
and seconds). Calculate the cost of the trip, if the cost
minutes - 2 hryvnias.*/
#include <iostream> 
using namespace std;
int main()
{
    setlocale(0, "");
    int h1, m1, s1, h2, m2, s2; //hour, minute, second
    cout << "Enter the start time \nHour : ";
    cin >> h1;
    cout << "Minute : ";
    cin >> m1;
    cout << "Second : ";
    cin >> s1;
    cout << "Enter the end time \nHour : ";
    cin >> h2;
    cout << "Minute : ";
    cin >> m2;
    cout << "Second : ";
    cin >> s2;
    int suma, result;
    suma = (h2 - h1) * 3600 + (m2 - m1) * 60 + (s2 - s1);
    result = suma / 60 * 2;
    cout << "The cost of the trip : " << result << " uah.";
    return 0;
}
/*Task 3. The user enters the distance from the keyboard,
gasoline consumption per 100 km and the cost of three types of gasoline.
Display a comparative table with the cost of a trip on different types of fuel.*/
#include <iostream>
using namespace std;
int main() 
{
	setlocale(0, "");
	float x, y;
	cout << "Enter the distance (km) : ";
	cin >> x;
	cout << "Enter gasoline consumption (liters/km) : ";
	cin >> y;
	float a1, a2, a3;
	cout << "Enter the cost of benzine (A-95+) : ";     // A95premium = 49.50; A95 = 49.00; float A92 = 48.00;
	cin >> a1;
	cout << "Enter the cost of benzine (A-95) : ";
	cin >> a2;
	cout << "Enter the cost of benzine (A-92) : ";
	cin >> a3;
	float res1 = x * y * a1;
	float res2 = x * y * a2;
	float res3 = x * y * a3;
	cout << "Comparative table of the cost of travel on different types of benzine :" << endl;
	cout << "A-95+  | " << res1 << endl;
	cout << "A-95   | " << res2 << endl;
	cout << "A-92   | " << res3 << endl;
	return 0;
}

//-------------------------------------------Homework 2---------------------------------------------------------//
/*Task 1. The user enters the time from the keyboard in seconds that have passed since the beginning of the day. Display the current one
time in hours, minutes and seconds. Count how much
hours, minutes and seconds left until midnight.*/

#include <iostream> 
using namespace std;
int main()
{
	setlocale(0, "");
	int second ; 
	cout << "Enter the time in seconds since the start of the day : ";
	cin >> second; 
	int hours = second / 3600;
	int min = second / 60 - hours * 60;
	int sec = second - min * 60 - hours * 3600;
	cout << hours << " hours " << min << " min " << sec << " sec ";
	return 0;
}
/*Task 2. The user enters the time from the keyboard in seconds that have passed since the beginning of the working day. to count
how many whole hours he has left to sit at work,
if the working day is 8 hours.*/
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	const int workDay = 480; // 28800 sec = 480 min
	int s, m, result;
	cout << "Enter the time in seconds that have passed since the beginning of the working day : ";
	cin >> s;
	m = s / 60;
	result = (workDay - m) / 60;
	if ( result == 1 || result == 0 )
	{
		cout << "You have to is sit at work " << result << " hour.";
	}
	else if ( 1 < result < 8 )
	{
		cout << "You have to is sit at work " << result << " hours.";
	}
	else
	{
		cout << "Error!";
    }
	return 0;
}