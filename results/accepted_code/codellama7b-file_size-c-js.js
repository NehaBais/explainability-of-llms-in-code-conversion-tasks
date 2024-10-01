const fs = require("fs");
const path = require("path");

// Verify the size of a file called input.txt in the current working directory
const stat1 = fs.statSync(path.join(__dirname, "input.txt"));
console.log(`The size of input.txt is ${stat1.size} bytes`);

// Verify the size of a file called /input.txt in the file system root
const stat2 = fs.statSync("/input.txt");
console.log(`The size of /input.txt is ${stat2.size} bytes`);
