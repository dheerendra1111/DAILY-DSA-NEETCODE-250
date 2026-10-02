class Solution {
public:
    double myPow(double x, int n) {
      long long m=n;
      bool neg=false;
      if(n<0){
        neg=true;
        m=-m;
      }
      double r=1.0;
      while(m){
        if(m%2>0){
            r*=x;
        }
        x=x*x;
        m/=2;
      }
      return neg?1.0/r:r;
    }
};