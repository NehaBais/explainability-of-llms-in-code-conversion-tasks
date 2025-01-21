const fs = require("fs");
const path = require("path");

// For the current working directory
let sizeCurrent = fs.statSync(path.join(__dirname, "input.txt")).size;
console.log(`Size of input.txt in current directory: ${sizeCurrent} bytes`);

// For the root file system
let sizeRoot = fs.statSync(path.join("/", "input.txt")).size;
console.log(`Size of input.txt in root directory: ${sizeRoot} bytes`);
