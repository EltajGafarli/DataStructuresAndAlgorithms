import java.io.*;
import java.lang.reflect.Array;
import java.util.*;

public class FirstUniqueChar{

    static int first_unique_char(String s){
        HashMap<Character,Integer>map = new HashMap<>();
        for(int i = 0;i<s.length();i++){
            if(!map.containsKey(s.charAt(i))){
                map.put(s.charAt(i),i);
            }else{
                map.put(s.charAt(i),-1);
            }
        }
        int index = 1000000;
        boolean isNotUnique = true;
        for(Character ch : map.keySet()){
            if(map.get(ch) != -1){
                isNotUnique = false;
                if(index > map.get(ch)){
                    index = map.get(ch);
                }
            }
        }
        return !isNotUnique ? index : -1;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        System.out.println(first_unique_char(s));
    }
}
