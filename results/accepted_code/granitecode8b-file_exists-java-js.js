const path = require("path");
const fs = require("fs");
console.log(fs.existsSync("docs/input.txt")); // true or false
console.log(fs.existsSync("input.txt")); // true or false
const rootPath = path.parse("/").root;
console.log(fs.existsSync(rootPath + "/docs/input.txt")); // true or false
console.log(fs.existsSync(rootPath + "/input.txt")); // true or false
