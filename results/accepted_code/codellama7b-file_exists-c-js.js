const { statSync } = require("fs");
const { S_ISREG, S_ISDIR } = require("path");

function checkReg(path) {
  try {
    const stats = statSync(path);
    return S_ISREG(stats.mode);
  } catch (err) {
    return false;
  }
}

function checkDir(path) {
  try {
    const stats = statSync(path);
    return S_ISDIR(stats.mode);
  } catch (err) {
    return false;
  }
}

console.log(
  `input.txt is a regular file? ${checkReg("input.txt") ? "yes" : "no"}`,
);
console.log(`docs is a directory? ${checkDir("docs") ? "yes" : "no"}`);
console.log(
  `/input.txt is a regular file? ${checkReg("/input.txt") ? "yes" : "no"}`,
);
console.log(`/docs is a directory? ${checkDir("/docs") ? "yes" : "no"}`);
