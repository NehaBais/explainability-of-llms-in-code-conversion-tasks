const fs = require("fs");

// Current working directory
let size = fs.statSync("./input.txt").size;

// File system root
size = fs.statSync("/input.txt").size;
