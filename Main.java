import java.util.*;

class Sorting implements Comparable<Sorting>{
    private String name;
    private String surname;
    private String class_letter;
    private String date;
    private int class_num;
    private String letter;

    public Sorting(String name, String surname, int class_num, String class_letter, String date,String letter) {
        this.name = name;
        this.surname = surname;
        this.class_letter = class_letter;
        this.date = date;
        this.class_num = class_num;
        this.letter = letter;
    }

    @Override
    public int compareTo(Sorting o) {
        if(this.class_num > o.class_num){
            return 1;
        }else if(this.class_num < o.class_num){
            return -1;
        }else{
            if(this.letter.compareTo(o.letter) > 0){
                return 1;
            }else if(this.letter.compareTo(o.letter) < 0){
                return -1;
            }else{
                if(this.surname.compareTo(o.surname) > 0){
                    return 1;
                }else if(this.surname.compareTo(o.surname) < 0){
                    return -1;
                }else{
                    return 0;
                }
            }

        }
    }

    @Override
    public String toString() {
        return  this.class_letter + " " + this.surname + " " + this.name + " " + this.date;
    }
}

public class Main{
    static int convert_to_integer(String s){
        int sum = 0;
        for(int i = 0;i<s.length();i++){
            try{
                sum = 10*sum + Integer.parseInt(Character.toString(s.charAt(i)));
            }catch (Exception e){
                break;
            }
        }
        return sum;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        PriorityQueue<Sorting>q = new PriorityQueue<Sorting>();
        int n = sc.nextInt();
        for(int i = 0;i<n;i++){
            String surname = sc.next();
            String name = sc.next();
            String class_name = sc.next();
            String date = sc.next();
            int clas = convert_to_integer(class_name);
            String letter = Character.toString(class_name.charAt(class_name.length()-1));
            q.offer(new Sorting(name,surname,clas,class_name,date,letter));
        }
        while(!q.isEmpty()){
            System.out.println(q.poll());
        }
    }
}