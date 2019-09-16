//***This is my Mad Libs Program
//
#include <iostream>
	using namespace std;
int main (void)
{
	cout << "Welcome to my interactive story!" << endl;   // make the constant welcoming text
	cout << "" << endl;
	cout << "Please enter the following information:" << endl;
	cout << "" << ; 
	cout << "A Name: ";// start getting info for later
	cin >> name << endl;
	cout << "An Adjective: ";
	cin >> adjective << endl;
	cout << "A Color: ";
	cin >> color << endl;
	cout << "An Animal: ";
	cin >> animal << endl;
	cout << "A Positive Integer: ";
	cin >> integer << endl;
	cout << "Another Positive Integer: ";
	cin >> integerTwo << endl;
	cout << "" << endl;
	cout << "It was a " << adjective << " kind of day when " ;
	cout << name << " walked out into the street. The sky was a deep " ;
	cout << color << ", and " << name << " was walking a new pet " ;
	cout << animal << " when suddenly they came upon " << integer << " orphaned kittens. ";
	cout << "Knowing that the orphaned kittens needed a home, it took " << integerTwo << " days for " << name << " to locate a home for wch kitten."<< endl;
	cout << "" << endl;
	cout << "After 45 days, all the kittens had a home and " << name << " and the pet " << animal << " were careful about what they came upon during any future walks. " << endl;
	cout << "" << endl;
	cout << "End of story!" << endl;
	return 0;
}