```java
public class Main {
    public static void main(String[] args) {
        String s = "hello";
        
        System.out.println(s + " literal\n"); // or 
        System.out.println(s + " literal\n");
        
        String s2 = s.concat(" literal"); 
        System.out.println(s2);
        s2 = null;
    }
}
```
