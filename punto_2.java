import java.io.*;
/*
*@author Danicas99
*/
public class Punto_2 {

	public static void cargarVector(int array[][], int minRandom, int maxRandom) {
        for (int i = 0; i < array.length; i++) {
            for (int j = 0; j < array[i].length; j++) {
                array[i][j] = minRandom - ((int) Math.round((Math.random()) * (minRandom - maxRandom)));
            }
        }
    }
	
	public static void imprimeVector(int array[][]){
        for (int i = 0; i < array.length; i++) {
            for (int j = 0; j < array[i].length; j++) {
                System.out.print("[" + array[i][j] + "]");
            }
            System.out.println("");
        }
    }
	
	public static void imprimeArray(int array[]){
        for (int i = 0; i < array.length; i++) {
            System.out.print("[" + array[i] + "]");
        }
    }
	
	public static void cargarArray (int array[]) throws NumberFormatException, IOException
	{
		BufferedReader br = new BufferedReader (new InputStreamReader(System.in));
		int n;
		for (int i = 0; i < array.length; i++) {
			n = Integer.parseInt(br.readLine());
			array[i] = n;
			
		}
	}
	
	public static void ArrayDiagonal(int Array[][]){
		
		int m = Array.length;
		int inicio = 0;
		int limite = Array.length - 1;
		int c = 1;
		int Num_1;
		while(c <= m*m){
		int L=0;
			
		for (int i = inicio; i <= limite; i++) {
			 Num_1 = Array[inicio][i];
			 System.out.print("["+Num_1+"]");
			 c++;
			 
		}

		for (int i = inicio+1; i <= limite; i++) {
			 Num_1 = Array[i][limite];
			 System.out.print("["+Num_1+"]");
			 c++;
		}
		
		for (int i = limite-1; i >= inicio; i--) {
			 Num_1 = Array[limite][i];
			 System.out.print("["+Num_1+"]");
			 c++;
		}
		
		for (int i = limite-1; i >= inicio+1; i--) {
			 Num_1 = Array[i][inicio];
			 System.out.print("["+Num_1+"]");
			 c++;
		}
		
		inicio +=1;
		limite -=1;
		
		}
			}

	
	public static void main(String[] args) throws NumberFormatException, IOException {
		
		BufferedReader br = new BufferedReader (new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter (new OutputStreamWriter(System.out));
		
		bw.write("Escriba el tamaño de la Matriz \n");
		bw.flush();
		
		int m = Integer.parseInt(br.readLine());
		
		/*int vector[] = new int [m];
		cargarArray(vector);
		imprimeArray(vector);*/
		
		
		int Vector [][] = new int [m][m];
		cargarVector(Vector, (0), (9));
		imprimeVector(Vector);
		System.out.println("");
		ArrayDiagonal(Vector);
		
	}
	
}

