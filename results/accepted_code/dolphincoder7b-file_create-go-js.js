const fs = require("fs");
const path = require("path");

function createFile(fn) {
  fs.openSync(fn, "w", 0644);
  console.log(`file ${fn} created!`);
}

function createDir(dn) {
  if (!fs.existsSync(dn)) {
    fs.mkdirSync(dn, { recursive: true });
  }
  console.log(`directory ${dn} created!`);
}

createFile("output.txt");
createFile("/output.txt");
createDir("docs");
createDir("/");
