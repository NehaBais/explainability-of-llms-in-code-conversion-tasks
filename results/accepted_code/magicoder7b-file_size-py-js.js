const fs = require("fs");

let size1 = fs.statSync("./input.txt").size;
let size2 = fs.statSync("/input.txt").size;
