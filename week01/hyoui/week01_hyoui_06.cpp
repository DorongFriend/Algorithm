//�� ���� ���갪 ���ϱ�
#include <string>
using namespace std;
int solution(int a, int b) {
    int answer = 0;

    string a_c = to_string(a);
    string b_c = to_string(b);
    int num1 = stoi(a_c + b_c);
    int num2 = 2 * a * b;

    if (num1 >= num2) return num1;
    else return num2;
}
