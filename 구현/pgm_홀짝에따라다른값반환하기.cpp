#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    if (n % 2 == 1) {
        int k = (n + 1) / 2;
        return k * k;
    }

    int k = n / 2;
    return 4 * (k * (k + 1) * (2 * k + 1) / 6);
}
