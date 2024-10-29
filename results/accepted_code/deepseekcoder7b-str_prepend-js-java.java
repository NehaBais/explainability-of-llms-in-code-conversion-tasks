StringBuilder sb = new StringBuilder();
sb.append("Hello");  // Append "Hello" at the end of the string builder
System.out.println(sb);  
// if you want to prepend a text value instead use, 
sb.insert(0,"anotherText"); // Insert "anotherText" at position 0 (start)
System.out.println(sb);