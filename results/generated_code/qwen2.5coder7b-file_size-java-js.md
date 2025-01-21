Here is the equivalent code in JavaScript:

const fs = require('fs');

let fileA = new File("input.txt"); 
console.log(`${fileA.size} B`);

let fileB = new File("/input.txt");
console.log(`${fileB.size} B`);

However, JavaScript doesn't have a built-in `File` object like Java. The above code is for illustration purposes only and won't work as expected because JavaScript can't directly access the local file system in Node.js due to security reasons.

To properly check the size of files in Node.js, you should use the 'fs' module:

```javascript
const fs = require('fs');

fs.stat('input.txt', (err, stats) => {
  if (err) throw err;
  console.log(stats.size + ' B');
});

fs.stat('/input.txt', (err, stats) => {
  if (err) throw err;
  console.log(stats.size + ' B');
});
```
