const fs = require("fs");

// Create a new empty file called "output.txt" of size 0 bytes
fs.closeSync(fs.openSync("./output.txt", "w"));
try {
  fs.accessSync("/output.txt", fs.constants.F_OK);
} catch (e) {
  // File doesn't exist, do nothing
}

// Create an empty directory called "docs"
fs.mkdirSync("docs");
try {
  fs.accessSync("/docs", fs.constants.F_OK);
} catch (e) {
  // Directory doesn't exist, do nothing
}
