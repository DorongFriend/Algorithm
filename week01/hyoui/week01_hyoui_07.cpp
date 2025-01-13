// l로 만들기
#include <string>

using namespace std;

string solution(string myString) {
    string answer = "";
    for (int i = 0; i < myString.length(); i++) {
        char tmp = myString.at(i);
        if (tmp < 'l')
            tmp = 'l';
        answer = answer + tmp;
    }
    return answer;
}