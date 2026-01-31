import java.io.*;
import java.util.*;
public class Main{
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        StringTokenizer st = new StringTokenizer(br.readLine());
        int power = Integer.parseInt(st.nextToken()); // 올라가는 거리
        int slide = Integer.parseInt(st.nextToken()); // 미끄러지는 거리
        int total = Integer.parseInt(st.nextToken()); // 나무 높이
        
        int days = (total-slide)/(power-slide);
        
        if((total-slide)%(power-slide)!=0){
            days++;
        }
        System.out.print(days);
    }
}