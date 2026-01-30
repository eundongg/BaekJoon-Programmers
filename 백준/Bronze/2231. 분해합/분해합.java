import java.io.*;
public class Main{
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int target = Integer.parseInt(br.readLine());
        
        for(int i=1;i<target;i++){
            String s = String.valueOf(i);
            
            int sum = i; // 자기 자신 더하기
            for(int j=0;j<s.length();j++){
                sum+=s.charAt(j)-'0';
            }
            if(sum==target){
                System.out.println(i);
                return;
            }
        }
        System.out.println(0);
        
    }
}