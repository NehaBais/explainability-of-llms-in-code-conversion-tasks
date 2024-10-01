const fs = require("fs");

console.log(fs.existsSync(`${__dirname}/input.txt`)); // current working directory
console.log(fs.existsSync("/docs/input.txt")); // root filesystem directory
