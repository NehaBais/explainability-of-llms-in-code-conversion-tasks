In Java there is no direct method to prepend a String, but the same functionality can be achieved by creating another string and concatenating. Here's how you might convert this JavaScript code to Java:

```java
public class Main {
    public static void main(String[] args) {
        // Create a string variable equal to any text value
        String s = ", World"; 
        
        // Prepend the string variable with another string literal
        s = "Hello" + s;
        
        // Print the result
        System.out.println(s);
    }
}
```
