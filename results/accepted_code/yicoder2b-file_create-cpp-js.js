const fs = require("fs");

// Create an empty file
fs.openSync("output.txt", "w") || {};

// Create an empty directory in the root of the filesystem
fs.mkdirSync("/docs", { recursive: true });
