package zadatak1;

import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;

import com.opencsv.CSVReader;
 

public class Zadatak1 {

	public final static String INPUT_FILE = "resources/input1.csv";
	public final static String OUTPUT_FILE = "resources/outpu1.csv";
	
	public static void main(String[] args) {
		
		try (CSVReader csvReader = new CSVReader(new FileReader(INPUT_FILE))) {
			
		}
	}

	public static void generateInputFile() {
		ArrayList<String> lineList = new ArrayList<String>();
		lineList.add("sifra relacije, mesto polaska, mesto dolaska, datum polaska, vreme polaska, planirano vreme dolaska, stanicni peron polaska, cena karte, broj prodatih karata\n");
		lineList.add("BG001, Beograd, Novi Sad, 2024-11-10, 08:00, 09:30, 5, 800, 45\n");
		lineList.add("BG001, Beograd, Novi Sad, 2024-11-10, 14:00, 15:30, 5, 800, 50\n");
		try (FileWriter fileWriter = new FileWriter(new File(INPUT_FILE))) {
			for (String line : lineList) {
				fileWriter.write(line);
			}
			
		} catch (IOException e) {
			System.out.println(e);
		}
	}
}
