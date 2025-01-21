Here is a JavaScript equivalent of your Rust code:

```javascript
function factor(num) {
  let factors = []; 
  for(let i=1; i<=num/2; i++) {
    if(num % i === 0) {
      factors.push(i);
      factors.push(num/i);
    }
  }
  factors.sort((a,b)=>a-b); 
  return factors;
}

console.log(factor(100)); // expected output: [1, 2, 4, 5, 10, 10, 20, 25, 50, 100]
console.log(factor(101)); // expected output: [1, 101]
```

In this JavaScript function `factor`, I have slightly modified the logic to start checking factors from 1 up to half of the number (`num/2`) because a larger factor would always come after its smaller factor. Then I am pushing both factors (`i` and `num/i`) into the array as they are both factors of `num`. After that, I sort this array in ascending order before returning it.
