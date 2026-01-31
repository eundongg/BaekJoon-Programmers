import java.io.*;
import java.util.*;
public class Main{
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        int testCase = Integer.parseInt(br.readLine());
        String[] arr = new String[testCase];
        
        for(int i=0;i<testCase;i++){
            arr[i] = br.readLine();
        }
        Arrays.sort(arr, (s1,s2)->{
            // 길이가 다를 때 짧은 것부터 오도록
            if(s1.length() != s2.length()){
                return s1.length() - s2.length();
            }
            // 길이가 같을 때 알파벳 순으로 오도록
            return s1.compareTo(s2);
        });
        
        LinkedHashSet<String> set = new LinkedHashSet<>();
        
        for(int i=0;i<testCase;i++){
            set.add(arr[i]);
        }
        
        StringBuilder sb = new StringBuilder();
        
        for(String s : set){
            sb.append(s).append("\n");
        }
        System.out.print(sb);
    }
}