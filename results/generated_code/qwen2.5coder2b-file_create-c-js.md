The equivalent code in JavaScript would be:

```javascript
// Function to create a new file of size 0 bytes and an empty directory, 
// and do this twice: once in the current working directory and once in the filesystem root.
function createEmptyFiles() {
    // Create the directory if it doesn't already exist
    const fs = require('fs');
    try {
        fs.mkdirSync('./docs', { recursive: true });
    } catch (err) {
        console.error(err);
    }

    // Create a new empty file in the current working directory
    try {
        fs.writeFileSync(`./output.txt`, '');
    } catch (err) {
        console.error(err);
    }
}

// Function to check if the files exist
function checkFilesExist() {
    const fs = require('fs');
    try {
        // Check for the existence of the file
        fs.accessSync('./output.txt', fs.constants.R_OK);
        console.log(`./output.txt exists.`);
        // Check for the existence of the directory
        fs.accessSync('./docs', fs.constants.R_OK);
        console.log(`./docs exists.`);
    } catch (err) {
        if (err.code === 'ENOENT') {
            console.error(`One or both files don't exist.`);
        } else {
            console.error(err);
        }
    }
}

// Call the functions
createEmptyFiles();
checkFilesExist();

```
This JavaScript code does the same thing as the original C code, but it runs in Node.js. The `fs` module is used for file system operations. Please note that Node.js's `fs` module is asynchronous by default which means you would have to use `.then` and `.catch` methods when working with promises in order to handle errors properly.
