const fs = require("fs");
const path = require("path");

function create(root) {
  return fs.promises
    .writeFile(path.join(root, "output.txt"), "")
    .then(() => {
      return fs.mkdir(path.join(root, "docs")).catch((error) => {
        if (error.code === "EEXIST") {
          return fs.rmdir(path.join(root, "docs"));
        } else {
          throw error;
        }
      });
    })
    .catch((error) => {
      throw error;
    });
}

function main() {
  create(".")
    .then(() => {
      return create("/");
    })
    .catch((error) => {
      console.error(`Error: ${error.message}`);
      process.exit(1);
    });
}
