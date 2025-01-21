String s1 = "hello";
System.out.println(s1 + " world"); // This works in Java as well

String s2 = s1 + " world"; 
System.out.println(s2); // This also works in Java

String s3 = ", ".join([s1, "world", "mom"]); 
// Now we use a comma-separated list for s3 instead of the join() function
System.out.println(s3); 

String s4 = ", ".join([s1, "world", "mom"]); 
// And this also works in Java
System.out.println(s4);