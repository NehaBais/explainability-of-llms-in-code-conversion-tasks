Here is the JavaScript version of your C code:

```javascript
function factor(num) {
    let factors = [];

    for (let dvsr=1; dvsr*dvsr < num; dvsr++) {
        if (num % dvsr != 0) continue;
        factors.push(dvsr);
        factors.push(num/dvsr);
    }

    if (dvsr*dvsr == num) 
        factors.push(dvsr);

    return factors;
}

let nums2factor = [2059, 223092870, 3135, 45];

for (let i=0; i<4; i++) {
    console.log("Factors of " + nums2factor[i] + " are:", factor(nums2factor[i]));
}
```

The C code uses dynamic memory allocation to store the factors, whereas in JavaScript we use an array instead, which has a fixed size and no need for manual reallocation. The logic of calculating the factors is simplified in JavaScript as well.
