// Solution for Lab 01
#include <iostream>
//Its fawking rawwww mateee!
#include <string>
using namespace std;

int main()
{
   string name;
   double height, weight;
    
   cout << "Please enter the person's name: " << endl;
   cin >> name;
   cout << "Please enter the person's height: " << endl;
   cin >> height;
   cout << "Please enter the person's weight: " << endl;
   cin >> weight;
   
   double BMI;
   BMI = height * 703 / (weight * weight);
   cout << name << "'s BMI is " << BMI << endl;
}

using namespace std;
