//조건에 맞게 수열 변환하기 1
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {

    for (int i = 0; i < arr.size(); i++) {
        if ((arr[i] >= 50) & (arr[i] % 2 == 0))
            arr[i] = arr[i] / 2;
        else if ((arr[i] < 50) & (arr[i] % 2 == 1))
            arr[i] = arr[i] * 2;
    }
    return arr;
}