#include <string>
#include <iostream>

using namespace std;

string solution(string my_string, int k) {
    string answer = "";
    for (int i = 0; i < k; i++)
        answer = answer + my_string;
    return answer;
}