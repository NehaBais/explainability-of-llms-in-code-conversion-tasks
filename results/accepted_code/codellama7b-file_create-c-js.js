const fs = require("fs");

// Create an empty file in the current working directory
fs.writeFileSync("output.txt", "");

// Create a directory called "docs" in the current working directory
fs.mkdirSync("docs");

// Create an empty file in the root filesystem
fs.writeFileSync("/output.txt", "");

// Create a directory called "docs" in the root filesystem
fs.mkdirSync("/docs");
