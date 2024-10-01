const fs = require("fs");
// Verify file size in current working directory
const cwdSize = fs.statSync("input.txt").size;
console.log(cwdSize);
// Verify file size in root directory
const rootSize = fs.statSync("/input.txt").size;
console.log(rootSize);
