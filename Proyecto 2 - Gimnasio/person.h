#include <iostream>
using namespace std;



class person
{
private:
	string id;
	string full_name;
public:
	person();
	void setId(string);
	void setFullName(string);
	string getId();
	string getFullName();
	~person();
};

