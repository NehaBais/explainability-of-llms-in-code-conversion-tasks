### Solution

```js
const readline = require("readline").createInterface({
  input: process.stdin,
  output: process.stdout,
});

function main() {
  const a = parseInt(process.argv[2]);
  const b = parseInt(process.argv[3]);

  if (isNaN(a) || isNaN(b)) {
    console.error("Could not read the numbers");
    process.exit(1);
  }

  // test for less-than
  if (a < b) {
    console.log(`${a} is less than ${b}`);
  }

  // test for equality
  if (a === b) {
    console.log(`${a} is equal to ${b}`);
  }

  // test for greater-than
  if (a > b) {
    console.log(`${a} is greater than ${b}`);
  }
}

main();
```
