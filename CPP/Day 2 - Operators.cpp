#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string mealcost,tip,tax;
    getline(cin,mealcost);
    getline(cin,tip);
    getline(cin,tax);
    double meals,tips,taxs;
    meals=stod(mealcost);
    tips=stod(tip);
    taxs=stod(tax);
    double totalcost;
    totalcost = meals + meals*tips/100 + meals*taxs/100;
    printf("The total meal cost is %.0f dollars.",totalcost);
    
    return 0;
}
