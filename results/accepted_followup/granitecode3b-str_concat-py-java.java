String s1 = "hello";
System.out.println(s1 + " world");

String s2 = s1 + " world";
System.out.println(s2);

String[] arr = {"hello", "world", "mom"};
String s3 = String.join(", ", arr);
System.out.println(s3);