const fs = require("fs");

console.log(fs.statSync("input.txt").size);
console.log(fs.statSync("/input.txt").size);
