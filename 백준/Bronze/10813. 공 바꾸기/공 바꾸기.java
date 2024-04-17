import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
	
		int n=sc.nextInt();
		int m=sc.nextInt();
		int[] basket = new int[n];
		
		for(int i=0;i<basket.length;i++) {
			basket[i] = i+1;
		}
		while(m>0) {
			int ball1= sc.nextInt();
			int ball2 = sc.nextInt();
			m--;
			int temp=basket[ball1-1];
			basket[ball1-1] = basket[ball2-1];
			basket[ball2-1] = temp;			
		}
		for(int i=0;i<n;i++) {
			System.out.print(basket[i]+" ");
		}			
	}	
}