#include <iostream>
#include <iomanip>
using namespace std;
int main() {
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
 cout << setw(12) << setprecision(5) << "No" 
      << setw(12) << setprecision(5) << "Name" 
      << setw(12) << setprecision(5) << "Marks" << endl;
 for (int r = 0; r < 5; r++) {
     cout << setw(12) << setprecision(5) << r+1 
          << setw(12) << setprecision(12) << names[r]
          << setw(12) << setprecision(4) << marks[r] << endl;
 }
}