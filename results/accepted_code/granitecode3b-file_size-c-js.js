const fs = require("fs");
const path = require("path");
// Verify the size of a file called input.txt for a file in the current working directory
const filePath = path.join(__dirname, "input.txt");
const stats = fs.statSync(filePath);
console.log(stats.size); // prints the size of the file in bytes
// Verify the size of a file called input.txt for a file in the file system root
const rootPath = "/input.txt";
const rootStats = fs.statSync(rootPath);
console.log(rootStats.size); // prints the size of the file in bytes
