class Solution {
    public int solution(int a, int b) {
        boolean flagA = a%2==0;
        boolean flagB = b%2==0;

        if(!flagA&&!flagB) return a*a + b*b;
        else if(flagA&&flagB) return a>b?a-b:b-a;
        else return 2*(a+b);
    }
}