const fs = require("fs");

// Check for regular file.
function checkReg(path) {
  return new Promise((resolve, reject) => {
    fs.stat(path, (err, stat) => {
      if (err && err.code !== "ENOENT") {
        reject(err);
      } else if (err) {
        resolve(false);
      } else {
        resolve(stat.isFile());
      }
    });
  });
}

// Check for directory.
function checkDir(path) {
  return new Promise((resolve, reject) => {
    fs.stat(path, (err, stat) => {
      if (err && err.code !== "ENOENT") {
        reject(err);
      } else if (err) {
        resolve(false);
      } else {
        resolve(stat.isDirectory());
      }
    });
  });
}

async function main() {
  console.log(
    `input.txt is a regular file? ${(await checkReg("input.txt")) ? "yes" : "no"}`,
  );
  console.log(
    `docs is a directory? ${(await checkDir("docs")) ? "yes" : "no"}`,
  );
  console.log(
    `/input.txt is a regular file? ${(await checkReg("/input.txt")) ? "yes" : "no"}`,
  );
  console.log(
    `/docs is a directory? ${(await checkDir("/docs")) ? "yes" : "no"}`,
  );
}

main();
