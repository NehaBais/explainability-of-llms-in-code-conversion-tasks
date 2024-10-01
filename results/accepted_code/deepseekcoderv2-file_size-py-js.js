var fs = require("fs");
const size = fs.statSync("input.txt").size;
const size2 = fs.statSync("/input.txt").size;
