#include <iostream>
#include <string>
#include <fstream>
float PuanHesapla(char x,float YeniPuan){
			 if(x == 'k')
			 YeniPuan=YeniPuan-2.5;
			 else if (x == 'f')
			 YeniPuan=YeniPuan-1.5;
			 else if (x == 'p')
			 YeniPuan=YeniPuan-0.5;
			 else if (x == 'a')
			 YeniPuan=YeniPuan-1.5;
			 else if (x == 's')
			 YeniPuan=YeniPuan-50;
			 else if(x == 'v')
			 YeniPuan=YeniPuan-4.5;
			 return(YeniPuan);
}

int main()
{
    using namespace std;
    float siyah=0,beyaz=0;
    int fromSQa[218];
    int fromSQb[218];
    int toSQa[218];
    int toSQb[218];

	string DosyaAdi;
	string myArray[128][128];
    cout << "Sorgulatmak istediginiz dosyanin ismini giriniz:";
	cin >> DosyaAdi;
	fstream inFileStr(DosyaAdi.c_str(), ios::in);
	if(inFileStr.fail()){
    	cout << "Dosya Acilamadi." << DosyaAdi << endl;
    	exit(-1);
}
    if(inFileStr.is_open())
    {   for(int i = 8; i > 0; i--) 
		 for(int j = 1; j < 9 ; j++)			 
            inFileStr >> myArray[i][j];
        }
			for(int i = 1; i < 9; i++)
			for(int j = 1; j < 9 ; j++)
		{		if(myArray[i][j][1] == 's'){	
				 if(myArray[i][j][0] == 'k')
				 siyah=siyah+5;
				 else if (myArray[i][j][0] == 'f')
				 siyah=siyah+3;
				 else if (myArray[i][j][0] == 'p')
				 siyah=siyah+1;
				 else if (myArray[i][j][0] == 'a')
				 siyah=siyah+3;
				 else if (myArray[i][j][0] == 's')
				 siyah=siyah+100;
				 else if(myArray[i][j][0] == 'v')
				 siyah=siyah+9;
					}
				if(myArray[i][j][1] == 'b'){	
				 if(myArray[i][j][0] == 'k')
				 beyaz=beyaz+5;
				 else if (myArray[i][j][0] == 'f')
				 beyaz=beyaz+3;
				 else if (myArray[i][j][0] == 'p')
				 beyaz=beyaz+1;
				 else if (myArray[i][j][0] == 'a')
				 beyaz=beyaz+3;
				 else if (myArray[i][j][0] == 's')
				 beyaz=beyaz+100;
				 else if(myArray[i][j][0] == 'v')
				 beyaz=beyaz+9;
			}
		}	
		
		
		
	 
		 for(int i = 1; i < 9; i++){
			for(int j = 1; j < 9 ; j++){
				if(myArray[i][j][1] == 'b'){				
					if(myArray[i][j][0] == 'a'){
						if(myArray[i+2][j+1][1]== 's')
						siyah=PuanHesapla(myArray[i+2][j+1][0],siyah);
						
						if(myArray[i+1][j+2][1]== 's')
						siyah=PuanHesapla(myArray[i+1][j+2][0],siyah);
						
						if(myArray[i-1][j+2][1]== 's')
						siyah=PuanHesapla(myArray[i-1][j+2][0],siyah);
					if(i-2>=0 && j-2>=0){
						if(myArray[i-2][j+1][1]== 's')
						siyah=PuanHesapla(myArray[i-2][j+1][0],siyah);
						
						if(myArray[i-2][j-1][1]== 's')
						siyah=PuanHesapla(myArray[i-2][j-1][0],siyah);
						
						if(myArray[i-1][j-2][1]== 's')
						siyah=PuanHesapla(myArray[i-1][j-2][0],siyah);
						
						if(myArray[i+1][j-2][1]== 's')
						siyah=PuanHesapla(myArray[i+1][j-2][0],siyah);
						
						if(myArray[i+2][j-1][1]== 's')
						siyah=PuanHesapla(myArray[i+2][j-1][0],siyah);
							}	
						}	
			  		}
				} 
			} 
			
			for(int i = 1; i < 9; i++){
				for(int j = 1; j < 9 ; j++){
					if(myArray[i][j][1] == 's'){				
						if(myArray[i][j][0] == 'a'){
							if(myArray[i+2][j+1][1]== 'b')
								beyaz=PuanHesapla(myArray[i+2][j+1][0],beyaz);
						
							if(myArray[i+1][j+2][1]== 'b')
								beyaz=PuanHesapla(myArray[i+1][j+2][0],beyaz);
							
							if(myArray[i-1][j+2][1]== 'b')
								beyaz=PuanHesapla(myArray[i-1][j+2][0],beyaz);
							
							if(i-2>=0 && j-2>=0){
							
							if(myArray[i-2][j+1][1]== 'b')
								beyaz=PuanHesapla(myArray[i-2][j+1][0],beyaz);
							
							if(myArray[i-2][j-1][1]== 'b')
								beyaz=PuanHesapla(myArray[i-2][j-1][0],beyaz);
							
							if(myArray[i-1][j-2][1]== 'b')
								beyaz=PuanHesapla(myArray[i-1][j-2][0],beyaz);
							
							if(myArray[i+1][j-2][1]== 'b')
								beyaz=PuanHesapla(myArray[i+1][j-2][0],beyaz);
							
							if(myArray[i+2][j-1][1]== 'b')
								beyaz=PuanHesapla(myArray[i+2][j-1][0],beyaz);
							}	
						}
			  		}
				} 
			}
			
			for(int i = 1; i < 9; i++){
			for(int j = 1; j < 9 ; j++){
				if(myArray[i][j][1] == 'b'){				
					if(myArray[i][j][0] == 'p'){
						if(myArray[i+1][j+1][1]== 's')
						siyah=PuanHesapla(myArray[i+1][j+1][0],siyah);
						
						if(myArray[i+1][j-1][1]== 's')
						siyah=PuanHesapla(myArray[i+1][j-1][0],siyah);
						
					if(j-1>=0){
						if(myArray[i+1][j-1][1]== 's')
						siyah=PuanHesapla(myArray[i+1][j-1][0],siyah);
							}	
						}	
			  		}
				} 
			}
			for(int i = 1; i < 9; i++){
			for(int j = 1; j < 9 ; j++){
				if(myArray[i][j][1] == 's'){				
					if(myArray[i][j][0] == 'p'){
						if(myArray[i+1][j+1][1]== 'b')
						beyaz=PuanHesapla(myArray[i-1][j+1][0],beyaz);
						
						if(myArray[i+1][j-1][1]== 'b')
						beyaz=PuanHesapla(myArray[i-1][j-1][0],beyaz);
						
					if(j-1>=0){
						if(myArray[i+1][j-1][1]== 'b')
						beyaz=PuanHesapla(myArray[i-1][j-1][0],beyaz);
							}	
						}	
			  		}
				} 
			}


		/*	for(int i = 1; i < 9; i++){
				for(int j = 1; j < 9 ; j++){
					if(myArray[i][j][1] == 'b'){				
						if(myArray[i][j][0] == 'v') {
							while (myArray[i+1][j][1] == 'b') {
								siyah=PuanHesapla(myArray[i+1][j][0],siyah);
								break;
							}
							while (myArray[i][j+1][1] == 'b') {
								siyah=PuanHesapla(myArray[i][j+1][0],siyah);
								break;
							}
							while (myArray[i-1][j-1][1] == 'b') {
								siyah=PuanHesapla(myArray[i-1][j-1][0],siyah);
								break;
							}
							while (myArray[i-1][j+1][1] =='b') {
								siyah=PuanHesapla(myArray[i-1][j+1][0],siyah);	
								break;
							}
							while (myArray[i+1][j-1][1] =='b') {
								siyah=PuanHesapla(myArray[i+1][j-1][0],siyah);
								break;
								
							}
							while (myArray[i+1][j+1][1] =='b') {
								siyah=PuanHesapla(myArray[i+1][j+1][0],siyah);
								break;
							}
						}
					}
				}
			}
			for(int i = 1; i < 9; i++){
				int j=1;
				while (myArray[i+1][j][1] == 's') {
						beyaz=PuanHesapla(myArray[i+1][j][0],beyaz);
						break;
						}
				for(int j = 1; j < 9 ; j++){
					if(myArray[i][j][1] == 's'){				
						if(myArray[i][j][0] == 'v') {
							while (myArray[i][j+1][1] == 's') {
								beyaz=PuanHesapla(myArray[i][j+1][0],beyaz);
								break;
							}
							while (myArray[i-1][j-1][1] == 's') {
								beyaz=PuanHesapla(myArray[i-1][j-1][0],beyaz);
								break;
							}
							while (myArray[i-1][j+1][1] =='s') {
								beyaz=PuanHesapla(myArray[i-1][j+1][0],beyaz);	
								break;
							}
							while (myArray[i+1][j-1][1] =='s') {
								beyaz=PuanHesapla(myArray[i+1][j-1][0],beyaz);
								break;
							}
							while (myArray[i+1][j+1][1] =='s') {
								beyaz=PuanHesapla(myArray[i+1][j+1][0],beyaz);
								break;
							}
						}
					}
				}
			}
			cout<<"siyah:"<<siyah<<endl<<"beyaz:"<<beyaz; */ 
			// Vezir hesaplamasýnda hata oluyor tamamlanamadý. 
    }
    
    
    
    
    
