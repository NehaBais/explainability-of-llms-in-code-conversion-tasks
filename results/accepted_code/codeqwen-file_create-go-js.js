const fs = require("fs");
const path = require("path");

function createFile(fn) {
  fs.writeFileSync(fn, "");
  console.log(`file ${fn} created!`);
}

function createDir(dn) {
  fs.mkdirSync(dn);
  console.log(`directory ${dn} created!`);
}

createFile("input.txt");
createFile(path.join("/", "input.txt"));
createDir("docs");
createDir(path.join("/", "docs"));
