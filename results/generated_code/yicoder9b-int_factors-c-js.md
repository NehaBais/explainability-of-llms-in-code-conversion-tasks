Here is the equivalent JavaScript code for your C program:

```JavaScript
class Factors {
  constructor() {
    this.list = [];
    this.count = 0;
  }

  addFactors(flist) {
    this.list = this.list.concat(flist);
    this.count += flist.length;
  }
}

function factor(num, fctrs) {
  let flist = [];

  for (let dvsr = 1; dvsr * dvsr < num; dvsr++) {
    if (num % dvsr == 0) {
      flist.push(dvsr);
      flist.push(num / dvsr);
    }
  }
  if (dvsr*dvsr == num) 
    flist.push(dvsr);
    
  fctrs.addFactors(flist);

  return fctrs;
}

let main = function() {
  let nums2factor = [2059, 223092870, 3135, 45];
  let ftors = new Factors();
  let sep;

  for (let i=0; i<nums2factor.length; i++) {
    ftors = factor(nums2factor[i], ftors);
    console.log(`factors of ${nums2factor[i]} are: `);
    sep = ' ';
    for (let j=0; j<ftors.count; j++) {
      console.log(`${sep} ${ftors.list[j]}`);
      sep = ',';
    }
  } 
};
```

Please note that the JavaScript program differs from the original C code in a few important ways:
1. The factor computation logic remains the same as it was written in the C code.
2. Instead of using realloc() to resize an array, we're just creating new arrays with push and concat operations.
3. For simplicity, I converted struct Factors into a class. This allows us to use methods like addFactors instead of manually manipulating the count and list properties.
4. The output is written directly to the console using `console.log` statements, which should be equivalent to printf in C.
5. The main function was also rewritten, as JavaScript does not have a specific entry point for script execution like int main() in C or C++. Instead, functions can be invoked at any time.
