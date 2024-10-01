The JavaScript version of the given Rust code is as follows. Note that Node.js's `fs` module provides similar functionality and doesn't require any dependencies.

```javascript
const fs = require('fs');
const path = require('path');

function exit_err(msg, code) {
    console.error(`Error: ${msg}`);
    process.exit(code);
}

// check file size in current working directory
try {
    let metadata = fs.statSync(path.join(__dirname, 'input.txt'));
    console.log(`Size of input.txt is ${metadata.size} bytes`);
} catch (error) {
    exit_err(error.message, 2);
}

// check file size in root directory
try {
    let metadata = fs.statSync('/input.txt'); // please replace with the correct path of the file if needed
    console.log(`Size of /input.txt is ${metadata.size} bytes`);
} catch (error) {
    exit_err(error.message, 2);
}

```

Keep in mind that Node.js doesn't have a direct equivalent to Rust's `env::args()` for getting command line arguments. In this script, we use `__dirname`, which gives the directory of the current module file (in our case, main.js), and then join it with 'input.txt'.

Note that in Node.js, we have to call `fs.statSync` synchronously here because JavaScript is single-threaded and `process.exit(code)` immediately ends the script after any pending asynchronous tasks complete. 

Also note that error handling is done using a try/catch block in Node.js, and this replaces Rust's `unwrap_or_else`.
