#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int a, int b) {
    string st = to_string(a) + to_string(b);
    int ab = stoi(st);
    
    int ab2 = 2 * a  * b;
    
    if(ab2 > ab){
        return ab2;
    }

    return ab;
}
