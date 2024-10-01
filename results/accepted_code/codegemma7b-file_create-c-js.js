const fs = require("fs");

// Create an empty file called "output.txt" of size 0 bytes in the current working directory
fs.writeFileSync("output.txt", "");

// Create an empty directory called "docs" in the current working directory
fs.mkdirSync("docs");

// Create an empty file called "output.txt" of size 0 bytes in the filesystem root
fs.writeFileSync("/output.txt", "");

// Create an empty directory called "docs" in the filesystem root
fs.mkdirSync("/docs");
