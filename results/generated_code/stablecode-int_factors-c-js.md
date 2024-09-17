Here is the equivalent JavaScript code for your C code:

```JavaScript
function xferFactors(fctrs, flist, flix) {

  let ix, ij;
  let newSize = fctrs.count + flix;

  if (newSize > flix) {

    fctrs.list = realloc(fctrs.list, newSize * sizeof(int)));

  } else {

    fctrs.list = malloc(newSize * sizeof(int)));

  }

  for (ij = 0, ix = fctrs.count; ix < newSize; ij++,ix++) {

      fctrs.list[ix] = flist[ij];

    }

  fctrs.count = newSize;

}

class Factors {

  constructor() {
    this.list = [];
    this.count = 0;
  }

}



function factor(num, fctrs) {

  let flist = [], flix;
  let dvsr;
  flix = 0;
  fctrs.count = 0;
  free(fctrs.list);
  fctrs.list = NULL;
  for (dvsr = 1; dvsr * dvsr < num; dvsr++) {

    if (num % dvsr != 0) continue;

    if (flix == 300) {

      xferFactors(fctrs, flist, flix));

      flix = 0;

    }

    flist[flix++] = dvsr;

    flist[flix++] = num / dvsr;

  }

  if (dvsr * dvsr == num) {

    flist[flix++] = dvsr;

  }

  if (flix > 0) {

    xferFactors(fctrs, flist, flix));

  }

  return fctrs;

}



const nums2factor = [2059, 223092870, 3135, 45]];



let fctrs = new Factors();



function factor() {

// Your code here

}



for (let i = 0; i < 4; i++) {

  factor(nums2factor[i]), fctrs);

}



console.log("factors of", nums2factor[i]));

console.log("are:");

sep = ',';

for (let j = 0; j < fctrs.count; j++) {

  console.log(sep, fctrs.list[j]));

  sep = ',';

}



console.log("");

}



factor(nums2factor[i]), fctrs);

function factor(num, fctrs) {

  // Your code here

}



const nums2factor = [2059, 223092870, 3135, 45]];



let fctrs = new Factors();



for (let i = 0; i < 4; i++) {

  factor(nums2factor[i]), fctrs);

}



console.log("factors of", nums2factor[i]));

console.log("are:");

sep = ',';

for (let j = 0; j < fctrs.count; j++) {

  console.log(sep, fctrs.list[j]));

  sep = ',';

}



console.log("");

}


 

```
