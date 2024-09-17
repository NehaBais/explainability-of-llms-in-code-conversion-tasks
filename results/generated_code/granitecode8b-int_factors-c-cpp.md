Here is the converted code from C to C++:
```
#include 
#include 
using namespace std;
typedef struct {
 int *list;
 short count;
} Factors;
void xfTransferFactors(Factors *fctrs, int *flist, int flix) {
 int ix, ij;
 int newSize = fctrs->count + flix;
 if (newSize > flix) {
 fctrs->list = realloc(fctrs->list, newSize * sizeof(int));
 } else {
 fctrs->list = malloc(newSize * sizeof(int));
 }
 for (ij=0,ix=fctrs->count; ix<newSize; ij++,ix++) {
 fctrs->list[ix] = flist[ij];
 }
 fctrs->count = newSize;
}
Factors *factor(int num, Factors *fctrs) {
 int flist[301], flix;
 int dvsr;
 flix = 0;
 fctrs->count = 0;
 free(fctrs->list);
 fctrs->list = NULL;
 for (dvsr=1; dvsr*dvsr < num; dvsr++) {
 if (num % dvsr != 0) continue;
 if (flix == 300) {
 xfTransferFactors(fctrs, flist, flix);
 flix = 0;
 }
 flist[flix++] = dvsr;
 flist[flix++] = num/dvsr;
 }
 if (dvsr*dvsr == num) 
 flist[flix++] = dvsr;
 if (flix > 0)
 xfTransferFactors(fctrs, flist, flix);
 return fctrs;
}
int main() {
 int nums2factor[] = {2059, 223092870, 3135, 45};
 Factors ftors = {NULL, 0};
 char sep;
 int i,j;
 for (i=0; i<4; i++) {
 factor(nums2factor[i], &ftors);
 cout << "Factors of " << nums2factor[i] << " are: ";
 sep = ' ';
 for (j=0; j<ftors.count; j++) {
 cout << sep << ftors.list[j];
 sep = ',';
 }
 cout << endl;
 }
 return 0;
}
```
Note that the code uses C++ features such as dynamic memory allocation and new-line character instead of C features such as standard I/O functions and line feed macro. The factor() function takes a pointer to a Factors struct as its second argument, which is used to store the factors of the input number. The xfTransferFactors() function is used to transfer the factors from an array to the Factors struct.

