#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

class schedule
{
private:
	string the_schedule[15][7];

public:
	schedule();
	~schedule();
	void setPosition(int, int, string);
	string getElement(int, int);
	string toString();
	bool insertElement(int, string, string);
	bool save();
	bool load();

};