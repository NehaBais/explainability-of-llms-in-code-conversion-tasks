Here is the equivalent Java code for your C program. Note that in this version of Java, string methods are implemented differently and it's not as straightforward to compare substrings like in C.

However, here we have a Java implementation which provides similar functionality by using String class methods startWith(), contains() & endsWith(). 

```java
public class Main {
    public static void main(String[] args) {
        String container = "Hello";
        String target1 = "Hell";
        System.out.println("Starts with test (Hello,Hell): " + startsWith(container,target1));
        
        String target2 = "llo";
        System.out.println("Contains test (Hello,llo): "+ doesContain(container,target2));
            
        String target3 = "lo";
        System.out.println("Ends with test (Hello,lo): " + endsWith(container,target3));   
    }
    
    public static boolean startsWith(String container, String target) {
        return container.startsWith(target);        
    }  
      
    public static boolean doesContain(String container, String target) {
        return container.contains(target);        
    } 
    
    public static boolean endsWith(String container, String target) {
        return container.endsWith(target);        
    }     
}
```  
This Java code should produce the same output as your C program. It checks if a given string starts with another string (startsWith()), contains another substring (doesContain()), or ends with another string (endsWith()). For part 2, it uses contains() to check for any occurrence of the second string within the first one.

