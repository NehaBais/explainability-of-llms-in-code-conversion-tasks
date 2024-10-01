Here is the equivalent code in JavaScript:
```javascript
const STREQ = (a, b) => {return a === b;};
const STRNE = (a, b) => {return a !== b;};
const STRLT = (a, b) => {return a < b;};
const STRLE = (a, b) => {return a <= b;};
const STRGT = (a, b) => {return a > b;};
const STRGE = (a, b) => {return a >= b;};
const STRCEQ = (a, b) => {return a.toLowerCase() === b.toLowerCase();};
const STRCNE = (a, b) => {return a.toLowerCase() !== b.toLowerCase();};
const STRCLT = (a, b) => {return a.toLowerCase() < b.toLowerCase();};
const STRCLE = (a, b) => {return a.toLowerCase() <= b.toLowerCase();};
const STRCGT = (a, b) => {return a.toLowerCase() > b.toLowerCase();};
const STRCGE = (a, b) => {return a.toLowerCase() >= b.toLowerCase();};
function compare(a, b) {
  console.log(`${a}${' '.repeat(2)}${STREQ(a,b)?1:0}, ${STRNE(a,b)?1:0}, ${STRGT(a,b)?1:0}, ${STRLT(a,b)?1:0}, ${STRGE(a,b)?1:0}, ${STRLE(a,b)?1:0}  ${b}`);
}
function comparecase(a, b) {
  console.log(`${a}${' '.repeat(2)}${STRCEQ(a,b)?1:0}, ${STRCNE(a,b)?1:0}, ${STRCGT(a,b)?1:0}, ${STRCLT(a,b)?1:0}, ${STRCGE(a,b)?1:0}, ${STRCLE(a,b)?1:0}  ${b} ignoring case`);
}
const args = process.argv;
for (let i = 2; i < args.length; i += 2) {
  compare(args[i], args[i + 1]);
  comparecase(args[i], args[i + 1]);
}
```
This code defines several functions for comparing strings in different ways, including exact equality (`STREQ`), inequality (`STRNE`), lexical order (`STRLT`, `STRLE`, `STRGT`, `STRGE`), and case-insensitive comparisons (`STRCEQ`, `STRCNE`, `STRCLT`, `STRCLE`, `STRCGT`, `STRCGE`). It also defines two functions, `compare` and `comparecase`, that demonstrate how to use these comparison functions.
The main function parses the command line arguments and calls `compare` and `comparecase` for each pair of strings. The output is similar to the C code's output, but with different variable names and some differences in formatting.
Note that this code does not handle numeric strings as it does in the original C code. If you need to compare numeric strings, you may need to convert them to numbers before comparison.

