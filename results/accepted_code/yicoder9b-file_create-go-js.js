const fs = require("fs");

function createFile(fn) {
  try {
    fs.closeSync(fs.openSync(fn, "w"));
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
createFile("/input.txt"); // This may fail if the script doesn't have necessary permissions to write at filesystem root.
createDir("docs");
createDir("/docs"); // This may fail if the script doesn't have necessary permissions to create a directory at filesystem root.
