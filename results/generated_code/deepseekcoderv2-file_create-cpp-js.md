 Sure, here is the equivalent JavaScript code using Node.js and its filesystem module to create an empty file called "output.txt" in both the current working directory and the root directory, as well as creating an empty directory called "docs" in both locations:

```javascript
const fs = require('fs');
const path = require('path');

// Create output.txt in the current working directory
fs.writeFile('output.txt', '', (err) => {
    if (err) throw err;
    console.log('The file "output.txt" has been created.');
});

// Create output.txt in the root directory
fs.writeFile('/output.txt', '', (err) => {
    if (err) throw err;
    console.log('The file "/output.txt" has been created.');
});

// Create docs directory in the current working directory
fs.mkdirSync('docs');
console.log('The directory "docs" has been created in the current working directory.');

// Create docs directory in the root directory
fs.mkdirSync('/docs', (err) => {
    if (err) throw err;
    console.log('The directory "/docs" has been created.');
});
```

This code uses Node.js's `fs` module to create files and directories, with the same functionality as your C++ code but adapted for JavaScript environment.
