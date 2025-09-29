//Problem6 LAB5:

#include<iostream>
#include <iomanip>
#include <set>
using namespace std;
int main(){
    int n , credit;
    double mark;
    cout << "n = ";
    cin >> n;
    double totalWeight = 0.0;
    double totalCredit = 0;
    for (int i=0; i < n; i++) {
        cin >> credit >> mark;
        totalWeight +=  (credit*mark);
        totalCredit += credit;
    }
    float gpa = totalWeight/totalCredit;
    cout << fixed << setprecision(4);
    cout << "Your total GPA is : " << gpa << endl;

    return 0;
}