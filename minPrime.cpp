int minPrime[n + 1];
void find_minPrime(){
for (int i = 2; i * i <= n; ++i) {
    if (minPrime[i] == 0) {
        for (int j = i * i; j <= n; j += i) { 
           if (minPrime[j] == 0) {
                minPrime[j] = i;
            }
        }
 }
for (int i = 2; i <= n; ++i) {
 if (minPrime[i] == 0) {
 minPrime[i] = i;

    }
}
}
