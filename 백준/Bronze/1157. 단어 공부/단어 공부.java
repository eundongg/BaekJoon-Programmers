import java.io.*;
public class Main{
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        String str = br.readLine().toUpperCase();
        int[] cnt = new int[26];
        
        for(int i=0;i<str.length();i++){
            cnt[str.charAt(i)-'A']++;
        }       
       
        int max = 0;
        char word = ' ';
        
        for(int i=0;i<26;i++){
            if(cnt[i]>max){
                max = cnt[i];
                word = (char)(i+'A');
            }else if(cnt[i]==max){
                word = '?';
            }
        }
        System.out.print(word);
        
    }
}