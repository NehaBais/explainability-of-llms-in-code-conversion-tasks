function compare(a, b) {
  console.log(
    `${a} ${a === b} ${a !== b} ${a > b} ${a < b} ${a >= b} ${a <= b} ${b}`,
  );
}

function compareIgnoreCase(a, b) {
  console.log(
    `${a} ${a.toLowerCase() === b.toLowerCase()} ${a.toLowerCase() !== b.toLowerCase()} ${a.toLowerCase() > b.toLowerCase()} ${a.toLowerCase() < b.toLowerCase()} ${a.toLowerCase() >= b.toLowerCase()} ${a.toLowerCase() <= b.toLowerCase()} ${b}`,
  );
}

compare("ball", "bell");
compare("ball", "ball");
compare("ball", "ball");

compareIgnoreCase("ball", "bell");
compareIgnoreCase("ball", "ball");
compareIgnoreCase("ball", "ball");

compare("YUP", "YEP");
compare("YUP", "YUP");
compare("YUP", "YEP");

compareIgnoreCase("YUP", "YEP");
compareIgnoreCase("YUP", "YUP");
compareIgnoreCase("YUP", "YEP");

compare("ball", "BELL");
compareIgnoreCase("ball", "BELL");

compare("ball", "BALL");
compareIgnoreCase("ball", "BALL");

compare("YUP", "yep");
compareIgnoreCase("YUP", "yep");
