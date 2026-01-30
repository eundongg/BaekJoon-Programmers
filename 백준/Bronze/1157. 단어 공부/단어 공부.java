import java.io.*;
public class Main{
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        String str = br.readLine().toLowerCase();
        int[] arr = new int[26];
        int max = 0;
        char word = ' ';
        boolean flag = true;
        
        for(int i=0;i<str.length();i++){
            int idx = str.charAt(i)-'a';
            arr[idx]++;
            if(max<arr[idx]) {
                max = arr[idx];
                word = str.charAt(i);
                flag = true;
            }else if(max == arr[idx] && word != str.charAt(i)){
                flag = false;
            }
        }
        if(flag){
            System.out.print(Character.toUpperCase(word));
        }else{
            System.out.print('?');
        }
        
    }
}