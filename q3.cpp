#include<iostream>
#include<ctime>
#include<iomanip>
using namespace std;

int main()
{
	time_t current_time;
	current_time = time(NULL);

	char *time = ctime(&current_time);
	cout << "Today is : " << time;
	
	return 0;
}