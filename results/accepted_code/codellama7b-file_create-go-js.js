const fs = require("fs");

function createFile(fn) {
  const fd = fs.openSync(fn, "w");
  console.log(`file ${fn} created!`);
  return fd;
}

function createDir(dn) {
  fs.mkdirSync(dn, { recursive: true });
  console.log(`directory ${dn} created!`);
}

const main = () => {
  createFile("input.txt");
  createFile("/input.txt");
  createDir("docs");
  createDir("/docs");
};

main();
