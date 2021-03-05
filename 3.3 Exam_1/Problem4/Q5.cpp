#include <iostream>
#include <fstream>
#include <map>
#include <string>

// Include any additional libraries you'd like up here...
// Remember your must use map as your primary data structure!

using namespace std;

// Define any helper functions you like up here...



int main(int argc, char * argv[]) {
	// Q5a
	map< int, string> m;
	

	// Q5b
	while(true){
		int isbn, counter = 0;
		string book;
		
		cout << "Type in the details for a book and hit enter to add to the catalog." << endl;
		cout << "Alternatively, type \"-1\" and hit enter to exit this program." << endl;
	
		cout << "Insert the book's ISBN: " << endl;
		cin >> isbn;
		if(isbn == -1){
			break;
		}
		for(map<int, string>::iterator iter = m.begin(); iter != m.end(); iter++){
			if(isbn == iter->first){
				cout << "A book with that ISBN is already in the library!" << endl;
				counter++;
			}
		}
		if(counter == 1){
			continue;
		}

		cout << "Insert the book's title: " << endl;
		cin >> book;
		m.insert(pair<int, string>(isbn, book));
	}

	// Q5c
	ofstream output;
	output.open("library_list.txt", ofstream::out);
	for(map<int, string>::iterator iter = m.begin(); iter != m.end(); iter++){
		output << m[iter->first] << endl;
	}

	output.close();

	return 0;
}
