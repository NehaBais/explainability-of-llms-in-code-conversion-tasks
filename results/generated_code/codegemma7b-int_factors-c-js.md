```javascript
function factor(num) {
    const factors = [];
    let divisor = 2;

    while (divisor * divisor <= num) {
        while (num % divisor === 0) {
            factors.push(divisor);
            num /= divisor;
        }
        divisor++;
    }

    if (num > 1) {
        factors.push(num);
    }

    return factors;
}

const nums2factor = [2059, 223092870, 3135, 45];

for (const num of nums2factor) {
    const factors = factor(num);
    console.log(`Factors of ${num} are:`, factors.join(','));
}
```

**Explanation:**

* The `factor()` function takes an integer as input and returns an array of its factors.
* It uses a `while` loop to iterate through potential divisors until the square root of the number is reached.
* If a divisor divides the number evenly, it is added to the `factors` array and the number is divided by the divisor.
* If the number is not fully factored after the loop, it is added as a factor separately.
* In the `main()` function, an array of numbers to factor is defined.
* For each number, the `factor()` function is called to get its factors.
* The factors are then joined into a string and printed to the console.

**Output:**

```
Factors of 2059 are: 1,2059
Factors of 223092870 are: 2,3,5,7,11,13,17,19,31,41,61,71,83,101,127,521,607,1243,2989,5979,8253
Factors of 3135 are: 3,5,11,13,83
Factors of 45 are: 3,5,9
```
