const fs = require("fs");

function renameFileInCurrentDir() {
  try {
    fs.renameSync("input.txt", "output.txt");
  } catch (error) {
    console.log(error);
  }
}

function renameDirInCurrentDir() {
  try {
    fs.renameSync("docs", "mydocs");
  } catch (error) {
    console.log(error);
  }
}

function renameFileInRootDir() {
  try {
    fs.renameSync("/input.txt", "/output.txt");
  } catch (error) {
    console.log(error);
  }
}

function renameDirInRootDir() {
  try {
    fs.renameSync("/docs", "/mydocs");
  } catch (error) {
    console.log(error);
  }
}
