function match(first, second) {
  console.log(
    "1. '" +
      first +
      "' starts with '" +
      second +
      "': " +
      first.startsWith(second),
  );
  let i = first.indexOf(second);
  if (i >= 0) {
    console.log("2. '" + first + "' contains '" + second + "': true");
    while (i !== -1) {
      console.log("2.1. at location " + i);
      i = first.indexOf(second, i + 1);
      if (i !== -1) console.log("2.2. at location " + i);
    }
    console.log("2.2. and that's all");
  } else {
    console.log("2. '" + first + "' contains '" + second + "': false");
  }

  console.log(
    "3. '" + first + "' ends with '" + second + "': " + first.endsWith(second),
  );
}

match("abracadabra", "abr");
