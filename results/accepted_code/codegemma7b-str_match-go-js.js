function match(first, second) {
  console.log(`1. ${first} starts with ${second}: ${first.startsWith(second)}`);
  const i = first.indexOf(second);
  console.log(`2. ${first} contains ${second}: ${i >= 0}`);
  if (i >= 0) {
    console.log(`2.1. at location ${i}`);
    let start = i + 1;
    while ((i = first.indexOf(second, start)) >= 0) {
      console.log(`2.2. at location ${i}`);
      start = i + 1;
    }
    console.log("2.2. and that's all");
  }
  console.log(`3. ${first} ends with ${second}: ${first.endsWith(second)}`);
}

match("abracadabra", "abr");
