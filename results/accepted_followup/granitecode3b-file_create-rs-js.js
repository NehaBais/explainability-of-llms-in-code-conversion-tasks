const fs = require("fs");
const path = require("path");

const FILE_NAME = "output.txt";
const DIR_NAME = "docs";

function create(root) {
  return new Promise((resolve, reject) => {
    const fPath = path.join(root, FILE_NAME);
    const dPath = path.join(root, DIR_NAME);

    fs.mkdir(dPath, { recursive: true }, (err) => {
      if (err) {
        return reject(err);
      }

      fs.open(fPath, "w+", 0o644, (err, fd) => {
        if (err) {
          return reject(err);
        }

        resolve({ fd });
      });
    });
  });
}

async function run() {
  try {
    await create(__dirname).then(create("/"));
    console.log("Success!");
  } catch (error) {
    console.error(error);
    process.exit(1);
  }
}

run();
