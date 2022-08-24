
#define FOR(i,a,b) for(int i = a; i < b; i++)
r,c,a,b;
int main() {
    int r,c,a,b;
    scanf("%d%d%d%d", &r, &c, &a, &b);
    FOR(i,0,r)
        FOR(i2,0,a){
            FOR(j,0,c)
                FOR(j2,0,b)
                putchar("X."[(i^j)&1]); puts("");}
    return 0;
}
