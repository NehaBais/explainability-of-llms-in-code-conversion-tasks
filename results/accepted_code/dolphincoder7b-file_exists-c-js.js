const { stat } = require("fs");

/** Check for regular file. */
function checkReg(path) {
  return stat(path).then((stats) => stats.isFile());
}

/** Check for directory. */
function checkDir(path) {
  return stat(path).then((stats) => stats.isDirectory());
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
