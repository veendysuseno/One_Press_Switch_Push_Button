/* Satu Saklar Tekan Push Button Hidupkan satu LED */

int LED = 13; // inisialisasi LED pin 13 
int BUTTON = 7; // inisialisasi pin 7
 // sebagai input sakalar tekan 
int val = 0; // Variabel val digunakan untuk menyimpan 
// pernyataan pada pin input

void setup() {
	pinMode(LED, OUTPUT); // set LED (pin 13) sebagai Output
	pinMode(BUTTON, INPUT);//set BUTTON (pin 7) sbagai input
}

void loop(){
	val = digitalRead(BUTTON); // Membaca & menyimpan                             
	// nilai input
	// Mengecek input ketika HIGH(saat saklar ditekan)
	if (val == HIGH) {
		digitalWrite(LED, HIGH); // LED ON
	} else {
		digitalWrite(LED, LOW); // LED OFF
	}
}
