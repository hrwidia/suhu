/*
	Nama lengkap : Hafiz Ramadhan

*/
#include <iostream>
#include <limits>
using namespace std;

int main(){

	string TypeSatu, TypeDua, confirm;
	int suhu;
	float hasil;

	cout<<" Pilih Suhu : \n 1. Celcius (C) \n 2. Fahrenheit (F) \n 3. Reamur (R) \n 4. Kelvin (K) \n ";
	cout<<"Jawaban anda : "; cin >> TypeSatu;
	cout<<"---------------------------------\n";

	if(TypeSatu == "1" || TypeSatu == "C" || TypeSatu == "c" || TypeSatu == "Celcius" || TypeSatu ==  "celcius" || TypeSatu == "CELCIUS"){
		cout<<"Masukan suhu Celcius ('C) : ";
		cin >> suhu;
		cout<<"---------------------------------\n";
		if(cin.good()){
			if(suhu == 0){
				cout<<"Apakah anda yakin ingin memasukan suhu 0 ? [y/n] "; cin >> confirm;
				if(confirm == "y"){
					cout<<" Konversi Ke : \n 1. Fahrenheit (F) \n 2. Reamur (R) \n 3. Kelvin (K) \n ";
                                	cout<<"Jawaban anda : "; cin >> TypeDua;
                                	cout<<"-----------------------------------\n";
                               		if(TypeDua == "1" || TypeDua == "F" || TypeDua == "f" || TypeDua ==  "Fahrenheit" || TypeDua == "fahrenheit" || TypeDua == "FAHRENHEIT"){
                                        	hasil =  suhu * 9 / 5 + 32;
                                        	cout << suhu << "'C -> Fahrenheit = " << hasil << "F\n";
                                	}else if (TypeDua == "2" || TypeDua == "R" || TypeDua == "r" || TypeDua == "Reamur" || TypeDua == "reamur" || TypeDua == "REAMUR"){
                                        	hasil = suhu * 4 / 5;
                                        	cout << suhu << "'C -> Reamur = " << hasil << "R\n";
                                	}else if(TypeDua == "3" || TypeDua == "K" || TypeDua == "k" || TypeDua == "Kelvin" || TypeDua == "kelvin" || TypeDua == "KELVIN"){
                                        	hasil = suhu + 273.15;
                                        	cout << suhu << "'C -> Kelvin = " << hasil << "K\n";
                               		}else{
                                        	cout <<"Jawaban anda tidak sesuai";
                                	}
                                		cout << "------------------------------------------------------\n";
                                		cout << "Nama Lengkap : Hafiz Ramadhan\n";
				}else{
					exit(0);
				}
			}else{
				cout<<" Konversi Ke : \n 1. Fahrenheit (F) \n 2. Reamur (R) \n 3. Kelvin (K) \n ";
				cout<<"Jawaban anda : "; cin >> TypeDua;
				cout<<"-----------------------------------\n";
				if(TypeDua == "1" || TypeDua == "F" || TypeDua == "f" || TypeDua ==  "Fahrenheit" || TypeDua == "fahrenheit" || TypeDua ==  "FAHRENHEIT"){
					hasil =  suhu * 9 / 5 + 32;
					cout << suhu << "'C -> Fahrenheit = " << hasil << "C\n";
				}else if (TypeDua == "2" || TypeDua == "R" || TypeDua == "r" || TypeDua == "Reamur" || TypeDua == "reamur" || TypeDua == "REAMUR"){
					hasil = suhu * 4 / 5;
					cout << suhu << "'C -> Reamur = " << hasil << "R\n";
				}else if(TypeDua == "3" || TypeDua == "K" || TypeDua == "k" || TypeDua == "Kelvin" || TypeDua == "kelvin" || TypeDua == "KELVIN"){
					hasil = suhu + 273.15;
					cout << suhu << "'C -> Kelvin = " << hasil << "K\n";
				}else{
					cout <<"Jawaban anda tidak sesuai\n";
				}
				cout << "------------------------------------------------------\n";
				cout << "Nama Lengkap : Hafiz Ramadhan\n";
			}
		}else{
			cout<<suhu;
			cout<<" Suhu yang anda masukan tidak valid, silahkan masukan angka\n";
		}
	}else if(TypeSatu == "2" || TypeSatu == "F" || TypeSatu == "f" || TypeSatu == "Fahrenheit" || TypeSatu ==  "fahrenheit" || TypeSatu == "FAHRENHEIT"){
		cout<<"Masukan suhu Fahrenheit ('F) : ";
		cin >> suhu;
		cout<<"---------------------------------\n";
		if(cin.good()){
			if(suhu == 0){
				cout<<"Apakah anda yakin ingin memasukan suhu 0 ? [y/n] "; cin >> confirm;
				if(confirm == "y"){
					cout<<" Konversi Ke : \n 1. Celcius (C) \n 2. Reamur (R) \n 3. Kelvin (K) \n ";
                	cout<<"Jawaban anda : "; cin >> TypeDua;
                	cout<<"-----------------------------------\n";
               		if(TypeDua == "1" || TypeDua == "C" || TypeDua == "c" || TypeDua ==  "Celcius" || TypeDua == "celcius" || TypeDua == "CELCIUS"){
               				hasil = (suhu - 32) * 5/9;
                        	cout << suhu << "'F -> Celcius = " << hasil << "C\n";
                	}else if (TypeDua == "2" || TypeDua == "R" || TypeDua == "r" || TypeDua == "Reamur" || TypeDua == "reamur" || TypeDua == "REAMUR"){
                			hasil = ((suhu - 32) * 5/9) * 0.8;
                        	cout << suhu << "'F -> Reamur = " << hasil << "R\n";
                	}else if(TypeDua == "3" || TypeDua == "K" || TypeDua == "k" || TypeDua == "Kelvin" || TypeDua == "kelvin" || TypeDua == "KELVIN"){
                        	hasil = (suhu - 32) * 5 / 9 + 273.15;
                        	cout << suhu << "'F -> Kelvin = " << hasil << "K\n";
               		}else{
                        	cout <<"Jawaban anda tidak sesuai\n";
                	}
                		cout << "------------------------------------------------------\n";
                		cout << "Nama Lengkap : Hafiz Ramadhan\n";
				}else{
					exit(0);
				}
			}else{
				cout<<" Konversi Ke : \n 1. Celcius (C) \n 2. Reamur (R) \n 3. Kelvin (K) \n ";
            	cout<<"Jawaban anda : "; cin >> TypeDua;
            	cout<<"-----------------------------------\n";
           		if(TypeDua == "1" || TypeDua == "C" || TypeDua == "c" || TypeDua ==  "Celcius" || TypeDua == "celcius" || TypeDua == "CELCIUS"){
           				hasil = (suhu - 32) * 5/9;
                    	cout << suhu << "'F -> Celcius = " << hasil << "C\n";
            	}else if (TypeDua == "2" || TypeDua == "R" || TypeDua == "r" || TypeDua == "Reamur" || TypeDua == "reamur" || TypeDua == "REAMUR"){
            			hasil = ((suhu - 32) * 5/9) * 0.8;
                    	cout << suhu << "'F -> Reamur = " << hasil << "R\n";
            	}else if(TypeDua == "3" || TypeDua == "K" || TypeDua == "k" || TypeDua == "Kelvin" || TypeDua == "kelvin" || TypeDua == "KELVIN"){
                    	hasil = (suhu - 32) * 5 / 9 + 273.15;
                    	cout << suhu << "'F -> Kelvin = " << hasil << "K\n";
           		}else{
                    	cout <<"Jawaban anda tidak sesuai\n";
            	}
            		cout << "------------------------------------------------------\n";
            		cout << "Nama Lengkap : Hafiz Ramadhan\n";
			}
		}else{
			cout<<suhu;
			cout<<" Suhu yang anda masukan tidak valid, silahkan masukan angka";
		}
		/*fahrenheit*/
	}else if (TypeSatu == "3" || TypeSatu == "R" || TypeSatu == "r" || TypeSatu == "Reamur" || TypeSatu ==  "reamur" || TypeSatu == "REAMUR"){
		cout<<"Masukan suhu Reamur('R) : ";
		cin >> suhu;
		cout<<"---------------------------------\n";
		if(cin.good()){
			if(suhu == 0){
				cout<<"Apakah anda yakin ingin memasukan suhu 0 ? [y/n] "; cin >> confirm;
				if(confirm == "y"){
					cout<<" Konversi Ke : \n 1. Celcius (C) \n 2. Fahrenheit (F) \n 3. Kelvin (K) \n ";
                	cout<<"Jawaban anda : "; cin >> TypeDua;
                	cout<<"-----------------------------------\n";
               		if(TypeDua == "1" || TypeDua == "C" || TypeDua == "c" || TypeDua ==  "Celcius" || TypeDua == "celcius" || TypeDua == "CELCIUS"){
               				hasil = suhu / 0.8;
                        	cout << suhu << "'R -> Celcius = " << hasil << "C\n";
                	}else if (TypeDua == "2" || TypeDua == "F" || TypeDua == "f" || TypeDua == "Fahrenheit" || TypeDua == "fahrenheit" || TypeDua == "FAHRENHEIT"){
                			hasil = suhu / 0.8 * 9 / 5 + 32;
                        	cout << suhu << "'R -> Fahrenheit = " << hasil << "F\n";
                	}else if(TypeDua == "3" || TypeDua == "K" || TypeDua == "k" || TypeDua == "Kelvin" || TypeDua == "kelvin" || TypeDua == "KELVIN"){
                			hasil = suhu / 0.8 + 273.15;
                        	cout << suhu << "'R -> Kelvin = " << hasil << "K\n";
               		}else{
                        	cout <<"Jawaban anda tidak sesuai\n";
                	}
                		cout << "------------------------------------------------------\n";
                		cout << "Nama Lengkap : Hafiz Ramadhan\n";
				}else{
					exit(0);
				}
			}else{
				cout<<" Konversi Ke : \n 1. Celcius (C) \n 2. Fahrenheit (F) \n 3. Kelvin (K) \n ";
            	cout<<"Jawaban anda : "; cin >> TypeDua;
            	cout<<"-----------------------------------\n";
           		if(TypeDua == "1" || TypeDua == "C" || TypeDua == "c" || TypeDua ==  "Celcius" || TypeDua == "celcius" || TypeDua == "CELCIUS"){
           				hasil = suhu / 0.8;
                    	cout << suhu << "'R -> Celcius = " << hasil << "C\n";
            	}else if (TypeDua == "2" || TypeDua == "F" || TypeDua == "f" || TypeDua == "Fahrenheit" || TypeDua == "fahrenheit" || TypeDua == "FAHRENHEIT"){
            			hasil = suhu / 0.8 * 9 / 5 + 32;
                    	cout << suhu << "'R -> Fahrenheit = " << hasil << "F\n";
            	}else if(TypeDua == "3" || TypeDua == "K" || TypeDua == "k" || TypeDua == "Kelvin" || TypeDua == "kelvin" || TypeDua == "KELVIN"){
            			hasil = suhu / 0.8 + 273.15;
                    	cout << suhu << "'R -> Kelvin = " << hasil << "K\n";
           		}else{
                    	cout <<"Jawaban anda tidak sesuai\n";
            	}
            		cout << "------------------------------------------------------\n";
            		cout << "Nama Lengkap : Hafiz Ramadhan\n";
			}
		}else{
			cout<<suhu;
			cout<<" Suhu yang anda masukan tidak valid, silahkan masukan angka";
		}
		/*reamur*/
	}else if(TypeSatu == "4" || TypeSatu == "K" || TypeSatu == "k" || TypeSatu == "Kelvin" || TypeSatu ==  "kelvin" || TypeSatu == "KELVIN"){
		cout<<"Masukan suhu Kelvin('K) : ";
		cin >> suhu;
		cout<<"---------------------------------\n";
		if(cin.good()){
			if(suhu == 0){
				cout<<"Apakah anda yakin ingin memasukan suhu 0 ? [y/n] "; cin >> confirm;
				if(confirm == "y"){
					cout<<" Konversi Ke : \n 1. Celcius (C) \n 2. Fahrenheit (F) \n 3. Reamur (R) \n ";
                	cout<<"Jawaban anda : "; cin >> TypeDua;
                	cout<<"-----------------------------------\n";
               		if(TypeDua == "1" || TypeDua == "C" || TypeDua == "c" || TypeDua ==  "Celcius" || TypeDua == "celcius" || TypeDua == "CELCIUS"){
               				hasil = suhu - 273.15;
                        	cout << suhu << "'K -> Celcius = " << hasil << "C\n";
                	}else if (TypeDua == "2" || TypeDua == "F" || TypeDua == "f" || TypeDua == "Fahrenheit" || TypeDua == "fahrenheit" || TypeDua == "FAHRENHEIT"){
                			hasil = (suhu - 273.15) * 9/5 + 32;
                        	cout << suhu << "'K -> Fahrenheit = " << hasil << "F\n";
                	}else if(TypeDua == "3" || TypeDua == "R" || TypeDua == "r" || TypeDua == "Reamur" || TypeDua == "reamur" || TypeDua == "REAMUR"){
                			hasil = (suhu - 273.15) * 0.8;
                        	cout << suhu << "'K -> Reamur = " << hasil << "R\n";
               		}else{
                        	cout <<"Jawaban anda tidak sesuai\n";
                	}
                		cout << "------------------------------------------------------\n";
                		cout << "Nama Lengkap : Hafiz Ramadhan\n";
				}else{
					exit(0);
				}
			}else{
				cout<<" Konversi Ke : \n 1. Celcius (C) \n 2. Fahrenheit (F) \n 3. Reamur (R) \n ";
                	cout<<"Jawaban anda : "; cin >> TypeDua;
                	cout<<"-----------------------------------\n";
               		if(TypeDua == "1" || TypeDua == "C" || TypeDua == "c" || TypeDua ==  "Celcius" || TypeDua == "celcius" || TypeDua == "CELCIUS"){
               				hasil = suhu - 273.15;
                        	cout << suhu << "'K -> Celcius = " << hasil << "C\n";
                	}else if (TypeDua == "2" || TypeDua == "F" || TypeDua == "f" || TypeDua == "Fahrenheit" || TypeDua == "fahrenheit" || TypeDua == "FAHRENHEIT"){
                			hasil = (suhu - 273.15) * 9/5 + 32;
                        	cout << suhu << "'K -> Fahrenheit = " << hasil << "F\n";
                	}else if(TypeDua == "3" || TypeDua == "R" || TypeDua == "r" || TypeDua == "Reamur" || TypeDua == "reamur" || TypeDua == "REAMUR"){
                			hasil = (suhu - 273.15) * 0.8;
                        	cout << suhu << "'K -> Reamur = " << hasil << "R\n";
               		}else{
                        	cout <<"Jawaban anda tidak sesuai\n";
                	}
                		cout << "------------------------------------------------------\n";
                		cout << "Nama Lengkap : Hafiz Ramadhan\n";
			}
		}else{
			cout<<" Suhu yang anda masukan tidak valid, silahkan masukan angka";
		}
		/*kelvin*/
	}
	else{
		cout<<"Pilihan tidak ada.\n";
	}
}
