#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    
    if(arr1.size() != arr2.size()){
        return arr1.size() > arr2.size() ? 1 : -1;
    }
    
    int a1 = 0, a2 = 0;
    
    for(int i = 0; i < arr1.size(); i++){
        a1 += arr1[i];
        a2 += arr2[i];
    }
    
    if(a1 == a2){
        return 0;
    }
    
    return a1 > a2 ? 1 : -1;
}
