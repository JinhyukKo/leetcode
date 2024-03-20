#include <iostream>
#include <vector>
using namespace std;
int main (){
    vector<int> v;
    vector<int> output; 
    v.push_back(2);
    v.push_back(7);
    v.push_back(11);
    v.push_back(15);
   int target = 9;
    for(int i = 0; i < v.size(); i++){
        for (int j = i+1; j < v.size(); j++)
        {
            if(v[i] + v[j] == target){
            output.push_back(i);
               output.push_back(j); 
            }
        }
        
    }
 
    for(int i = 0; i < output.size(); i++){
        cout << output[i] << " ";
    }

    return 0;
}