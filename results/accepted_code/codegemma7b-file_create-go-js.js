const fs = require("fs");

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
    fs.mkdirSync(dn);
    console.log(`directory ${dn} created!`);
  } catch (err) {
    console.error(err);
  }
}

createFile("input.txt");
createFile("/input.txt");
createDir("docs");
createDir("/docs");
