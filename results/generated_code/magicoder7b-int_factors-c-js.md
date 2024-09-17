 Here is the JavaScript version of your C code:

```javascript
function xferFactors(fctrs, flist) {
    let newSize = fctrs.count + flist.length;
    if (newSize > flist.length) {
        fctrs.list = Array.from({ length: newSize }, (v, i) => (i < fctrs.count ? fctrs.list[i] : undefined));
    } else {
        fctrs.list = Array.from({ length: newSize });
    }
    for(let ix=fctrs.count, ij=0; ij<flist.length; ij++, ix++) {
        if (typeof flist[ij] !== 'undefined') 
            fctrs.list[ix] = flist[ij];
    }
    fctrs.count = newSize;
}

function factor(num, fctrs) {
    let flist = [], flix = 0;
    for (let dvsr=1; dvsr*dvsr < num; dvsr++) {
        if (num % dvsr !== 0) continue;
        if (flix === 300) {
            xferFactors(fctrs, flist);
            flix = 0;
        }
        flist[flix++] = dvsr;
        flist[flix++] = num / dvsr;
    }
    if (dvsr*dvsr === num) 
        flist[flix++] = dvsr;
    if (flix > 0)
        xferFactors(fctrs, flist);
    
    return fctrs;
}

let nums2factor = [2059, 223092870, 3135, 45];
let ftors = { list: [], count: 0 };
for (let i=0; i<4; i++) {
    factor(nums2factor[i], ftors);
    console.log("factors of " + nums2factor[i] + " are:\n" + JSON.stringify(ftors.list));
}
```

Please note that unlike C, JavaScript does not have a built-in type for integers larger than 2^53 - 1. So if you are trying to handle numbers bigger than this value, you'll need to use BigInt instead of Number.
