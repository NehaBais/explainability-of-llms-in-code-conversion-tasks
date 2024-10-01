function boolean_ops(a, b) {
  console.log(
    "%s and %s -> %s",
    a ? "true" : "false",
    b ? "true" : "false",
    a && b ? "true" : "false",
  );
  console.log(
    "%s or %s -> %s",
    a ? "true" : "false",
    b ? "true" : "false",
    a || b ? "true" : "false",
  );
  console.log(
    "%s xor %s -> %s",
    a ? "true" : "false",
    b ? "true" : "false",
    a ^ b ? "true" : "false",
  );
  console.log("not %s -> %s", a ? "true" : "false", !a ? "true" : "false");
}

boolean_ops(true, true);
boolean_ops(true, false);
boolean_ops(false, true);
boolean_ops(false, false);
