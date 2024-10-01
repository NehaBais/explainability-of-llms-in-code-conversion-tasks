const fs = require("fs");

const size = fs.statSync("input.txt").size;
const size = fs.statSync("/input.txt").size;
