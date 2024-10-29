In Java, the equivalent code would be as follows. Please note that it uses String's `replace()` method which takes a regex and replacement string to replace the substring in the original string with given value.

```java
public class Main {
    public static void main(String[] args) {
        String original = "Mary had a X lamb."; 
	String toBeReplaced = "X";
    	String replacement = "big";
	
    	String newString = original.replace(toBeReplaced, replacement);
		
	System.out.println("String after replacement: " + newString);
    }
}
```
In this example, toBeReplaced string is "X" and it will be replaced by replacement string which in this case is "big". So the output of your program would be "Mary had a big lamb." If you run that, then `original.replace(toBeReplaced, replacement)` line of code changes every occurrence of "X" to "big", effectively performing the interpolation.

