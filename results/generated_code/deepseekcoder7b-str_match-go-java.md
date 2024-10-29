Below is the Java equivalent of your Golang code. For simplicity in this example, I used the `contains` method to check for a substring instead of finding an index and looping through again if necessary.

```java
public class Main {
    public static void main(String[] args) {
        match("abracadabra", "abr");
    }
    
    public static void match(String first, String second){
        System.out.println("1. " + first + " starts with " + second + ": " + first.startsWith(second));
        
        if (first.contains(second)){
            System.out.println("2. " + first + " contains " + second + ": true");
            
            int index = 0;
            while ((index = first.indexOf(second, index)) != -1) {
                System.out.println("2.1. at location " + index);
                ++index;
            }
        } else{
          System.out.println("2. " + first + " contains " + second + ": false");  
        }
        
        System.out.println("3. " + first + " ends with " + second + ": " + first.endsWith(second)); 
    }
}
```
This code will work the same way as your original Golang code. It checks if a string starts, contains and ends another one in Java using built-in methods of String class. The `contains` method can handle multiple occurrences unlike in Go's Index function that only gives index at first occurrence.

