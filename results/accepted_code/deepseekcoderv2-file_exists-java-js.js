const fs = require("fs");
const path = require("path");

// Check for current working directory
const filePath1 = path.join(__dirname, "docs", "input.txt");
console.log(fs.existsSync(filePath1));

// Check for filesystem root
const filePath2 = path.join("/", "docs", "input.txt");
console.log(fs.existsSync(filePath2));
