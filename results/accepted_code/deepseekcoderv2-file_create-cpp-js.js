const fs = require("fs");

// Create an empty file called "output.txt" with size 0 bytes in the current working directory
fs.writeFileSync("output.txt", Buffer.alloc(0));

// Create a new empty directory called "docs" in the filesystem root
fs.mkdirSync("/docs");
