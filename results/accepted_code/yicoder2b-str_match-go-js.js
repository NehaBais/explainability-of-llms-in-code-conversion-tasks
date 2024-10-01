function match(first, second) {
  console.log(`1. ${first} starts with ${second}: ` + first.startsWith(second));
  let i = first.indexOf(second);
  console.log(`2. ${first} contains ${second}: ` + (i >= 0));
  if (i >= 0) {
    for (let start = i + 1; ; ) {
      let i = first.indexOf(second, start);
      if (i < 0) break;
      console.log(`2.1. at location ${i}, `);
      start = i + 1;
    }
    console.log("2.1. and that's all");
  }
  console.log(`3. ${first} ends with ${second}: ` + first.endsWith(second));
}

match("abracadabra", "abr");
