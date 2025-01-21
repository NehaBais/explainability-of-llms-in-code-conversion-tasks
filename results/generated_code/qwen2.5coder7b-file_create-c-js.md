Here is how you can convert the given C code to JavaScript:

```JavaScript
const fs = require('fs');

// Create an empty file in current working directory
fs.openSync('./output.txt', 'w');
console.log('File created in current directory.');

// Create an empty directory in filesystem root (This will raise an error if not run with appropriate permissions)
try {
    fs.mkdirSync('/', '0750'); 
} catch (error) {
    console.error(`Error creating directory in the root: ${error}`);
}

console.log('Directory created in root.');
```

The `fs` module is used to interact with the file system in Node.js. The `openSync` function is used to open a new empty file, and the `mkdirSync` function is used to create an empty directory. Note that you will need appropriate permissions to create directories or files in the root directory.

Please run this script as a Node.js script from the command line with proper privileges (root on Linux systems).
