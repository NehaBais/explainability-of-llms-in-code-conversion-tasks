The JavaScript version of the given Java code is as follows:
```
let fs = require('fs'); // Importing file system module
const path = require("path"); // Importing path module for creating directories
try {
    if (!fs.existsSync('output.txt'))  // Checking if output.txt exists
        fs.writeFileSync('output.txt', ''); // Creating output.txt if it doesn't exist

    if (!fs.existsSync(path.join('/', 'output.txt'))) // Checking if /output.txt exists
        fs.writeFileSync(path.join('/', 'output.txt'), ''); // Creating /output.txt if it doesn't exist

    if (!fs.existsSync('docs'))  // Checking if docs directory exists
        fs.mkdirSync('docs'); // Creating docs directory if it doesn't exist

    if (!fs.existsSync('/docs'))  // Checking if /docs directory exists
        fs.mkdirSync('/docs'); // Creating /docs directory if it doesn't exist
} catch (err) {
    console.error(err); // Error handling
}
```
Please note that the JavaScript code does not have direct equivalent to Java classes and methods as well as `File` objects. It uses Node.js's `fs` module which provides similar functionality. In this context, `path` is used for creating directories. The `writeFileSync` method creates or overwrites the specified file with a zero-byte size. And the `mkdirSync` method creates directory paths without throwing an exception if they already exist.
