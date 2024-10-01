const fs = require("fs");
// Create an empty file in the current working directory and in the root directory
fs.writeFileSync("output.txt", "");
fs.mkdirSync("/output.txt");
fs.mkdirSync("/");
