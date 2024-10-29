The JavaScript does not have direct equivalent to C's open system call with file creation and truncation. However, we can use NodeJs File System (fs) module to achieve similar functionality. Below is the equivalent code in JavaScript:

Firstly, ensure you have fs module installed via npm. You may install it by running `npm install @types/node` in your project folder if not already installed. 

```js
const fs = require('fs');
const rootDir = "/"; // for unix-like systems use '/'

try {
    // create an empty file "output.txt" at current directory
    fs.openSync('output.txt', 'w');
} catch (err) {
    console.log(`Error: ${ err }`);
}

try {
    // create an empty file "output.txt" in the root of filesystem 
    fs.openSync(rootDir + 'output.txt', 'w');
} catch (err) {
    console.log(`Error: ${ err }`);
}

// Create directory called docs at current directory  
try {
    fs.mkdirSync('docs');
} catch (err) {
    console.log(`Error: ${ err }`);
}

// Create directory called docs in root of the filesystem 
try {
    fs.mkdirSync(rootDir + 'docs');
} catch (err) {
    console.log(`Error: ${ err }`);
}
```
This JavaScript code will create empty files "output.txt" at current directory and root of the filesystem, and also creates an empty directory called "docs". 

Please note that this doesn't specify permissions as in C, because NodeJS doesn't provide a direct equivalent to `open` with file creation mode (`O_CREAT`) or umask. If you know exactly what rights the files need, it might be better to use other methods like `fs.writeFileSync('filename', '', {mode: 0640});` for creating and writing data into a new file, although this will not restrict directory creation in NodeJS.

