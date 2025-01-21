String original = "Mary had a X lamb.";
String little = "big";
String replaced = String.format(original, little);
System.out.println(replaced);