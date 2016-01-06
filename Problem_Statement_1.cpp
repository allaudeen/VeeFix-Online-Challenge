#include <iostream>
#include <set>
#include <string>
#include <conio.h>

using namespace std;

int main() {

	int N;
	cin>>N;

	string input;
	set<string> setOfString;

	for(int i = 0; i < N; i++ ) {
		cin>>input;
		setOfString.insert(input);
	}

	int setSize = setOfString.size();
	for(set<string>::iterator setIterator = setOfString.begin(); setIterator != setOfString.end(); setIterator++) {
		cout<<*setIterator<<endl;
	}

	_getch();
	return 0;
}
