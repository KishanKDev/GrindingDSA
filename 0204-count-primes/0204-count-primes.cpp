class Solution {
public:
    // bool isPrime(int n){
    //     // if(n<2) return false;

    //     // for(int i=2;i<n;i++){
    //     //     if(n%i==0){
    //     //         return false;

    //     //     }
    //     // }
    //     // return true;
    //     if(n<2) return false;
    //     int sqrtN=sqrt(n); //there exist atleast factor less than root n for not prime
    //     for(int i=2;i<=sqrtN;i++){
    //         if(n%i==0){
    //             return false;

    //         }
    //     }
    //     return true;
    // }
    int countPrimes(int n) {
    //     int count=0;

    //     for(int i=0;i<n;i++){
    //         if(isPrime(i)){
    //             count++;
    //         }
            
    //     }
    //     return count;


    //Sieve of ERATOSTHENES

    if( n==0) return false;

    vector<bool>prime(n,true);
    prime[0]=prime[1]=false;
    int ans=0;

    for(int i=2;i<n;i++){
        if(prime[i]){
            ans++;

            int j=2*i;
            while(j<n){
                prime[j]=false;
                j +=i;
            }
        }
    }
    return ans;
    }
};