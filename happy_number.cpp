class Solution {
public:
    bool isHappy(int n) {
        int sum = 0;
        int cnt=0;
          while(n != 1){
                if(cnt>100){
                    return false;
                }
                while(n!=0){
                    sum += pow((n%10), 2);
                    n = n/10;
                }
                n = sum;
                sum=0;
                cnt++;
          }
          return true;
    }
};