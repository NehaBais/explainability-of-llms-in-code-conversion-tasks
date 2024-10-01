```javascript
const fs = require('fs');

function printFileSize(filePath) {
  try {
    const stats = fs.statSync(filePath);
    console.log(stats.size);
  } catch (err) {
    console.error(err);
  }
}

printFileSize("input.txt");
printFileSize("/input.txt");
```
Note: The JavaScript version uses the `fs` module's synchronous methods, as it doesn't have a direct equivalent of Go's `os.Stat`. This means that this code will block further execution until the file size is determined.
