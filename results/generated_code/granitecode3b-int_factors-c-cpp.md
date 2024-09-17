Sure! Here's the C++ code that performs the same task:
```
#include 
#include 
using namespace std;
 
struct Factors {
 int *list;
 short count;
};
 
voidxrefFactors( Factors *fctrs, int *flist, int flix ) 
{
 int ix, ij;
 int newSize = fctrs->count + flix;
 if (newSize > flix)  {
 fctrs->list = realloc( fctrs->list, newSize * sizeof(int));
 }
 else {
 fctrs->list = malloc(  newSize * sizeof(int));
 }
 for (ij=0,ix=fctrs->count; ix<newSize; ij++,ix++) {
 fctrs->list[ix] = flist[ij];
 }
 fctrs->count = newSize;
}
 
Factors*factor( int num, Factors *fctrs)
{
 int flist[301], flix;
 int dvsr;
 flix = 0;
 fctrs->count = 0;
 free(fctrs->list);
 fctrs->list = NULL;
 for (dvsr=1; dvsr*dvsr < num; dvsr++) {
 if (num % dvsr != 0) continue;
 if (flix == 300) {
 xferFactors( fctrs, flist, flix );
 flix = 0;
 }
 flist[flix++] = dvsr;
 flist[flix++] = num/dvsr;
 }
 if (dvsr*dvsr == num) 
 flist[flix++] = dvsr;
 if (flix > 0)
 xferFactors( fctrs, flist, flix );

 return fctrs;
}
 
int main() {
 int nums2factor[] = { 2059, 223092870, 3135, 45 };
 Factors ftors;
 char sep;
 int i,j;
 
 for (i=0; i<4; i++) {
 factor( nums2factor[i], &ftors );
 cout << "Factors of " << nums2factor[i] << " are: ";
 sep = ' ';
 for (j=0; j<ftors.count; j++) {
 cout << sep << ftors.list[j];
 sep = ',';
 }
 cout << endl;
 free(ftors.list);
 }
 
 return 0;
}
```
I hope this helps! Let me know if you have any questions.

