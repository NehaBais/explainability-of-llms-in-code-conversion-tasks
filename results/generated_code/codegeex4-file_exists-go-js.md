Here is the equivalent JavaScript code:

```javascript
const fs = require('fs');
const path = require('path');

function printStat(filePath) {
  try {
      const stats = fs.statSync(filePath);
      if (stats.isDirectory()) {
          console.log(path.resolve(filePath), 'is a directory');
      } else {
          console.log(path.resolve(filePath), 'is a file');
      }
  } catch (err) {
      console.error(err.message);
  }
}

printStat('input.txt');
printStat('/input.txt');
printStat('docs');
printStat('/docs');
```
This JavaScript code is using the Node.js `fs` and `path` modules to achieve similar functionality. The `printStat()` function accepts a file path as an argument, synchronously retrieves the stats for that file or directory with `fs.statSync()`, checks whether it's a directory or a file, and prints the result accordingly.

The `console.error(err.message)` line will handle errors in a way very similar to your Go code (which uses `fmt.Println(err)`), printing out any error messages encountered when attempting to access files or directories.
