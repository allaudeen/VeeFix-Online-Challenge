#include <iostream>
#include <conio.h>

using namespace std;

#define NUM_OF_ITEMS 3

int main() {

	int T;
	cin>>T;

	for(int i = 0; i < T; i++) {
		int N;
		cin>>N;
		int minCostOfTotalShopping = 0;
		for(int j = 0; j < N; j++) {
			int minCost = 105;
			int cost;
			for(int k = 0; k < NUM_OF_ITEMS; k++) {
				cin>>cost;
				if(cost < minCost) {
					minCost = cost;
				}
			}
			minCostOfTotalShopping += minCost;
		}
		cout<<minCostOfTotalShopping<<endl;
	}

	_getch();
	return 0;
}
