JavaScript doesn't have a built-in way to interact with the file system like C++ does, and it also lacks exception handling as it was added in version 14 of Node.js. But you can use 'fs' module from node.js that provides an API for interacting with the file system:

```javascript
const fs = require('fs');

function printFileSize(filename) {
    try {
        let stats = fs.statSync(filename);
        console.log(`Size of file ${filename} is ${stats.size} bytes.`);
    } catch (err) {
        console.error(err);
    }
}

printFileSize('./input.txt');
printFileSize('/input.txt');
```

In the code above, `fs.statSync()` function is used to get the file stats and check if it throws any error, then we print an error message to the console using `console.error()`. If there's no error, we log the size of the file using `console.log()`.

Note: Be careful when reading files from system root '/' or anywhere else outside your program's working directory because it can have potential security risks if not handled properly. 

Also note that Node.js is a server-side JavaScript runtime environment and you need to run this in an environment where Node.js is installed, for example: on your local machine, within Docker container or in cloud service like AWS Lambda or Google Cloud Functions.
