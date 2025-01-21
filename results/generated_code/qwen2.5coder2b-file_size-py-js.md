You can use the `fs` module in Node.js to check the size of a file. Here is how you can do it:

```javascript
const fs = require('fs');

// Check size of 'input.txt' in current working directory
let size1;
try {
  size1 = fs.statSync(__dirname + '/input.txt').size;
} catch (error) {
  console.log(`Error reading file: ${error}`);
}

// Check size of 'input.txt' in root directory
let size2;
try {
  size2 = fs.statSync('/input.txt').size;
} catch (error) {
  console.log(`Error reading file: ${error}`);
}
```

This script will get the file size for both the current working directory and the root directory. It uses synchronous `fs.statSync` to get the file information and then accesses its `size` property.

Please note that Node.js typically runs in the environment where there is a filesystem. So, running this on the command line or on Windows should work fine. The script will print out the size of the files if they exist.
