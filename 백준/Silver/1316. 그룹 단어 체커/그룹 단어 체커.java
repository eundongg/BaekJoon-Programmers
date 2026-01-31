import java.io.*;
public class Main{
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        int testCase = Integer.parseInt(br.readLine());
        int cnt =0;
        
        
        while(testCase>0){
            String str = br.readLine();
            
            boolean[] alphabet = new boolean[26];
            boolean isGroup = true;
            
            for(int i=0;i<str.length();i++){
                int now = str.charAt(i)-'a';
                
                if(i==0){
                    alphabet[now] = true;
                }else{
                    // 지금 글자가 이전 글자와 다를 때
                    if(str.charAt(i) != str.charAt(i-1)){
                        // 나온 적 있는거
                        if(alphabet[now]){
                            isGroup = false;
                        }// 나온 적 없는거
                        else{                            
                            alphabet[now] = true;
                        }                           
                    }
                }                
            }
            if(isGroup) cnt++;
            testCase--;
        }
        System.out.print(cnt);
    }
}