import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int max= sc.nextInt();
		int cnt =1;
		for(int i=1;i<9;i++) {
			int num = sc.nextInt();
			if(max<num) {
				max = num; 
				cnt=i+1;
			}
			
		}
		System.out.println(max+"\n"+ cnt);
		
	}
}