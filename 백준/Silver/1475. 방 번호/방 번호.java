import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        int[] count = new int[10];
        
        String s = sc.next();
        
        for(int i=0;i<s.length();i++){
            int num = s.charAt(i)-'0';
            if(num==9){
                count[6]++;
            }else{
                count[num]++;
            }
        }
        
        int sixNineSets = (count[6] +1)/2;
        count[6] = sixNineSets;
        
        int max =0;
        for(int n:count){
            max = Math.max(max,n);
        }
        System.out.println(max);
    }
}