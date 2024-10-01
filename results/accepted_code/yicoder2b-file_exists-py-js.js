const os = require("os");

console.log(os.existsSync("/input.txt")); // For root directory
console.log(os.existsSync(`${__dirname}\\input.txt`)); // For current working directory

console.log(os.existsSync("/docs")); // For root directory
console.log(os.existsSync(`${__dirname}/docs`)); // For current working directory
