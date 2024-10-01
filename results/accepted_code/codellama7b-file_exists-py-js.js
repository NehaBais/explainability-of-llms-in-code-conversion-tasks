const fs = require("fs");

function verifyFileAndDirectoryExist(path) {
  if (fs.existsSync(path)) {
    console.log(`${path} exists`);
  } else {
    console.log(`${path} does not exist`);
  }
}

verifyFileAndDirectoryExist("input.txt"); // verify the existence of file input.txt in current working directory
verifyFileAndDirectoryExist("/input.txt"); // verify the existence of file input.txt in filesystem root
verifyFileAndDirectoryExist("docs"); // verify the existence of directory docs in current working directory
verifyFileAndDirectoryExist("/docs"); // verify the existence of directory docs in filesystem root
