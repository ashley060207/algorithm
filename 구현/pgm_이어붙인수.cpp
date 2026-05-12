#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num) {
    string odd = "";
    string even = "";
    
    for(int i = 0; i < num.size(); i++){
        if(num[i] % 2 == 0){
            even += to_string(num[i]);
        }
        else{
            odd += to_string(num[i]);
        }
    }
    
    return stoi(odd)+stoi(even);
}
