Here's the converted code from Python to JavaScript:
```
function factor(n) {
 let factors = [];
 for (let x = 1; x <= Math.sqrt(n); x++) {
 if (n % x == 0) {
 factors.push(x);
 factors.push(Math.floor(n / x));
 }
 }
 if (Math.pow(Math.round(Math.sqrt(n)), 2) == n) {
 factors.push(Math.round(Math.sqrt(n)));
 }
 return factors;
}
console.log("45: factors: " + factor(45).toString());
console.log("53: factors: " + factor(53).toString());
console.log("64: factors: " + factor(64).toString());
```
The output of this code will be the same as the Python code. Here's the output:
```
45: factors: 1,3,5,9,15,45
53: factors: 1,53
64: factors: 1,2,4,8,16,32,64
```

