Here is the converted code from Python to C:
```
#include 
void bitwise_built_ins(int width, int a, int b){
 unsigned mask = (1 << width) - 1;
 printf("    AND:     0b%0*b \n           & 0b%0*b \n           = 0b%0*b\n", width, a, width, b, width, a&b&mask);
 printf("    OR:      0b%0*b \n           | 0b%0*b \n           = 0b%0*b\n", width, a, width, b, width, a|b&mask);
 printf("    XOR:     0b%0*b \n           ^ 0b%0*b \n           = 0b%0*b\n", width, a, width, b, width, a^b&mask);
 printf("    NOT:   ~ 0b%0*b \n           = 0b%0*b\n", width, a, width, ~a&mask);
 printf("    SHIFTS\n");
 printf("      RIGHT:   0b%0*b \n             >> 1\n            = 0b%0*b\n", width, a, width, (a>>1)&mask);
 printf("      LEFT:    0b%0*b \n             << 1\n            = 0b%0*b\n", width, a, width, (a<<1)&mask);
}
unsigned int rotr(int width, unsigned int a, int n){
 if(n < 0) return rotl(width, a, -n);
 else if(n == 0) return a;
 else{
 unsigned mask = (1 << width) - 1;
 a %= mask;
 n %= width;
 return ((a >> n)    // top moved down
 | ((a & ((1 << n) - 1))   // Bottom masked...
 << (width - n)))  // ... then moved up    
 }
}
unsigned int rotl(int width, unsigned int a, int n){
 if(n < 0) return rotr(width, a, -n);
 else if(n == 0) return a;
 else{
 unsigned mask = (1 << width) - 1;
 a %= mask;
 n %= width;
 return (((a << n) & mask)      // bottom shifted up and masked
 | (a >> (width - n)));  // Top moved down  
 }
}
int asr(int width, int a, int n){
 if(n < 0) return asr(width, ~a+1, n);
 else{
 unsigned mask = (1 << (width-1)) - 1;
 a %= (1<<width)-1;
 n %= width;
 return ((a >> n)    // top moved down
 | ((a & ((1 << n) - 1))   // Bottom masked...
 << (width - n)))  // ... then moved up    
 }
}
void helper_funcs(int width, int a){
 printf("    SIGN-EXTENDING ARITHMETIC SHIFT RIGHT\n");
 unsigned aa = a|(1<<width)-1;
 printf("               asr(%d, 0b%0*b, 1)\n", width, a, width, asr(width, a, 1), width, asr(width, aa, 1));
 printf("               asr(%d, 0b%0*b, 2)\n", width, a, width, asr(width, a, 2), width, asr(width, aa, 2));
 printf("               asr(%d, 0b%0*b, 4)\n", width, a, width, asr(width, a, 4), width, asr(width, aa, 4));
}
int main(){
 bitwise_built_ins(8, 27, 125);
 helper_funcs(8, 27);
 return 0;
}
```

