#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string lines;
    int num;
    string nums;
    getline(cin,nums);
    num = stoi(nums);
    
    
for (int j=0; j<num;j++){
    getline(cin,lines);
   for(int i=0;i<lines.size();i++){
       if (i%2==0){
           cout<<lines[i];
       }
   }
       cout<<" ";
   for(int i=0;i<lines.size();i++){
       if (i%2!=0){
           cout<<lines[i];
       }
   }
      
    cout<<"\n";
}
    return 0;
}
