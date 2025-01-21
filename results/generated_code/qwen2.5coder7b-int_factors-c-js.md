Here is the JavaScript version of your C code:
```javascript
function Factors() {
    this.list = [];
    this.count = 0; 
}

function xferFactors(fctrs, flist) {
    let newSize = fctrs.count + flist.length;
    if (newSize > flist.length) {
        fctrs.list = fctrs.list.concat(flist.slice(0, flist.length));
    } else {
        fctrs.list = flist.slice(0, newSize);
    }
    fctrs.count = newSize;
}

function factor(num, fctrs) {
    let flist = [];
    let dvsr;
    for (dvsr = 1; dvsr * dvsr < num; dvsr++) {
        if (num % dvsr != 0) continue;
        flist.push(dvsr);
        flist.push(num / dvsr);
    }
    if (dvsr * dvsr === num) 
        flist.push(dvsr);

    xferFactors(fctrs, flist);
    return fctrs;
}

let nums2factor = [2059, 223092870, 3135, 45];
let ftors = new Factors();

for (let i = 0; i < nums2factor.length; i++) {
    factor(nums2factor[i], ftors);
    console.log(`factors of ${nums2factor[i]} are: ${ftors.list.join(', ')}`);
}
```
This JavaScript code does the same as your C code. It defines a `Factors` object with `list` and `count` properties, then uses that to keep track of factors found for each number in `nums2factor`.
