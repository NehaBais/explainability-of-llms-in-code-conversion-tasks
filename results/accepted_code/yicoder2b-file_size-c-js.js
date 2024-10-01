const fs = require("fs");

let inputFilePath = "./input.txt"; // current working directory
let rootFilePath = "/input.txt"; // file system root

fs.stat(inputFilePath, (err, stats) => {
  if (!err) {
    console.log(`Size of ${inputFilePath}: ${stats.size}`);
  } else if (err.code === "ENOENT") {
    console.error(`${inputFilePath} does not exist`);
  } else {
    throw err;
  }
});

fs.stat(rootFilePath, (err, stats) => {
  if (!err) {
    console.log(`Size of ${rootFilePath}: ${stats.size}`);
  } else if (err.code === "ENOENT") {
    console.error(`${rootFilePath} does not exist`);
  } else {
    throw err;
  }
});
