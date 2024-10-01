Here's the equivalent JavaScript code for creating a directory and any missing parents using the `fs` module:
```javascript
const fs = require('fs');
const path = require('path');
try {
 fs.mkdirSync(path.join(__dirname, 'tmp/some/path/to/dir'), { recursive: true });
 console.log('Directory created successfully');
} catch (err) {
 if (err.code === 'EEXIST') {
 console.log('Directory already exists');
 } else {
 throw err;
 }
}
```
This code uses the `mkdirSync` function from the `fs` module to create a directory and any missing parents recursively. The `path.join` method is used to construct the full path of the directory. If an error occurs while creating the directory, the code checks if it's due to the directory already existing (error code `'EEXIST'`), and handles it accordingly.

