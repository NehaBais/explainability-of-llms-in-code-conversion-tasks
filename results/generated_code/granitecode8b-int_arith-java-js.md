Here's the JavaScript code that meets the requirements:
```
let sc = new Scanner(process.argv);
let a = parseInt(sc.next());
let b = parseInt(sc.next());
let sum = a + b;        // The result of adding 'a' and 'b' (Note: integer addition is discouraged in print statements due to confusion with string concatenation)
let difference = a - b; // The result of subtracting 'b' from 'a'
let product = a * b;    // The result of multiplying 'a' and 'b'
let division = Math.floor(a / b);   // The result of dividing 'a' by 'b' (Note: 'division' does not contain the fractional result)
let remainder = a % b;  // The remainder of dividing 'a' by 'b'
console.log(`a + b = ${sum}`);
console.log(`a - b = ${difference}`);
console.log(`a * b = ${product}`);
console.log(`quotient of a / b = ${division}`);   // truncates towards 0
console.log(`remainder of a / b = ${remainder}`);   // same sign as first operand
```
Note that in JavaScript, the `Scanner` class is not available by default. To use it, you need to include an npm package called `scanner-sync`. You can install it using npm:
```
npm install scanner-sync
```
Then, you can import it into your code like this:
```
const Scanner = require('scanner-sync');
let sc = new Scanner();
```

