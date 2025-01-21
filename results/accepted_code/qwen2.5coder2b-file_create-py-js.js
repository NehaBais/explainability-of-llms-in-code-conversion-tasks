const fs = require("fs");
const path = require("path");

function create(directory) {
  fs.open(path.join(directory, "output.txt"), "w", (err) => {
    if (err) throw err;

    fs.mkdir(path.join(directory, "docs"), (err) => {
      if (err) throw err;

      console.log(`Created ${directory}: output.txt and docs`);
    });
  });
}

create("."); // current directory
create("/");
