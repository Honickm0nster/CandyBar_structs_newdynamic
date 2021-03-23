//
//  main.cpp
//  Assignment_9
//
//  Created by Noah Honickman on 1/2/21.
//This program makes an array of structures using the keyword new and prints out the //contents. 

#include <iostream>
#include <string>
#include <cstring>
using namespace std;
struct candybar {
    string name;
    double weight;
    int cal;
};
int main() {
    candybar * first = new candybar [3];
    first[0]= {"Milky Way", 3, 200};
    first[1] = {"Snickers", 4, 350};
    first [2] = {"3 Musketeers", 6, 450};
    
    cout<< "The name of the first candy bar is: " << first[0].name << "\n";
    cout<< "Its weight is: " << first[0].weight << "\n";
    cout<< "The number of calories is: " << first[0].cal << "\n";
    //first = first + 1;
    cout << "The name of the second candy bar is: " << first[1].name << "\n";
    cout << "Its weight is: " << first[1].weight << "\n";
    cout << "The number of calories is: " << first[1].cal << "\n";
    //first = first + 1;
    cout << "The name of the third candy bar is: " << first[2].name << "\n";
    cout << "Its weight is: " << first[2].weight << "\n";
    cout << "The number of calories: " << first[2].cal << "\n";
    
    
    
        
    
    
    
    return 0;
}
