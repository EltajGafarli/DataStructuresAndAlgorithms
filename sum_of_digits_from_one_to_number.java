import java.io.*;
import java.util.Locale;
import java.util.Scanner;

public class Main {

    static long sum_of_digit_of_number(long n){
        long s = 0;
        while(n > 0){
            s += n % 10;
            n = n / 10;
        }
        return s;
    }

    static long sum_of_digits_from_one_to_number(long n){
        if(n <= 0) return 0;
        long res = n / 10 * 45;
        long temp = n % 10;
        res = res + 10 * sum_of_digits_from_one_to_number(n / 10 - 1) + (temp + 1) * sum_of_digit_of_number(n / 10) + temp*(temp + 1) / 2;
        return res;
    }

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        long a = sc.nextLong();
        long b = sc.nextLong();
        System.out.println(sum_of_digits_from_one_to_number(b) - sum_of_digits_from_one_to_number(a - 1));
    }
}
