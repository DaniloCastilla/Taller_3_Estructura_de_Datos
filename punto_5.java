/**
 * @author Danicas99
 * @date 28/11/2017
 * @version 1.0
 */

import java.io.*;

public class Punto_5 {
		
		public static void recorrerVectorRombo(String Array[][] , int n)
		{//Method that crosses the array and prints the external values of the Rhombus
			if(n%2==0)
			{
				for (int i = 0; i < n; i++) {
					for (int j = 0; j < n; j++) {
						
						if((i+j<=(n/2)-1) || (i+(n/2)<= j) || (j+(n/2)<= i) || (i+j>=((n/2)+n-1)))
						{
							
							 System.out.print("[" + Array[i][j] + "]");
							
						}else{
							
							System.out.print("   ");
							
						}
					}
					
					System.out.println();
				}
			}else{
				for (int i = 0; i < n; i++) {
					for (int j = 0; j < n; j++) {
						
						if((i+j<=(n/2)) || (i+(n/2)<= j) || (j+(n/2)<= i) || (i+j>=(n/2)+n-1))
						{
							System.out.print("[" + Array[i][j] + "]");
							
						}else{
							
							System.out.print("   ");
							
						}
						
					}
					System.out.println();
				}

			}

		}//end method
		
		public static void NumberManual(String Matriz[][] , String Vector[] )
		{//Method that assigns the numbers entered by console to the array
			
			int c = 0 ;	
			
		do{
				
			for (int i = 0; i < Matriz.length; i++){
					for (int j = 0; j < Matriz.length; j++) {
						
						Matriz[i][j] = Vector[c];
						System.out.print("[" + Matriz[i][j] + "]");
						c++;
						
				}
				
				
				System.out.println();
			}
		
		}while(c<Vector.length);	
	}//end method

		public static void main(String[] args) throws NumberFormatException, IOException
		{//class main
			
			BufferedReader br = new BufferedReader (new InputStreamReader(System.in));
			BufferedWriter bw = new BufferedWriter (new OutputStreamWriter(System.out));
			
			bw.write("Escriba el tamaño de la Matriz \n");
			bw.flush();
			int m = Integer.parseInt(br.readLine());
			
			String Vector [][] = new String [m][m];
			
			bw.write("Escriba los numeros dentro del arreglo \n");
			bw.flush();
			
			String Array_1 = br.readLine();
			
			String Array_2 [] = Array_1.split(",");

			System.out.println("");
			
			NumberManual(Vector, Array_2);
			
			System.out.println("");
			
			recorrerVectorRombo(Vector , m);
			
		}
	}//end class
