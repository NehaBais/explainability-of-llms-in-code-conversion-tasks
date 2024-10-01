const fs = require("fs");

function mkdirp(path) {
  // Create the directory if it doesn't exist
  try {
    fs.mkdirSync(path);
  } catch (err) {
    if (err.code !== "EEXIST") throw err;
  }
}

const path = "./parent/test";
mkdirp(path);
console.log("path successfully created");
