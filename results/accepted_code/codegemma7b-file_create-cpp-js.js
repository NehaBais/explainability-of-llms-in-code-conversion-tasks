const fs = require("fs");
const path = require("path");

// Create an empty file called "output.txt" in the current working directory
fs.writeFileSync("output.txt", "");

// Create an empty file called "output.txt" in the filesystem root
fs.writeFileSync(path.join("/", "output.txt"), "");

// Create an empty directory called "docs" in the current working directory
fs.mkdirSync("docs");

// Create an empty directory called "docs" in the filesystem root
fs.mkdirSync(path.join("/", "docs"));
