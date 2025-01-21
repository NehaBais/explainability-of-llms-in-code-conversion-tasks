const fs = require("fs");
const path = require("path");

function checkFile(file) {
  return new Promise((resolve, reject) => {
    fs.stat(file, (err, stats) => {
      if (err) {
        resolve(false);
      } else {
        resolve(stats.isFile());
      }
    });
  });
}

function checkDirectory(dir) {
  return new Promise((resolve, reject) => {
    fs.stat(dir, (err, stats) => {
      if (err) {
        resolve(false);
      } else {
        resolve(stats.isDirectory());
      }
    });
  });
}

async function runChecks() {
  const cwd = process.cwd();

  console.log(
    `input.txt is a regular file in ${cwd}? ${(await checkFile(path.join(cwd, "input.txt"))) ? "yes" : "no"}`,
  );
  console.log(
    `docs is a directory in ${cwd}? ${(await checkDirectory(path.join(cwd, "docs"))) ? "yes" : "no"}`,
  );
  console.log(
    `/input.txt is a regular file? ${(await checkFile("/input.txt")) ? "yes" : "no"}`,
  );
  console.log(
    `/docs is a directory? ${(await checkDirectory("/docs")) ? "yes" : "no"}`,
  );
}

runChecks().catch(console.error);
