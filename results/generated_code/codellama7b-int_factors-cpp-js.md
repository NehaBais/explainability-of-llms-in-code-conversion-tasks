Here is the converted code in JavaScript:
```
function GenerateFactors(n) {
  var factors = [1, n];
  for (var i = 2; i * i <= n; ++i) {
    if (n % i == 0) {
      factors.push(i);
      if (i * i != n)
        factors.push(n / i);
    }
  }

  return factors;
}

function main() {
  const SampleNumbers = [3135, 45, 60, 81];

  for (var i = 0; i < SampleNumbers.length; ++i) {
    var factors = GenerateFactors(SampleNumbers[i]);
    console.log("Factors of " + SampleNumbers[i] + " are: ");
    console.log(factors);
  }

  return EXIT_SUCCESS;
}
```
Note that in JavaScript, we don't need to include the `<iostream>` and `<algorithm>` header files as they are part of the standard library. Also, we use `console.log()` instead of `std::cout` to print output to the console.
