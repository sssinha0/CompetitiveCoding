import java.util.*;
public class StringEncodeDecode_leetcode272 {
    // Encodes a list of strings to a single string.
    public String encode(List<String> strs) {
        StringBuilder sb = new StringBuilder();
        for(String str: strs){
            sb.append(str);
            sb.append('#');
        }
        return sb.toString();
    }

    // Decodes a single string to a list of strings.
    public List<String> decode(String s) {
        List<String> result = new ArrayList<>();
        StringBuilder current = new StringBuilder();
        for(char c: s.toCharArray()){
            if(c == '#'){
                result.add(current.toString());
                current = new StringBuilder();
            }else{
                current.append(c);
            }
        }
        return result;
    }
    public static void main(String[] args) {
        StringEncodeDecode_leetcode272 codec = new StringEncodeDecode_leetcode272();
        List<String> original = Arrays.asList("hello", "world", "java");
        String encoded = codec.encode(original);
        System.out.println("Encoded: " + encoded);
        List<String> decoded = codec.decode(encoded);
        System.out.println("Decoded: " + decoded);
    }
}