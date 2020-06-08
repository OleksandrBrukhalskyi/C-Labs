#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include<fstream>
using namespace std;
struct Car {
	string model;
	string color;
	int number;
	string year;
};
int main() {
	Car c;
	vector<Car> cars;
	map<string, int> quantAndModel;
	int size;

	cout << "Input size:" << endl;
	cin >> size;

	for (int i = 0; i < size; ++i) {
		string model, color, year, nameOfOwner;
		int number,quant;
		cout << "Input model:" << endl;
		cin >> model;
		cout << "Input color:" << endl;
		cin >> color;
		cout << "Input number:" << endl;
		cin >> number;
		cout << "Input year:" << endl;
		cin >> year;
		
		Car car;
		car.model = model;
		car.color = color;
		car.number = number;
		car.year = year;
		cars.push_back(car);
		if (quantAndModel.count(model) == 0) {
			quantAndModel[model] = 1;
			
		}
		else {
			++quantAndModel[model];
		}
	}
	for (const auto& item : quantAndModel) {
		cout << item.first << ": " << item.second << endl;
	}
}
