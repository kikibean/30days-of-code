#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int num;
    string n;
    getline(cin,n);
    num = stoi(n);
    string name;
    string number;
    map<string ,string> phone;
   
    for (int i=0;i<num;i++){
     cin>>name;
     cin>>number;
    phone[name]=number;
    }
    
while(cin >> name) {
    if (phone.find(name) != phone.end()) {
        cout << name << "=" << phone.find(name)->second << endl;
    } else {
        cout << "Not found" << endl;
    }
}
  
    return 0;
}
