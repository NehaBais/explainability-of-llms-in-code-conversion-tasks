The given C++ code is a demonstration of string comparisons in different cases. Here's the equivalent JavaScript code:
```scss
const demoCompare = (a, b, semantically) => {
  console.log(`${a} and ${b} are ${(a == b) ? '' : 'not'} exactly ${semantically} equal.`);
  console.log(`${a} and ${b} are ${(a != b) ? '' : 'not'} ${semantically} inequal.`);
  console.log(`${a} is ${(a < b) ? '' : 'not'} ${semantically} ordered before ${b}.`);
  console.log(`${a} is ${(a > b) ? '' : 'not'} ${semantically} ordered after ${b}.`);
};

const a = (argc > 1) ? argv[1] : "1.2.Foo";
const b = (argc > 2) ? argv[2] : "1.3.Bar";
demoCompare(a, b, "lexically");

// Case-insensitive comparisons by folding both strings to a common case.
const lowerA = a.toLowerCase();
const lowerB = b.toLowerCase();
demoCompare(lowerA, lowerB, "lexically");

// Numeric comparisons; here 'double' could be any type for which the relevant >> operator is defined, eg int, long, etc.
let numA = parseFloat(a);
let numB = parseFloat(b);
demoCompare(numA, numB, "numerically");
```
Note that JavaScript does not have a built-in `std::string` class like C++, so the code uses the `String` class instead. The `tolower()` method is used to convert both strings to lowercase before comparison, which is equivalent to folding them to a common case in the C++ code. The `parseFloat()` method is used to convert both strings to numbers for numeric comparisons, which is equivalent to using the `>>` operator in C++ to parse the string as a number.

Also, the C++ code uses the `main()` function to run the demo, but JavaScript does not have a concept of main functions like C++. Instead, the equivalent JavaScript code can be placed inside a script tag in an HTML file and executed when the page is loaded.
