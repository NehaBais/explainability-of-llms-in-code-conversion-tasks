// Check if the current working directory exists
const fs = require("fs");
const exists = fs.existsSync("docs/input.txt");
console.log(exists);
// Check if a file and a directory in the filesystem root exist
const exists2 = fs.existsSync("/docs/input.txt");
console.log(exists2);
