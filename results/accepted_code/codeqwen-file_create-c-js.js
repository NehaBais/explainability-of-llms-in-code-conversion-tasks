var fs = require("fs");

// Create an empty file with 0640 permissions in "here" (current working directory)
fs.openSync("./output.txt", "wx+", parseInt("0640", 8));

// Create an empty directory with 0750 permissions in "/"
fs.mkdirSync("/docs", parseInt("0750", 8));

// Create another empty file with 0640 permissions in "/" (filesystem root)
fs.openSync("/output.txt", "wx+", parseInt("0640", 8));

// Create another empty directory with 0750 permissions in "/docs"
fs.mkdirSync("/docs/docs", parseInt("0750", 8));
