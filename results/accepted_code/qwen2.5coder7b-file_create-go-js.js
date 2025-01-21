const fs = require("fs");
const path = require("path");

function createFile(fn) {
  try {
    fs.writeFileSync(fn, "");
    console.log(`file ${fn} created!`);
  } catch (err) {
    console.error(err);
  }
}

function createDir(dn) {
  try {
    if (!fs.existsSync(dn)) {
      fs.mkdirSync(dn);
      console.log(`directory ${dn} created!`);
    } else {
      console.log(`directory ${dn} already exists!`);
    }
  } catch (err) {
    console.error(err);
  }
}

function main() {
  createFile("output.txt");
  createFile("/output.txt");
  createDir("docs");
  createDir("/docs");
}

main();
