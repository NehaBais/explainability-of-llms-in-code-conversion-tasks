Sure! Here's the converted code in JavaScript:
```scss
const fs = require('fs');

(async () => {
  try {
    const fileA = new File('file.txt');
    console.log(`${fileA.length} B`);
    const fileB = new File('/file.txt');
    console.log(`${fileB.length} B`);
  } catch (error) {
    console.error(error);
  }
})();
```
Note that this code uses the `fs` module to interact with the file system, and it uses the `async/await` syntax to write asynchronous code in a more synchronous way.
