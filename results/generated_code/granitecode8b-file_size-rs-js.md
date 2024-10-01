Here's the equivalent JavaScript code for verifying the size of a file in Rust:
```
const fs = require('fs');
const path = require('path');
const { exit } = require('process');
function exitErr(msg, code) {
 console.error(`Error: ${msg}`);
 exit(code);
}
function verifyFileSize() {
 const fileName = process.argv[2];
 if (!fileName) {
 exitErr('No file name supplied', 1);
 }
 
 const filePath = path.join(__dirname, fileName);
 fs.stat(filePath, (err, stats) => {
 if (err) {
 exitErr(err, 2);
 }
 
 console.log(`Size of ${fileName} is ${stats.size} bytes`);
 });
}
verifyFileSize();
```
This code uses the `fs` module to get the file size and the `path` module to create the file path. The `exitErr` function is used to handle errors and exit the program with a non-zero status code. 
The `verifyFileSize` function takes the file name as an argument and gets the current working directory using `process.cwd()`. It then joins the file name with the current working directory to create the full file path. The `fs.stat` method is used to get the file size and metadata. If there's an error, it will be caught in the callback function and the `exitErr` function will be called. Otherwise, the file size will be printed to the console.

