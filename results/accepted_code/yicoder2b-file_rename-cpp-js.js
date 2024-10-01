var fs = require("fs");

fs.renameSync("input.txt", "output.txt");
fs.renameSync("docs", "mydocs");

fs.renameSync("/input.txt", "/output.txt");
fs.renameSync("/docs", "/mydocs");
