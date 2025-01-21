 Sure! Here is the equivalent JavaScript code for the provided C code:

```javascript
class Factors {
    constructor() {
        this.list = [];
        this.count = 0;
    }
}

function xferFactors(fctrs, flist, flix) {
    const newSize = fctrs.count + flix;
    if (newSize > flix) {
        fctrs.list = flist.slice(0, newSize);
    } else {
        fctrs.list = [];
    }
    for (let ij = 0, ix = fctrs.count; ix < newSize; ij++, ix++) {
        fctrs.list[ix] = flist[ij];
    }
    fctrs.count = newSize;
}

function factor(num) {
    const flist = [];
    let flix = 0;
    for (let dvsr = 1; dvsr * dvsr < num; dvsr++) {
        if (num % dvsr !== 0) continue;
        if (flix === 300) {
            return flist.slice(0, flix);
        }
        flist[flix++] = dvsr;
        flist[flix++] = num / dvsr;
    }
    if (dvsr * dvsr === num) {
        flist[flix++] = dvsr;
    }
    return flist.slice(0, flix);
}

function main() {
    const nums2factor = [2059, 223092870, 3135, 45];
    for (let i = 0; i < nums2factor.length; i++) {
        const ftorsList = factor(nums2factor[i]);
        console.log(`factors of ${nums2factor[i]} are:`);
        let sep = ' ';
        for (let j = 0; j < ftorsList.length; j++) {
            process.stdout.write(`${sep} ${ftorsList[j]}`);
            sep = ',';
        }
        console.log('');
    }
}

main();
```

This JavaScript code defines a `Factors` class to store the factors of a number, and it includes functions to compute the factors and print them out in a similar manner as the original C code.
