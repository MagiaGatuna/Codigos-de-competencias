#include <bits/stdc++.h>
using namespace std;

long long int divisors(long long int n, char &type) {
    if (n <= 0){
        type = 'P';
        return n;
    }

    long long int divs = 0;

    for (long long int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            if(i != n) divs += i;

            if(i != (n/i) && (n/i) != n) divs += n/i;
        }

    }

    if (n == 1) divs = 0;

   if(divs < n){

        type = 'D';

   } else if(divs == n){

        type = 'P';

   } else {
       type = 'A';
   }

   return divs;
    
}

int main(){
    long long int n;
    cin >> n;
    char temp = ' ';
    char type ;

    long long int divs = divisors(n, type);
    
    long long int mayor;

    while (temp != 'A') {
        n++;
        mayor = divisors(n, temp);
    }

    cout << type << " " << n << endl;

    return 0;
}
