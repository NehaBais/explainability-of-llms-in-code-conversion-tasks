const fs = require("fs");

function createFile(fn) {
  try {
    const fd = fs.openSync(fn, "w");
    console.log(`file ${fn} created!`);
    fs.closeSync(fd);
  } catch (err) {
    console.error(err);
  }
}

function createDir(dn) {
  try {
    fs.mkdirSync(dn, { recursive: true });
    console.log(`directory ${dn} created!`);
  } catch (err) {
    console.error(err);
  }
}

createFile("output.txt");
createFile("/output.txt");
createDir("docs");
createDir("/docs");
