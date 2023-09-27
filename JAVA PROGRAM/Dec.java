// Your First Program
import java.util.*;
 class D{
    public
     String output="";
     public String xor(String input,String key) {
    String output="";
    
    for (int i = 0; i < input.length(); ++i) {
        // XOR each character in the input with the corresponding character in the key
         char encryptedChar = (char)(input.charAt(i) ^ key.charAt(i % key.length()));
        output=output+encryptedChar;
    }
    
    return output;
 
    }
}
class Dec {
   
    public static void main(String[] args) {
        D obj=new D();
        String str=obj.xor("☺☻♥♦♣♠","0"); 
        System.out.println(str);

}
}