const fs = require("fs");

const size1 = fs.statSync("input.txt").size;
const size2 = fs.statSync("/input.txt").size;
