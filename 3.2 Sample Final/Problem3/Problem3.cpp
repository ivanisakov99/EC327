#include <iostream>
#include <fstream>
#include <list>
#include <string>

// Include any additional libraries you'd like up here...
// Remember your must use list as your primary data structure!

using namespace std;

// Define any helper functions you like up here...


int main(int argc, char * argv[]) {
	// Q4a
	// Declare your list here!
	list<string> items;
	list<string>::iterator iter = items.begin();
	string temp;

	// Q4b
	cout << "Type in a grocery item and hit enter to add to the list." << endl;
	cout << "Alternatively, type \"N\" and hit enter to exit this program." << endl;
	// Take in user input and parse it here!
	while (42) {
		cin >> temp;
		if(temp == "N"){break;}
		for(iter = items.begin(); iter != items.end(); iter++){
			if(*iter == temp) {
				cout<<"An item with that name is already included in the list!"<<endl;
				temp.clear();
			}
		}
		if(temp != "N" && !temp.empty()){
			
			items.push_back(temp);
			temp.clear();
		}
	
	}
	//items.unique();

	// Q4c
	// Sort your list here!
	items.sort();

	// Q4d
	// Do your file handling here!

	ofstream output("grocery_list.txt");
	for(iter = items.begin(); iter != items.end(); iter++){
		output << *iter << endl;
	}
	output.close();
	
	return 0;
}







