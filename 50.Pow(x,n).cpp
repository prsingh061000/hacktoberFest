class Solution {
public:
      double myPowPositive(double x,long long n) {
        if (n==0) return 1;
        if (n==1) return x;
        double tmp = myPow(x,n/2);
        if (n%2==0) return tmp*tmp;
        return tmp*tmp*x;
    } 
    
    double myPow(double x, int n) {
        long long nn=n;
        if (n<0) return 1/ myPowPositive(x,-nn) ;
        return myPowPositive(x,n);
    }
};
