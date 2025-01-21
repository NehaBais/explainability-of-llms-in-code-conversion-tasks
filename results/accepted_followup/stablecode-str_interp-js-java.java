String original = "Mary had a X lamb.";
String little = "little";

// Using String.format() function for string interpolation
String replaced = String.format(original, little);
System.out.println("Replaced String: " + replaced);

// Using StringBuilder for string interpolation
StringBuilder sb = new StringBuilder();
sb.append(original);
int index = sb.indexOf("X"); // find the position of 'X' in original string
if (index != -1) { // if 'X' is found 
    sb.replace(index, index + 1), little); // replace 'X' with "little"  
}
System.out.println("Replaced String: " + sb.toString());