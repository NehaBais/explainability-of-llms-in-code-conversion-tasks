const fs = require("fs");
const path = require("path");

function createFile(fn) {
  fs.writeFile(fn, "", (err) => {
    if (err) throw err;
    console.log("file " + fn + " created!");
  });
}

function createDir(dn) {
  fs.mkdir(dn, { recursive: true }, (err) => {
    if (err) throw err;
    console.log("directory " + dn + " created!");
  });
}

createFile("output.txt"); // In current directory
createFile("/output.txt"); // In root of filesystem
createDir("docs"); // In the current directory
createDir("/docs"); // In root of filesystem (not advisable, as it's not possible to create a dir at root in most OS)
