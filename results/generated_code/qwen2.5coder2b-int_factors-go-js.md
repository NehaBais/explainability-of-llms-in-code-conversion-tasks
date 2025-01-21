The equivalent JavaScript code for the above Go code would be as follows:

```javascript
function printFactors(nr) {
    if (nr < 1) {
        console.log(`Factors of ${nr} not computed`);
        return;
    }
    let fs = [1];
    let d = 2;

    while (nr > 1) {
        if (nr % d === 0) {
            while (nr % d === 0) {
                nr /= d;
            }
            fs.push(d);
        } else {
            d += 2;
        }
    }

    console.log(`Factors of ${nr}:`, fs);
    console.log(`Number of factors =`, fs.length);
}
```
This JavaScript function takes an integer as input and prints out its factors. Note that this program does not consider prime numbers with only one factor (it only considers those with two factors). The `fs.push(d)` pushes a factor onto the array `fs` if `nr` is divisible by `d`, otherwise it increments `d` by 2. This way, we are iterating over all factors of `nr`.
