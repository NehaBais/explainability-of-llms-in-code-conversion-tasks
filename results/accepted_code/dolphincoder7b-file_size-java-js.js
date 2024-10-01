const fs = require("fs");

let fileA = new File("file.txt");
console.log(fileA.length() + " B");
let fileB = new File("/file.txt");
console.log(fileB.length() + " B");
