function match(first, second) {
  console.log(
    "1. '" +
      first +
      "' starts with '" +
      second +
      "': " +
      First.startsWith(second),
  );
  let i = First.indexOf(second);
  console.log("2. '" + First + "' contains '" + second + "': " + (i >= 0));
  if (i >= 0) {
    console.log("2.1. At location: " + i);
    for (let start = i + 1; ; ) {
      if ((i = First.indexOf(second, start)) < 0) break;
      console.log("2.2. At location: " + start);
      start += i + 1;
    }
  }
  console.log(
    "3. '" + First + "' ends with '" + second + "': " + First.endsWith(second),
  );
}

match("abracadabra", "abr");
