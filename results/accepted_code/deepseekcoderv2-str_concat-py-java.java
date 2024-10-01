public class TestJava {  
    public static void main(String[] args) { 
        String str1;
        String str2;
        str1 = "hello";
        System.out.println(str1);
        
        System.out.println("hello" + " world");
        System.out.println(", ".join([str1, "world", "mom"]));
    }
}