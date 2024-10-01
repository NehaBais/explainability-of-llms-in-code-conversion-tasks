To convert this code from Java to JavaScript, you can use the `fs` module in Node.js to create a directory and any missing parents. Here's an example of how you could do this:
```javascript
const fs = require('fs');

function mkdirp(path) {
  // Create the directory if it doesn't exist
  try {
    fs.mkdirSync(path);
  } catch (err) {
    if (err.code !== 'EEXIST') throw err;
  }
}

const path = './parent/test';
mkdirp(path);
console.log('path successfully created');
```
This code uses the `fs.mkdirSync()` method to create a directory, and checks for any errors that may occur. If the directory already exists, it will throw an error with the code 'EEXIST'. The `catch` block handles this error by checking if the error is not equal to 'EEXIST', which means that the directory was successfully created.

You can also use the `fs.mkdir()` method, which is similar to `fs.mkdirSync()`, but it returns a promise instead of throwing an error. Here's an example of how you could do this:

const fs = require('fs');

function mkdirp(path) {
  // Create the directory if it doesn't exist
  return fs.mkdir(path).then(() => {
    console.log('path successfully created');
  }).catch((err) => {
    if (err.code !== 'EEXIST') throw err;
  });
}

const path = './parent/test';
mkdirp(path);

This code uses the `fs.mkdir()` method to create a directory, and returns a promise that resolves when the directory is successfully created. The `then()` method logs a message to the console if the directory was successfully created. The `catch()` method handles any errors that may occur by checking if the error is not equal to 'EEXIST', which means that the directory was successfully created.
