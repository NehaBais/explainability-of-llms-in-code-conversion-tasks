const fs = require("fs");

const inputTxtSize = fs.statSync("input.txt").size;
console.log(inputTxtSize);

const rootInputTxtSize = fs.statSync("/input.txt").size;
console.log(rootInputTxtSize);
