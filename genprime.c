#include <stdio.h>
#define N 10000000

#define SQUARE(n) ((n)*(n))
long long primes[N+3] = { 2 } ;

extern
int isprime(long long n);

inline
int isprime(long long n) {
    for (int i = 0; SQUARE(primes[i]) <= n; i++)
        if (n % primes[i] == 0)
            return 0;
    return 1;
}

int generate_prime(int n) {
    int j = 0, p = 1;
    for (int i = 2; i < n; i++)
        if (isprime(i))
            primes[j++] = i;
    return j;
}

int generate_prime2(int l){
    int i,j,count=1;
    for(i=3;i<=l;i++){
        j=0;
        while(1){
            if(primes[j]*primes[j]>i){primes[count]=i;count++;break;}
            if(i%primes[j]==0){break;}
            j++;
        }
    }
    return count;
}

int main(int argc, char **argv) {
    int j;
    if (argc > 1)
        j=generate_prime(N);
    else
        j=generate_prime2(N);
    for (int i = 0; i < j; i++)
        printf("%lld ", primes[i]);
    return 0;
}

