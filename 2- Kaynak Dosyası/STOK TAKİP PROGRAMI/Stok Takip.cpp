#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<fstream>
#include<string>
#include<conio.h>
#include<sstream>
#include<windows.h>

using namespace std;

int main(){int x,q,sayi,Ka=153,De=256,Si=458,Uc=186,Can=82;
    int As=183,Sa=215,Ac=86,HP=113,Del=135;
    int Su=256,So=156,Un=62,Kah=120,Ci=189;
    int Ba=35,Ko=18,San=45,Ma=16,Se=29;
    string line;
	
    ifstream kalem ("STOK/Kirtasiye/kalem.txt"); if(kalem.is_open ()){kalem.close();}else{ofstream kalem("STOK/Kirtasiye/kalem.txt");kalem<<Ka; kalem.close();}
	ifstream defter ("STOK/Kirtasiye/defter.txt"); if(defter.is_open ()){defter.close();}else{ofstream defter("STOK/Kirtasiye/defter.txt");defter<<De; defter.close();}
	ifstream silgi ("STOK/Kirtasiye/silgi.txt"); if(silgi.is_open ()){silgi.close();}else{ofstream silgi("STOK/Kirtasiye/silgi.txt");silgi<<Si; silgi.close();}
	ifstream uc ("STOK/Kirtasiye/uc.txt"); if(uc.is_open ()){uc.close();}else{ofstream uc("STOK/Kirtasiye/uc.txt"); uc<<Uc; uc.close();}
	ifstream canta ("STOK/Kirtasiye/canta.txt"); if(canta.is_open ()){canta.close();}else{ofstream canta("STOK/Kirtasiye/canta.txt");canta<<Can; canta.close();}
	
	ifstream asus ("STOK/Bilgisayar/asus.txt"); if(asus.is_open ()){asus.close();}else{ofstream asus("STOK/Bilgisayar/asus.txt");asus<<As; asus.close();}
	ifstream samsung ("STOK/Bilgisayar/samsung.txt"); if(samsung.is_open ()){samsung.close();}else{ofstream samsung("STOK/Bilgisayar/samsung.txt"); samsung<<Sa; samsung.close();}
	ifstream acer ("STOK/Bilgisayar/acer.txt"); if(acer.is_open ()){acer.close();}else{ofstream acer("STOK/Bilgisayar/acer.txt"); acer<<Ac; acer.close();}
	ifstream hp ("STOK/Bilgisayar/hp.txt"); if(hp.is_open ()){hp.close();}else{ofstream hp("STOK/Bilgisayar/hp.txt");hp<<HP; hp.close();}
    ifstream dell ("STOK/Bilgisayar/dell.txt"); if(dell.is_open ()){dell.close();}else{ofstream dell("STOK/Bilgisayar/dell.txt"); dell<<Del; dell.close();}
	
	ifstream su ("STOK/Gida/su.txt"); if(su.is_open ()){su.close();}else{ofstream su ("STOK/Gida/su.txt"); su<<Su; su.close();}
	ifstream soda ("STOK/Gida/soda.txt"); if(soda.is_open ()){soda.close();}else{ofstream soda ("STOK/Gida/soda.txt");soda<<So; soda.close();}
	ifstream un ("STOK/Gida/un.txt"); if(un.is_open ()){un.close();}else{ofstream un ("STOK/Gida/un.txt");un<<Un; un.close();}
	ifstream kahve ("STOK/Gida/kahve.txt"); if(kahve.is_open ()){kahve.close();}else{ofstream kahve ("STOK/Gida/kahve.txt");kahve<<Kah; kahve.close();}
	ifstream cips ("STOK/Gida/cips.txt"); if(cips.is_open ()){cips.close();}else{ofstream cips ("STOK/Gida/cips.txt");cips<<Ci; cips.close();}
	
	ifstream baza ("STOK/Mobilya/baza.txt"); if(baza.is_open ()){baza.close();}else{ofstream baza ("STOK/Mobilya/baza.txt");baza<<Ba; baza.close();}
	ifstream koltuk ("STOK/Mobilya/koltuk.txt"); if(koltuk.is_open ()){koltuk.close();}else{ofstream koltuk ("STOK/Mobilya/koltuk.txt");koltuk<<Ko; koltuk.close();}
	ifstream sandalye ("STOK/Mobilya/sandalye.txt"); if(sandalye.is_open ()){sandalye.close();}else{ofstream sandalye ("STOK/Mobilya/sandalye.txt");sandalye<<San; sandalye.close();}
	ifstream masa ("STOK/Mobilya/masa.txt"); if(masa.is_open ()){masa.close();}else{ofstream masa ("STOK/Mobilya/masa.txt"); masa<<Ma; masa.close();}
    ifstream sehpa ("STOK/Mobilya/sehpa.txt"); if(sehpa.is_open ()){sehpa.close();}else{ofstream sehpa ("STOK/Mobilya/sehpa.txt");sehpa<<Se; sehpa.close();}
    char a;
    float V;
    int devam;
	do
    {
    	system("color 1F");
    setlocale(LC_ALL,"TURKISH");
	printf("\t\t*****STOK MEN�S�*****\n");
	printf("\tKIRTAS�YE\nKalem\nDefter\nSilgi\nU�\n�anta\n");
	printf("\tB�LG�SAYAR\nAsus\nSamsung\nAcer\nHP\nDell\n");
	printf("\tGIDA\nSu\nSoda\nUn\nKahve\nCips\n");
	printf("\tMOB�LYA\nBaza\nKoltuk\nSandalye\nMasa\nSehpa\n");

	cout<<"\tKontrol etmek veya g�ncellemek istedi�iniz b�l�m�n kodunu giriniz.\n"<<"K�rtasiye(1), Bilgisayar(2), G�da(3), Mobilya(4)\n";
	cin>>x;
	
	switch (x){
	
		case 1:{system("color 4E");
		cout<<"\t*****K�rtasiye b�l�m�ne ho�geldiniz.*****\nK�rtasiyedeki �r�nlerin mevcut durumu ve hacimleri i�in 1'e, �r�n ekleme-��karma i�in 2'e bas�n�z.\n";
			cin>>x;
		
			if(x==1){
				   cout<<"\n\tK�rtasiyede kontrol etmek istedi�iniz �r�n�n kodunu giriniz.\nKalem(1), Defter(2), Silgi(3), U�(4), �anta(5)\n";
				   cin>>x;
				
			    if(x==1){
 						 ifstream kalem ("STOK/Kirtasiye/kalem.txt");
 						 
 						 if (kalem.is_open())
 						 {
 						   
 						   while ( getline (kalem,line) )
 						   {
 						   	cout<<"Depo kontrol ediliyor";
 						   	for(int i=0;i<20;i++){
 						   		cout<<".";
 						   		Sleep(200);
 						   	}
 						   	cout<<"\n\n";  // Tek bir kalemin hacmi 1 cm^ t�r.
 						     cout<<"\tStoktaki mevcut kalem miktar� "<<line<<" adet.Depodaki hacmi "<<line<<" cm^3\n"; 
 						   }
 						   
 						   kalem.close();
 						 }
				         
				     }
				else if(x==2){
 						 ifstream defter ("STOK/Kirtasiye/defter.txt");
 						 
 						 if (defter.is_open())
 						 {
 						   
 						   while ( getline (defter,line) ) //SATIR SATIR OKUR SATIRI LINE STRINGINE ATAR
 						   {
 						   	istringstream buffer(line); // LINE STRINGINI 1-5-3 DIYE OKUR BUFFER ILE 153 E CEVIRIR
							buffer >> sayi; //CEVIRDIGI 153 U SAYI INTEGERINA ATAR
							V=2*sayi; //Tek bir defterin hacmi 2 cm^3 t�r.
							cout<<"Depo kontrol ediliyor";
							for(int i=0;i<20;i++){
								cout<<".";
								Sleep(200);
							}
							cout<<"\n\n";
 						    cout<<"\tStoktaki mevcut defter miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n"; //Tek bir kalemin hacmi 1 cm^3 t�r.
 						   }
 						   defter.close();
 						 }
					
				}
				else if(x==3){
						ifstream silgi ("STOK/Kirtasiye/silgi.txt");
						if (silgi.is_open())
 						 {
 						   
 						   while ( getline (silgi,line) ) 
 						   {
 						   	istringstream buffer(line); 
							buffer >> sayi; 
							V=0.5*sayi; //Tek bir silginin hacmi 0.5 cm^3 t�r.
							cout<<"Depo kontrol ediliyor";
							for(int i=0;i<20;i++){
								cout<<".";
								Sleep(200);
							}
							cout<<"\n\n";
							cout<<"\tStoktaki mevcut silgi miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n";
 						   }
 						   silgi.close();
 						 }
					
				}
				else if(x==4){
					ifstream uc ("STOK/Kirtasiye/uc.txt");
					 if (uc.is_open()){
					 	while (getline (uc,line)){
					 	  istringstream buffer(line);
						   buffer >>sayi;
						   V=0.5*sayi; //Tek bir u� paketinin hacmi 0.5 cm^3 t�r.
						   cout<<"Depo kontrol ediliyor";
						   for(int i=0;i<20;i++){
						   	cout<<".";
						   	Sleep(200);
						   }
						   cout<<"\n\n";
						   cout<<"\tStoktaki mevcut u� paketi miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n";
					 	}
					 	uc.close();
					 	
					 	
					 }
				
				}
				else if(x==5){
					ifstream canta ("STOK/Kirtasiye/canta.txt");
					if (canta.is_open()){
						while (getline(canta,line)){
							istringstream buffer (line);
							buffer>>sayi;
							V=3*sayi; //Bir �antan�n hacmi 3 cm^3 t�r.
							cout<<"Depo kontrol ediliyor";
							for(int i=0;i<20;i++){
								cout<<".";
								Sleep(200);
							}
							cout<<"\n\n";
							cout<<"\tStoktaki mevcut �anta miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n";
						
						}
						canta.close();
					}
				
				}
				
				
			}else if(x==2){
				cout<<"\tG�ncelleme yapmak istedi�iniz b�l�m�n kodunu giriniz.\nKalem(1), Defter(2), Silgi(3), U�(4), �anta(5)\n";
				cin>>x;
				if (x==1){
			
				
			     	cout<<"\t�r�n eklemek i�in + tu�una, ��karmak i�in - tu�una bas�n�z.\n";
					cin>>a;
					switch (a){case '+':{
						cout<<"Miktar� giriniz.\n";
						cin>>q;
 						 ifstream kalem ("STOK/Kirtasiye/kalem.txt");
 						 if (kalem.is_open())
 						 {
 						   
 						   while ( getline (kalem,line) )
 						   {
 						   	istringstream buffer(line); 
							
							buffer >> sayi;
							sayi=sayi+q;
							cout<<"G�ncellemeniz yap�l�yor";
							for(int i=0;i<20;i++){
								cout<<".";
								Sleep(200);
							}
							cout<<"\n\n";
							V=sayi;
 						    cout<<"\tStoktaki yeni kalem miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n"; 
 						   }
 						   kalem.close();
 						 }
 						 ofstream kalem1 ("STOK/Kirtasiye/kalem.txt");
 						 if(kalem1.is_open())
 						 {
 						 	kalem1<<sayi;
 						 	kalem1.close();
 						 }
						break;
					   }
						case '-':{
							cout<<"Miktar� giriniz.\n";
						cin>>q;
 						 ifstream kalem ("STOK/Kirtasiye/kalem.txt");
 						 if (kalem.is_open())
 						 {
 						   
 						   while ( getline (kalem,line) ) 
 						   {
 						   	istringstream buffer(line); 
							
							buffer >> sayi; 
							sayi=sayi-q;
							 if(sayi<80){  // ��letme sahibi depodaki kalem miktar�n�n 80 adetten az olmamas�n� istemektedir.
							 	cout<<"Yapmak istedi�iniz g�ncelleme sonucu depodaki kalem miktar� 80 adetten az olaca��ndan g�ncellemeniz iptal edilmi�tir.\n\n";
							 	sayi=sayi+q;
							 	V=sayi;
							 	cout<<"\tStoktaki mevcut kalem miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n";
							 }
							 else{
							 cout<<"G�ncellemeniz yap�l�yor";
							 for(int i=0;i<20;i++){
							 	cout<<".";
							 	Sleep(200);
							 }
							 cout<<"\n\n";
							V=sayi;
 						    cout<<"\tStoktaki yeni kalem miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n"; 
 						      } 
 						   }
 						   kalem.close();
 						 }
 						 ofstream kalem1 ("STOK/Kirtasiye/kalem.txt");
 						 if(kalem1.is_open())
 						 {
 						 	kalem1<<sayi;
 						 	kalem1.close();
 						 }
						break;
						}
				     }
						
					}
					else if(x==2){
						
						
						
						
						cout<<"\t �r�n eklemek i�in + tu�una, ��karmak i�in - tu�una bas�n�z.\n";
						cin>>a;
						switch (a){
							case '+':{
								cout<<"Miktar� giriniz.\n";
								cin>>q;
 						          ifstream defter ("STOK/Kirtasiye/defter.txt");
 						        if (defter.is_open())
 						       {
 						   
 						         while ( getline (defter,line) ) 
 						       {
 						     	istringstream buffer(line); 
							
						     	buffer >> sayi; 
						     	sayi=sayi+q;
						     	cout<<"G�ncellemeniz yap�l�yor";
						     	for(int i=0;i<20;i++){
						     		cout<<".";
						     		Sleep(200);
						     	}
						     	cout<<"\n\n";
						       	V=2*sayi;
 						         cout<<"\tStoktaki yeni defter miktar� "<<sayi<<" adet.Depodaki yeni hacmi "<<V<<" cm^3\n"; 
 						        }
 						          defter.close();
 						           }
 						       ofstream defter1 ("STOK/Kirtasiye/defter.txt");
 						      if(defter1.is_open())
 						           {
 						              	defter1<<sayi;
 					               	 	defter1.close();
 					                  	 }
								break;}
								case '-':{
									cout<<"Miktar� giriniz.\n";
									cin>>q;
 						          ifstream defter ("STOK/Kirtasiye/defter.txt");
 						        if (defter.is_open())
 						           {
 						   
 						              while ( getline (defter,line) ) 
 						           {
 						     	istringstream buffer(line); 
							
						     	buffer >> sayi; 
						     	sayi=sayi-q;
						     	     if(sayi<150){  // ��letme sahibi depodaki defter miktar�n�n 150 adetten az olmamas�n� istiyor.
						     	
						     	     	cout<<"Yapmak istedi�iniz g�ncelleme sonucunda depodaki defter miktar� 150 adetten az olacakt�r. Bundan dolay� g�ncellemeniz iptal edilmi�tir.\n\n";
						     	     	sayi=sayi+q;
						     	     	V=2*sayi;
						     	     	cout<<"\tStoktaki mevcut defter miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n";
						     	     }
						     	     else {
						     	       cout<<"G�ncellemeniz yap�l�yor";
						     	       for(int i=0;i<20;i++){
						     	       	cout<<".";
						     	       	Sleep(200);
						     	       }
						     	       cout<<"\n\n";
						       	V=2*sayi;
 						         cout<<"\tStoktaki yeni defter miktar� "<<sayi<<" adet.Depodaki yeni hacmi "<<V<<" cm^3\n"; 
 						            }
 						        }
 						          defter.close();
 						           }
 						         ofstream defter1 ("STOK/Kirtasiye/defter.txt");
 						         if(defter1.is_open())
 						           {
 						              	defter1<<sayi;
 					               	 	defter1.close();
 					                  	 }
									break;}
						}
						
						
						
						
					}
					else if(x==3){
						
						
						cout<<"\t �r�n eklemek i�in + tu�una, ��karmak i�in - tu�una bas�n�z.\n";
						cin>>a;
						switch (a){
							case '+':{
								cout<<"Miktar� giriniz.\n";
								cin>>q;
 						          ifstream silgi ("STOK/Kirtasiye/silgi.txt");
 						        if (silgi.is_open())
 						           {
 						   
 						              while ( getline (silgi,line) ) 
 						              {
 						             	istringstream buffer(line); 
							
						             	buffer >> sayi; 
						              	sayi=sayi+q;
						              	cout<<"G�ncellemeniz yap�l�yor";
						              	for(int i=0;i<20;i++){
						              		cout<<".";
						              		Sleep(200);
						              	}
						              	cout<<"\n\n";
						               	V=0.5*sayi;
 						                cout<<"\tStoktaki yeni silgi miktar� "<<sayi<<" adet.Depodaki yeni hacmi "<<V<<" cm^3\n"; 
 						                }
 						                 silgi.close();
 						                   }
 						                 ofstream silgi1 ("STOK/Kirtasiye/silgi.txt");
 						                if(silgi1.is_open())
 						                {
 						                	silgi1<<sayi;
 					                 	 	silgi1.close();
 					                  	 }
							
								break;}
								case '-':{
									cout<<"Miktar� giriniz.\n";
									cin>>q;
 						          ifstream silgi ("STOK/Kirtasiye/silgi.txt");
 						             if (silgi.is_open())
 						            {
 						   
 						               while ( getline (silgi,line) ) 
 						            {
 						              	istringstream buffer(line); 
							
						             	buffer >> sayi; 
						             	sayi=sayi-q;
						             	if(sayi<200){ // ��letme sahibi depodaki silgi miktar�n�n 200 den az olmamas�n� istemektedir.
						             		cout<<"Yapmak istedi�iniz g�ncelleme sonucu depodaki silgi miktar� 200'den az olaca��ndan g�ncellemeniz iptal edilmi�tir.\n\n";
						             		sayi=sayi+q;
						             		V=0.5*sayi;
						             		cout<<"\t Stoktaki mevcut silgi miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n";
						             	}
						             	else {
						             	 cout<<"G�ncellemeniz yap�l�yor";
						             	 for(int i=0;i<20;i++){
						             	 	cout<<".";
						             	 	Sleep(200);
						             	 }
						             	 cout<<"\n\n";
						             	V=0.5*sayi;
 						               cout<<"\tStoktaki yeni silgi miktar� "<<sayi<<" adet.Depodaki yeni hacmi "<<V<<" cm^3\n"; 
 						                  }
 						               }
 						                 silgi.close();
 						                 }
 						                ofstream silgi1 ("STOK/Kirtasiye/silgi.txt");
 						               if(silgi1.is_open())
 						               {
 						               	silgi1<<sayi;
 					               	 	silgi1.close();
 					                  	 }
									break;}
						}
					}
					else if(x==4){
						
						
						cout<<"\t �r�n eklemek i�in + tu�una, ��karmak i�in - tu�una bas�n�z.\n";
						cin>>a;
						switch (a){
							case '+':{
								cout<<"Miktar� giriniz.\n";
								cin>>q;
 						          ifstream uc ("STOK/Kirtasiye/uc.txt");
 						             if (uc.is_open())
 						             {
 						               while ( getline (uc,line) ) 
 						              {
 						              	istringstream buffer(line); 
							
						             	buffer >> sayi; 
						             	sayi=sayi+q;
						             	cout<<"G�ncellemeniz yap�l�yor";
						             	for(int i=0;i<20;i++){
						             		cout<<".";
						             		Sleep(200);
						             	}
						             	cout<<"\n\n";
						             	V=0.5*sayi;
 						               cout<<"\tStoktaki yeni u� paketi miktar� "<<sayi<<" adet.Depodaki yeni hacmi "<<V<<" cm^3\n"; 
 						               }
 						                 uc.close();
 						                 }
 						                ofstream uc1 ("STOK/Kirtasiye/uc.txt");
 						               if(uc1.is_open())
 						               {
 						               	uc1<<sayi;
 					               	 	uc1.close();
 					                  	 }
								break;}
							case '-':{
								cout<<"Miktar� giriniz.\n";
								cin>>q;
								       ifstream uc ("STOK/Kirtasiye/uc.txt");
 						             if (uc.is_open())
 						             {
 						               while ( getline (uc,line) ) 
 						              {
 						              	istringstream buffer(line); 
							
						             	buffer >> sayi; 
						             	sayi=sayi-q;
						             	if(sayi<70){ // ��letme sahibi depodaki u� paketi miktar�n�n 70'ten az olmamas�n� istemektedir.
						             		cout<<"Yapmak istedi�iniz g�ncelleme neticesinde depodaki u� paketi miktar� 70'ten az olaca��ndan g�ncellemeniz iptal edilmi�tir.\n\n";
						             		sayi=sayi+q;
						             		V=0.5*sayi;
						             		cout<<"\t Stoktaki mevcut u� paketi miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n";
						             	}
						             	else {
						             	  cout<<"G�ncellemeniz yap�l�yor";
						             	  for(int i=0;i<20;i++){
						             	  	cout<<".";
						             	  	Sleep(200);
						             	  }
						             	  cout<<"\n\n";
						             	V=0.5*sayi;
 						               cout<<"\tStoktaki yeni u� paketi miktar� "<<sayi<<" adet.Depodaki yeni hacmi "<<V<<" cm^3\n"; 
 						                  }
 						               }
 						                 uc.close();
 						                 }
 						                ofstream uc1 ("STOK/Kirtasiye/uc.txt");
 						               if(uc1.is_open())
 						               {
 						               	uc1<<sayi;
 					               	 	uc1.close();
 					                  	 }
								break;}
						}
					}
				    else if(x==5){
				    	cout<<"\t �r�n eklemek i�in + tu�una, ��karmak i�in - tu�una bas�n�z.\n";
				    	cin>>a;
				    	switch (a){
				    		case '+':{
				    			cout<<"Miktar� giriniz.\n";
				    			cin>>q;
				    			      ifstream canta ("STOK/Kirtasiye/canta.txt");
 						             if (canta.is_open())
 						             {
 						               while ( getline (canta,line) ) 
 						              {
 						              	istringstream buffer(line); 
							
						             	buffer >> sayi; 
						             	sayi=sayi+q;
						             	cout<<"G�ncellemeniz yap�l�yor";
						             	for(int i=0;i<20;i++){
						             		cout<<".";
						             		Sleep(200);
						             	}
						             	cout<<"\n\n";
						             	V=3*sayi;
 						               cout<<"\tStoktaki yeni �anta miktar� "<<sayi<<" adet.Depodaki yeni hacmi "<<V<<" cm^3\n"; 
 						               }
 						                 canta.close();
 						                 }
 						                ofstream canta1 ("STOK/Kirtasiye/canta.txt");
 						               if(canta1.is_open())
 						               {
 						               	canta1<<sayi;
 					               	 	canta1.close();
 					                  	 }
				    			break;}
				    		case '-':{
				    			cout<<"Miktar� giriniz.\n";
				    			cin>>q;
				    			      ifstream canta ("STOK/Kirtasiye/canta.txt");
 						             if (canta.is_open())
 						             {
 						               while ( getline (canta,line) ) 
 						              {
 						              	istringstream buffer(line); 
							
						             	buffer >> sayi; 
						             	sayi=sayi-q;
						             	if(sayi<40){// ��letme sahibi depodaki �anta miktar�n�n 40'tan az olmamas�n� istemektedir.
						             		cout<<"Yapmak istedi�iniz g�ncelleme sonucunda depodaki �anta miktar� 40'tan az olaca��ndan g�ncellemeniz iptal edilmi�tir.\n\n";
						             		sayi=sayi+q;
						             		V=3*sayi;
						             		cout<<"\tStoktaki mevcut �anta miktar� "<<sayi<<"  adet.Depodaki hacmi "<<V<<" cm^3\n";
						             	}
						             	else {
						             	 cout<<"G�ncellemeniz yap�l�yor";
						             	 for(int i=0;i<20;i++){
						             	 	cout<<".";
						             	 	Sleep(200);
						             	 }
						             	  cout<<"\n\n";
						             	V=3*sayi;
 						               cout<<"\tStoktaki yeni �anta miktar� "<<sayi<<" adet.Depodaki yeni hacmi "<<V<<" cm^3\n"; 
 						                 }
 						               }
 						                 canta.close();
 						                 }
 						                ofstream canta1 ("STOK/Kirtasiye/canta.txt");
 						               if(canta1.is_open())
 						               {
 						               	canta1<<sayi;
 					               	 	canta1.close();
 					                  	 }
				    			break;}
				    	}
				    }
				
				}
				
				
				
		        break;}
			         case 2:{system("color 2F");
				     cout<<"\t*****Bilgisayar b�l�m�ne ho�geldiniz.*****\nBilgisayarlar�n mevcut durumlar� ve hacimleri i�in 1'e, g�ncelleme yapmak i�in 2'ye bas�n�z.\n";
				     cin>>x;
				     if(x==1){
					cout<<"\t Bilgisayar b�l�m�nde kontrol etmek istedi�iniz �r�n�n kodunu giriniz.\nAsus(1), Samsung(2), Acer(3), HP(4), Dell(5)\n";
					cin>>x;
					
					  if(x==1){
					  	      	ifstream asus ("STOK/Bilgisayar/asus.txt");
				       	if (asus.is_open()){
						while (getline(asus,line)){
							istringstream buffer (line);
							buffer>>sayi;
							V=3*sayi; //Bir Asus marka bilgisayar�n hacmi 3 cm^3 t�r.
							cout<<"Depo kontrol ediliyor";
							for(int i=0;i<20;i++){
								cout<<".";
								Sleep(200);
							}
							cout<<"\n\n";
							cout<<"\tStoktaki mevcut Asus marka bilgisayar miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n";
						
						}
						asus.close();
					}
					  }
				     else if(x==2){
				     	      	ifstream samsung ("STOK/Bilgisayar/samsung.txt");
				       	if (samsung.is_open()){
						while (getline(samsung,line)){
							istringstream buffer (line);
							buffer>>sayi;
							V=4*sayi; //Bir Samsung marka bilgisayar�n hacmi 4 cm^3 t�r.
							cout<<"Depo kontrol ediliyor";
							for(int i=0;i<20;i++){
								cout<<".";
								Sleep(200);
							}
							cout<<"\n\n";
							cout<<"\tStoktaki mevcut Samsung marka bilgisayar miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n";
						
						}
						samsung.close();
					}
				    }
				    else if(x==3){
				    	        ifstream acer ("STOK/Bilgisayar/acer.txt");
				       	if (acer.is_open()){
						while (getline(acer,line)){
							istringstream buffer (line);
							buffer>>sayi;
							V=3*sayi; //Bir Acer marka bilgisayar�n hacmi 3 cm^3 t�r.
							cout<<"Depo kontrol ediliyor";
							for(int i=0;i<20;i++){
								cout<<".";
								Sleep(200);
							}
							cout<<"\n\n";
							cout<<"\tStoktaki mevcut Acer marka bilgisayar miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n";
						
						}
						acer.close();
					}
				    }
				    else if(x==4){
				    	    	ifstream hp ("STOK/Bilgisayar/hp.txt");
				       	if (hp.is_open()){
						while (getline(hp,line)){
							istringstream buffer (line);
							buffer>>sayi;
							V=2*sayi; //Bir HP marka bilgisayar�n hacmi 3 cm^3 t�r.
							cout<<"Depo kontrol ediliyor";
							for(int i=0;i<20;i++){
								cout<<".";
								Sleep(200);
							}
							cout<<"\n\n";
							cout<<"\tStoktaki mevcut HP marka bilgisayar miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n";
						
						}
						hp.close();
					}
				    }
				    else if(x==5){
				    	     	ifstream dell ("STOK/Bilgisayar/dell.txt");
				       	if (dell.is_open()){
						     while (getline(dell,line)){
							istringstream buffer (line);
							buffer>>sayi;
							V=3*sayi; //Bir Dell marka bilgisayar�n hacmi 3 cm^3 t�r.
							cout<<"Depo kontrol ediliyor";
							for(int i=0;i<20;i++){
								cout<<".";
								Sleep(200);
							}
							cout<<"\n\n";
							cout<<"\tStoktaki mevcut Dell marka bilgisayar miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n";
						
						}
						dell.close();
			          	}
					}
				    }
				    else if (x==2){
				    	cout<<"\tG�ncelleme yapmak istedi�iniz b�l�m�n kodunu giriniz.\nAsus(1), Samsung(2), Acer(3), HP(4), Dell(5)\n";
				    	cin>>x;
				    	
				    	if (x==1){
				    		cout<<"\t �r�n eklemek i�in +, ��karmak i�in - tu�una bas�n�z.\n";
				    		cin>>a;
				    		switch (a){
				    			case '+':{
				    				cout<<"Miktar� giriniz.\n";
				    				cin>>q;
				    				  ifstream asus ("STOK/Bilgisayar/asus.txt");
 						             if (asus.is_open())
 						             {
 						               while ( getline (asus,line) ) 
 						              {
 						              	istringstream buffer(line); 
							
						             	buffer >> sayi; 
						             	sayi=sayi+q;
						             	cout<<"G�ncellemeniz yap�l�yor";
						             	for(int i=0;i<20;i++){
						             		cout<<".";
						             		Sleep(200);
						             	}
						             	cout<<"\n\n";
						             	V=3*sayi;
 						               cout<<"\tStoktaki yeni Asus marka bilgisayar miktar� "<<sayi<<" adet.Depodaki yeni hacmi "<<V<<" cm^3\n"; 
 						               }
 						                 asus.close();
 						                 }
 						                ofstream asus1 ("STOK/Bilgisayar/asus.txt");
 						               if(asus1.is_open())
 						               {
 						               	asus1<<sayi;
 					               	 	asus1.close();
 					                  	 }
				    				break;
				    			}
				    		    case '-':{
				    			    cout<<"Miktar� giriniz.\n";
							        cin>>q;  
							              ifstream asus ("STOK/Bilgisayar/asus.txt");
 						             if (asus.is_open())
 						             {
 						               while ( getline (asus,line) ) 
 						              {
 						              	istringstream buffer(line); 
							
						             	buffer >> sayi; 
						             	sayi=sayi-q;
						             	if(sayi<90){  // ��letme sahibi depodaki Asus marka bilgisayar miktar�n�n 90'dan az olmamas�n� istemektedir.
						             		cout<<"Yapmak istedi�iniz g�ncelleme neticesinde depodaki Asus marka bilgisayar miktar� 90'dan az olaca��ndan g�ncellemeniz iptal edilmi�tir.\n\n";
						             		sayi=sayi+q;
						             		V=3*sayi;
						             		cout<<"\tStoktaki mevcut Asus marka bilgisayar miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n";
						             	}
						             	else {
						             	cout<<"G�ncellemeniz yap�l�yor";
						             	for(int i=0;i<20;i++){
						             		cout<<".";
						             		Sleep(200);
						             	}
						             	cout<<"\n\n";
						             	V=3*sayi;
 						               cout<<"\tStoktaki yeni Asus marka bilgisayar miktar� "<<sayi<<" adet.Depodaki yeni hacmi "<<V<<" cm^3\n"; 
 						                 }
 						               }
 						                 asus.close();
 						                 }
 						                ofstream asus1 ("STOK/Bilgisayar/asus.txt");
 						               if(asus1.is_open())
 						               {
 						               	asus1<<sayi;
 					               	 	asus1.close();
 					                  	 }
						            break;     }   					
				    	                   }
				    	
						        }else if(x==2){
							cout<<"\t�r�n eklemek i�in +, ��karmak i�in - tu�una bas�n�z.\n";
							cin>>a;
							switch (a){
								case '+':{
									cout<<"Miktar� giriniz.\n";
									cin>>q;
									       ifstream samsung ("STOK/Bilgisayar/samsung.txt");
 						             if (samsung.is_open())
 						             {
 						               while ( getline (samsung,line) ) 
 						              {
 						              	istringstream buffer(line); 
							
						             	buffer >> sayi; 
						             	sayi=sayi+q;
						             	cout<<"G�ncellemeniz yap�l�yor";
						             	for(int i=0;i<20;i++){
						             		cout<<".";
						             		Sleep(200);
						             	}
						             	cout<<"\n\n";
						             	V=4*sayi;
 						               cout<<"\tStoktaki yeni Samsung marka bilgisayar miktar� "<<sayi<<" adet.Depodaki yeni hacmi "<<V<<" cm^3\n"; 
 						               }
 						                 samsung.close();
 						                 }
 						                ofstream samsung1 ("STOK/Bilgisayar/samsung.txt");
 						               if(samsung1.is_open())
 						               {
 						               	samsung1<<sayi;
 					               	 	samsung1.close();
 					                  }
									break;
								}
								
								    case '-':{
								    cout<<"Miktar� giriniz.\n";
								    cin>>q;
								        ifstream samsung ("STOK/Bilgisayar/samsung.txt");
 						             if (samsung.is_open())
 						             {
 						               while ( getline (samsung,line) ) 
 						              {
 						              	istringstream buffer(line); 
							
						             	buffer >> sayi; 
						             	sayi=sayi-q;
						             	if(sayi<110){// ��letme sahibi depodaki Samsung marka bilgisayar miktar�n�n 110'dan az olmamas�n� istemektedir.
						             	  cout<<"Yapmak istedi�iniz g�ncelleme sonucunda depodaki Samsung marka bilgisayarlar�n miktar� 110'dan az olaca��ndan g�ncellemeniz iptal edilmi�tir.\n\n";
						             	  sayi=sayi+q;
						             	  V=4*sayi;
						             	  cout<<"\tStoktaki mevcut Samsung marka bilgisayar miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n";
						             	}
						             	else {
						             	  cout<<"G�ncellemeniz yap�l�yor";
						             	  for(int i=0;i<20;i++){
						             	  	cout<<".";
						             	  	Sleep(200);
						             	  }
						             	  cout<<"\n\n";
						             	V=4*sayi;
 						               cout<<"\tStoktaki yeni Samsung marka bilgisayar miktar� "<<sayi<<" adet.Depodaki yeni hacmi "<<V<<" cm^3\n"; 
 						                 }
 						               }
 						                 samsung.close();
 						                 }
 						                ofstream samsung1 ("STOK/Bilgisayar/samsung.txt");
 						               if(samsung1.is_open())
 						               {
 						               	samsung1<<sayi;
 					               	 	samsung1.close();
 					                  }
								   
								}
							}    
						}
						else if(x==3){
							cout<<"\t�r�n eklemk i�in +, ��karmak i�in - tu�una bas�n�z.\n";
							cin>>a;
							switch (a){
								case '+':{
									cout<<"Miktar� giriniz.\n";
									cin>>q;
									     ifstream acer ("STOK/Bilgisayar/acer.txt");
 						             if (acer.is_open())
 						             {
 						               while ( getline (acer,line) ) 
 						              {
 						              	istringstream buffer(line); 
							
						             	buffer >> sayi; 
						             	sayi=sayi+q;
						             	cout<<"G�ncellemeniz yap�l�yor";
						             	for(int i=0;i<20;i++){
						             		cout<<".";
						             		Sleep(200);
						             	}
						             	cout<<"\n\n";
						             	V=3*sayi;
 						               cout<<"\tStoktaki yeni Acer marka bilgisayar miktar� "<<sayi<<" adet.Depodaki yeni hacmi "<<V<<" cm^3\n"; 
 						               }
 						                 acer.close();
 						                 }
 						                ofstream acer1 ("STOK/Bilgisayar/acer.txt");
 						               if(acer1.is_open())
 						               {
 						               	acer1<<sayi;
 					               	 	acer1.close();
 					                  }
									break;
								  }
								   case '-':{
								    cout<<"Miktar� giriniz.\n";
								    cin>>q;
								         ifstream acer ("STOK/Bilgisayar/acer.txt");
 						             if (acer.is_open())
 						             {
 						               while ( getline (acer,line) ) 
 						              {
 						              	istringstream buffer(line); 
							
						             	buffer >> sayi; 
						             	sayi=sayi-q;
						             	if(sayi<35){ // ��letme sahibi depodaki Acer marka bilgisayar�n miktar�n�n 35'ten az olmamas�n� istemektedir.
						             	   cout<<"Yapmak istedi�iniz g�ncelleme sonucunda depodaki Acer marka bilgisayarlar�n miktar� 35'ten az olaca��ndan g�ncellemeniz iptal edilmi�tir.\n\n";
						             	   sayi=sayi+q;
						             	   V=3*sayi;
						             	   cout<<"\t Stoktaki mevcut Acer marka bilgisayar miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n";
						             	}
						             	 else {
						             	   cout<<"G�ncellemeniz yap�l�yor";
						             	   for(int i=0;i<20;i++){
						             	   	cout<<".";
						             	   	Sleep(200);
						             	   }
						             	   cout<<"\n\n";
						             	V=3*sayi;
 						               cout<<"\tStoktaki yeni Acer marka bilgisayar miktar� "<<sayi<<" adet.Depodaki yeni hacmi "<<V<<" cm^3\n"; 
 						                   }
 						               }
 						                 acer.close();
 						                 }
 						                ofstream acer1 ("STOK/Bilgisayar/acer.txt");
 						               if(acer1.is_open())
 						               {
 						               	acer1<<sayi;
 					               	 	acer1.close();
 					                  }
								}
							}
						}
						else if(x==4){
							cout<<"\t �r�n eklemek i�in +, ��karmak i�in - tu�una bas�n�z.\n";
					        cin>>a;
					        switch (a){
					        	case '+':{
					        		cout<<"Miktar� giriniz.\n";
					        		cin>>q;
					        		      ifstream hp ("STOK/Bilgisayar/hp.txt");
 						             if (hp.is_open())
 						             {
 						               while ( getline (hp,line) ) 
 						              {
 						              	istringstream buffer(line); 
							
						             	buffer >> sayi; 
						             	sayi=sayi+q;
						             	cout<<"G�ncellemeniz yap�l�yor";
						             	for(int i=0;i<20;i++){
						             		cout<<".";
						             		Sleep(200);
						             	}
						             	cout<<"\n\n";
						             	V=2*sayi;
 						               cout<<"\tStoktaki yeni HP marka bilgisayar miktar� "<<sayi<<" adet.Depodaki yeni hacmi "<<V<<" cm^3\n"; 
 						               }
 						                 hp.close();
 						                 }
 						                ofstream hp1 ("STOK/Bilgisayar/hp.txt");
 						               if(hp1.is_open())
 						               {
 						               	hp1<<sayi;
 					               	 	hp1.close();
 					                  }
					        		break;
					        	} 
								   case '-':{
								    cout<<"Miktar� giriniz.\n";
								    cin>>q;
								         ifstream hp ("STOK/Bilgisayar/hp.txt");
 						             if (hp.is_open())
 						             {
 						               while ( getline (hp,line) ) 
 						              {
 						              	istringstream buffer(line); 
							
						             	buffer >> sayi; 
						             	sayi=sayi-q;
						             	if(sayi<55){ // ��letme sahibi depodaki HP marka bilgisayarlar�n miktar�n�n 55'ten az olmamas�n� istemektedir.
						             	  cout<<"Yapmak istedi�iniz g�ncelleme sonucunda depodaki HP marka bilgisayarlar�n miktar� 55'ten az olaca��ndan g�ncellemeniz iptal edilmi�tir.\n\n";
						             	  sayi=sayi+q;
						             	  V=2*sayi;
						             	  cout<<"\t Stoktaki mevcut HP marka bilgisayar miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n";
						             	}
						             	else{
						             	  cout<<"G�ncellemeniz yap�l�yor";
						             	  for(int i=0;i<20;i++){
						             	  	cout<<".";
						             	  	Sleep(200);
						             	  }
						             	  cout<<"\n\n";
						             	V=2*sayi;
 						               cout<<"\tStoktaki yeni HP marka bilgisayar miktar� "<<sayi<<" adet.Depodaki yeni hacmi "<<V<<" cm^3\n"; 
 						                  }
 						               }
 						                 hp.close();
 						                 }
 						                ofstream hp1 ("STOK/Bilgisayar/hp.txt");
 						               if(hp1.is_open())
 						               {
 						               	hp1<<sayi;
 					               	 	hp1.close();
 					                 }
								}
					        }
						}
						else if (x==5){
							cout<<"\t �r�n eklemek i�in +, ��karmak i�in - tu�una bas�n�z.\n";
							cin>>a;
							switch (a){
								case '+':{
									cout<<"Miktar� giriniz.\n";
									cin>>q;
									       ifstream dell ("STOK/Bilgisayar/dell.txt");
 						             if (dell.is_open())
 						             {
 						               while ( getline (dell,line) ) 
 						              {
 						              	istringstream buffer(line); 
							
						             	buffer >> sayi; 
						             	sayi=sayi+q;
						             	cout<<"G�ncellemeniz yap�l�yor";
						             	for(int i=0;i<20;i++){
						             		cout<<".";
						             		Sleep(200);
						             	}
						             	cout<<"\n\n";
						             	V=3*sayi;
 						               cout<<"\tStoktaki yeni Dell marka bilgisayar miktar� "<<sayi<<" adet.Depodaki yeni hacmi "<<V<<" cm^3\n"; 
 						               }
 						                 dell.close();
 						                 }
 						                ofstream dell1 ("STOK/Bilgisayar/dell.txt");
 						               if(dell1.is_open())
 						               {
 						               	dell1<<sayi;
 					               	 	dell1.close();
 					                 }
									break;
								}
								case '-':{
								    cout<<"Miktar� giriniz.\n";
								    cin>>q;
								        ifstream dell ("STOK/Bilgisayar/dell.txt");
 						             if (dell.is_open())
 						             {
 						               while ( getline (dell,line) ) 
 						              {
 						              	istringstream buffer(line); 
							
						             	buffer >> sayi; 
						             	sayi=sayi-q;
						             	 if(sayi<65){ // ��letme sahibi depodaki Dell marka bilgisayarlar�n miktar�n�n 65'ten az olmamas�n� istemektedir.
						             	   cout<<"Yapmak istedi�iniz g�ncelleme sonucunda depodaki Dell marka bilgisayarlar�n miktar� 65'ten az olaca��ndan g�ncellemeniz iptal edilmi�tir.\n\n";
						             	   sayi=sayi+q;
						             	   V=3*sayi;
						             	   cout<<"\t Stoktaki mevcut Dell marka bilgisayar miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n";
						             	   
						             	 }
						             	 else {
						             	   cout<<"G�ncellemeniz yap�l�yor";
						             	   for(int i=0;i<20;i++){
						             	   	cout<<".";
						             	   	Sleep(200);
						             	   }
						             	   cout<<"\n\n";
						             	V=3*sayi;
 						               cout<<"\tStoktaki yeni Dell marka bilgisayar miktar� "<<sayi<<" adet.Depodaki yeni hacmi "<<V<<" cm^3\n"; 
 						                   }
 						               }
 						                 dell.close();
 						                 }
 						                ofstream dell1 ("STOK/Bilgisayar/dell.txt");
 						               if(dell1.is_open())
 						               {
 						               	dell1<<sayi;
 					               	 	dell1.close();
 					             }
								
								}
							}
						}
				    }   
				break;}
				
				
				      case 3:{system("color 5B");
				       cout<<"\t***** G�da b�l�m�ne ho�geldiniz. *****\nG�da b�l�m�ndeki �r�nlerin mevucut durumu ve hacimleri i�in 1'e g�ncelleme yapmak i�in 2'e bas�n�z.\n";
				         cin>>x;
				       if(x==1){
					cout<<"\t Kontrol etmek istedi�iniz �r�n�n kodunu giriniz.\nSu(1), Soda(2), Un(3), Kahve(4), Cips(5)\n";
					cin>>x;
					if(x==1){
						    ifstream su ("STOK/Gida/su.txt");
						    if (su.is_open()){
						    	while(getline (su,line)){
						    		istringstream buffer (line);
						    		buffer>>sayi;
						    		V=sayi; // Bir su �i�esinin hacmi 1 cm^3 t�r.
						    		cout<<"Depo kontrol ediliyor";
							for(int i=0;i<20;i++){
								cout<<".";
								Sleep(200);
							}
							cout<<"\n\n";
						    		cout<<"\tStoktaki mevcut su �i�esi miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n";
						    	}
								su.close();
								}
						    }
					else if(x==2){
						     ifstream soda ("STOK/Gida/soda.txt");
						        if(soda.is_open()){
						        	while(getline(soda,line)){
						        		istringstream buffer (line);
						        		buffer>>sayi;
						        		V=0.5*sayi; // Bir soda �i�esinin hacmi 0.5 cm^3 t�r.
						        		cout<<"Depo kontrol ediliyor";
							for(int i=0;i<20;i++){
								cout<<".";
								Sleep(200);
							}
							cout<<"\n\n";
						        		cout<<"\tStoktaki mevcut soda �i�esi miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n";
						        	}
						        	soda.close();
						        }
					}else if(x==3){
						     ifstream un ("STOK/Gida/un.txt");
						       if(un.is_open()){
						       	while(getline(un,line)){
						       		istringstream buffer (line);
						       		buffer>>sayi;
						       		V=5*sayi;//Bir un �uval�n�n hacmi 5 cm^3 t�r.
						       		cout<<"Depo kontrol ediliyor";
							for(int i=0;i<20;i++){
								cout<<".";
								Sleep(200);
							}
							cout<<"\n\n";
						       		cout<<"\tStoktaki mevcut un �uval� miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n";
						       	}
						       	un.close();
						       }
					}else if(x==4){
						      ifstream kahve ("STOK/Gida/kahve.txt");
						        if (kahve.is_open()){
						        	while (getline(kahve,line)){
						        		istringstream buffer (line);
						        		buffer>>sayi;
						        		V=2*sayi; //Bir kahve paketinin hacmi 2 cm^3 t�r.
						        		cout<<"Depo kontrol ediliyor";
							for(int i=0;i<20;i++){
								cout<<".";
								Sleep(200);
							}
							cout<<"\n\n";
						        		cout<<"\tStoktaki mevcut kahve paketi miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n";
						        	}
						        	kahve.close();
						        }
					}else if(x==5){
						       ifstream cips ("STOK/Gida/cips.txt");
						         if(cips.is_open()){
						         	while (getline(cips,line)){
						         		istringstream buffer (line);
						         		buffer>>sayi;
						         		V=sayi; //Bir cips paketinin hacmi 1 cm^3 t�r.
						         		cout<<"Depo kontrol ediliyor";
							for(int i=0;i<20;i++){
								cout<<".";
								Sleep(200);
							}
							cout<<"\n\n";
						         		cout<<"\tStoktaki mevcut cips paketi miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n";
						         	}
						         	cips.close();
						         }
					}
					}
					else if(x==2){
					       cout<<"\tG�ncelleme yapmak istedi�iniz b�l�m�n kodunu giriniz.\nSu(1), Soda(2), Un(3), Kahve(4), Cips(5)\n";
					       cin>>x;
					         if(x==1){
					         	cout<<"�r�n eklemek i�in +,��karmak i�in - tu�una bas�n�z.\n";
					         	cin>>a;
					         	switch (a){
					         		case '+':{
					         			cout<<"Miktar� giriniz.\n";
					         			cin>>q;
					         			  ifstream su ("STOK/Gida/su.txt");
					         			   if(su.is_open()){
					         			   	 while (getline (su,line)){
					         			   	 	  istringstream buffer (line);
					         			   	 	  buffer>>sayi;
					         			   	 	  sayi=sayi+q;
					         			   	 	  cout<<"G�ncellemeniz yap�l�yor";
					         			   	 	  for(int i=0;i<20;i++){
					         			   	 	  	cout<<".";
					         			   	 	  	Sleep(200);
					         			   	 	  }
					         			   	 	  cout<<"\n\n";
					         			   	 	  V=sayi;
					         			   	 	  cout<<"\tStoktaki yeni su �i�esi miktar� "<<sayi<<" adet.Depodaki yeni hacmi "<<V<<" cm^3\n";
					         			   	 }
					         			   	 su.close();
					         			   }
					         			      ofstream su1 ("STOK/Gida/su.txt");
					         			      if(su1.is_open()){
					         			      	su1<<sayi;
					         			      	su1.close();
					         			      }
					         			break;
					         		}
					         		case '-':{	cout<<"Miktar� giriniz.\n";
					         			cin>>q;
					         			  ifstream su ("STOK/Gida/su.txt");
					         			   if(su.is_open()){
					         			   	 while (getline (su,line)){
					         			   	 	  istringstream buffer (line);
					         			   	 	  buffer>>sayi;
					         			   	 	  sayi=sayi-q;
					         			   	 	  if(sayi<150){ // ��letme sahibi depodaki su �i�esi miktar�n�n 150'den az olmamas�n� istemektedir.
					         			   	 	        cout<<"Yapmak istedi�iniz g�ncelleme sonucunda depodaki su �i�esi miktar� 150'den az olaca��ndan g�ncellemeniz iptal edilmi�tir.\n\n";
					         			   	 	        sayi=sayi+q;
					         			   	 	        V=sayi;
					         			   	 	        cout<<"\t Stoktaki mevcut su �i�esi miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n";
					         			   	 	      }
					         			   	 	      else{
					         			   	 	      cout<<"G�ncellemeniz yap�l�yor";
					         			   	 	      for(int i=0;i<20;i++){
					         			   	 	      	cout<<".";
					         			   	 	      	Sleep(200);
					         			   	 	      }
					         			   	 	      cout<<"\n\n";
					         			   	 	  V=sayi;
					         			   	 	  cout<<"\tStoktaki yeni su �i�esi miktar� "<<sayi<<" adet.Depodaki yeni hacmi "<<V<<" cm^3\n";
					         			   	               }
					         			   	 }
					         			   	 su.close();
					         			   }
					         			      ofstream su1 ("STOK/Gida/su.txt");
					         			      if(su1.is_open()){
					         			      	su1<<sayi;
					         			      	su1.close();
					         			      }
					         			break;
					         		}
					         	}
					         }else if(x==2){
					         	    cout<<"�r�n eklemek i�in +,��karmak i�in - tu�una bas�n�z.\n";
					         	cin>>a;
					         	switch (a){
					         		case '+':{
					         			cout<<"Miktar� giriniz.\n";
					         			cin>>q;
					         			  ifstream soda ("STOK/Gida/soda.txt");
					         			   if(soda.is_open()){
					         			   	 while (getline (soda,line)){
					         			   	 	  istringstream buffer (line);
					         			   	 	  buffer>>sayi;
					         			   	 	  sayi=sayi+q;
					         			   	 	  cout<<"G�ncellemeniz yap�l�yor";
					         			   	 	  for(int i=0;i<20;i++){
					         			   	 	  	cout<<".";
					         			   	 	  	Sleep(200);
					         			   	 	  }
					         			   	 	  cout<<"\n\n";
					         			   	 	  V=0.5*sayi;
					         			   	 	  cout<<"\tStoktaki yeni soda �i�esi miktar� "<<sayi<<" adet.Depodaki yeni hacmi "<<V<<" cm^3\n";
					         			   	 }
					         			   	 soda.close();
					         			   }
					         			      ofstream soda1 ("STOK/Gida/soda.txt");
					         			      if(soda1.is_open()){
					         			      	soda1<<sayi;
					         			      	soda1.close();
					         			      }
					         			break;
					         		}
					         		case '-':{	cout<<"Miktar� giriniz.\n";
					         			cin>>q;
					         			  ifstream soda ("STOK/Gida/soda.txt");
					         			   if(soda.is_open()){
					         			   	 while (getline (soda,line)){
					         			   	 	  istringstream buffer (line);
					         			   	 	  buffer>>sayi;
					         			   	 	  sayi=sayi-q;
					         			   	 	  if(sayi<85){ // ��letme sahibi depodaki soda �i�esi miktar�n�n 85'ten az olmamas�n� istemektedir.
					         			   	 	      cout<<"Yapmak istedi�iniz g�ncelleme sonucunda depodaki soda �i�esi miktar� 85'ten az olaca��ndan g�ncellemeniz iptal edilmi�tir.\n\n";
					         			   	 	      sayi=sayi+q;
					         			   	 	      V=0.5*sayi;
					         			   	 	      cout<<"\t Stoktaki mevcut soda �i�esi miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n";
					         			   	 	  }
					         			   	 	  else {
					         			   	 	       cout<<"G�ncellemeniz yap�l�yor";
					         			   	 	       for(int i=0;i<20;i++){
					         			   	 	       	cout<<".";
					         			   	 	       	Sleep(200);
					         			   	 	       }
					         			   	 	       cout<<"\n\n";
					         			   	 	  V=0.5*sayi;
					         			   	 	  cout<<"\tStoktaki yeni soda �i�esi miktar� "<<sayi<<" adet.Depodaki yeni hacmi "<<V<<" cm^3\n";
					         			   	         }
					         			   	 }
					         			   	 soda.close();
					         			   }
					         			      ofstream soda1 ("STOK/Gida/soda.txt");
					         			      if(soda1.is_open()){
					         			      	soda1<<sayi;
					         			      	soda1.close();
					         			      }
					         			break;
					         		}
					         	}
					         	
					         	
					         }
					         else if(x==3){
					         	     cout<<"�r�n eklemek i�in +,��karmak i�in - tu�una bas�n�z.\n";
					         	cin>>a;
					         	switch (a){
					         		case '+':{
					         			cout<<"Miktar� giriniz.\n";
					         			cin>>q;
					         			  ifstream un ("STOK/Gida/un.txt");
					         			   if(un.is_open()){
					         			   	 while (getline (un,line)){
					         			   	 	  istringstream buffer (line);
					         			   	 	  buffer>>sayi;
					         			   	 	  sayi=sayi+q;
					         			   	 	  cout<<"G�ncellemeniz yap�l�yor";
					         			   	 	  for(int i=0;i<20;i++){
					         			   	 	  	cout<<".";
					         			   	 	  	Sleep(200);
					         			   	 	  }
					         			   	 	  cout<<"\n\n";
					         			   	 	  V=5*sayi;
					         			   	 	  cout<<"\tStoktaki yeni un �uval� miktar� "<<sayi<<" adet.Depodaki yeni hacmi "<<V<<" cm^3\n";
					         			   	 }
					         			   	 un.close();
					         			   }
					         			      ofstream un1 ("STOK/Gida/un.txt");
					         			      if(un1.is_open()){
					         			      	un1<<sayi;
					         			      	un1.close();
					         			      }
					         			break;
					         		}
					         		case '-':{	cout<<"Miktar� giriniz.\n";
					         			cin>>q;
					         			  ifstream un ("STOK/Gida/un.txt");
					         			   if(un.is_open()){
					         			   	 while (getline (un,line)){
					         			   	 	  istringstream buffer (line);
					         			   	 	  buffer>>sayi;
					         			   	 	  sayi=sayi-q;
					         			   	 	  if(sayi<25){ // ��letme sahibi depodaki un �uval� miktar�n�n 25'ten az olmamas�n� istemektedir.
					         			   	 	    cout<<"Yapmak istedi�iniz g�ncelleme sonucunda depodaki un �uval� miktar� 25'ten az olaca��ndan g�ncellemeniz iptal edilmi�tir.\n\n";
					         			   	 	    sayi=sayi+q;
					         			   	 	    V=5*sayi;
					         			   	 	    cout<<"\tStoktaki mevcut un �uval� miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n";
					         			   	 	  }
					         			   	 	  else {
					         			   	 	     cout<<"G�ncellemeniz yap�l�yor";
					         			   	 	     for(int i=0;i<20;i++){
					         			   	 	     	cout<<".";
					         			   	 	     	Sleep(200);
					         			   	 	     }
					         			   	 	     cout<<"\n\n";
					         			   	 	  V=5*sayi;
					         			   	 	  cout<<"\tStoktaki yeni un �uval� miktar� "<<sayi<<" adet.Depodaki yeni hacmi "<<V<<" cm^3\n";
					         			   	          }
					         			   	 }
					         			   	 un.close();
					         			   }
					         			      ofstream un1 ("STOK/Gida/un.txt");
					         			      if(un1.is_open()){
					         			      	un1<<sayi;
					         			      	un1.close();
					         			      }
					         			break;
					         		}
					         	}
					         }else if(x==4){
					         	     cout<<"�r�n eklemek i�in +,��karmak i�in - tu�una bas�n�z.\n";
					         	cin>>a;
					         	switch (a){
					         		case '+':{
					         			cout<<"Miktar� giriniz.\n";
					         			cin>>q;
					         			  ifstream kahve ("STOK/Gida/kahve.txt");
					         			   if(kahve.is_open()){
					         			   	 while (getline (kahve,line)){
					         			   	 	  istringstream buffer (line);
					         			   	 	  buffer>>sayi;
					         			   	 	  sayi=sayi+q;
					         			   	 	  cout<<"G�ncellemeniz yap�l�yor";
					         			   	 	  for(int i=0;i<20;i++){
					         			   	 	  	cout<<".";
					         			   	 	  	Sleep(200);
					         			   	 	  }
					         			   	 	  cout<<"\n\n";
					         			   	 	  V=2*sayi;
					         			   	 	  cout<<"\tStoktaki yeni kahve paketi miktar� "<<sayi<<" adet.Depodaki yeni hacmi "<<V<<" cm^3\n";
					         			   	 }
					         			   	 kahve.close();
					         			   }
					         			      ofstream kahve1 ("STOK/Gida/kahve.txt");
					         			      if(kahve1.is_open()){
					         			      	kahve1<<sayi;
					         			      	kahve1.close();
					         			      }
					         			break;
					         		}
					         		case '-':{	cout<<"Miktar� giriniz.\n";
					         			cin>>q;
					         			  ifstream kahve ("STOK/Gida/kahve.txt");
					         			   if(kahve.is_open()){
					         			   	 while (getline (kahve,line)){
					         			   	 	  istringstream buffer (line);
					         			   	 	  buffer>>sayi;
					         			   	 	  sayi=sayi-q;
					         			   	 	  if(sayi<50){// ��letme sahibi depodaki kahve paketi miktar�n�n 50'den az olmamas�n� istemektedir.
					         			   	 	  cout<<"Yapmak istedi�iniz g�ncelleme sonucunda depodaki kahve paketi miktar� 50'den az olaca��ndan g�ncellemeniz iptal edilmi�tir.\n\n";
					         			   	 	  sayi=sayi+q;
					         			   	 	  V=2*sayi;
					         			   	 	  cout<<"\tStoktaki mevcut kahve paketi miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n";
					         			   	 	  }
					         			   	 	  else{
					         			   	 	   cout<<"G�ncellemeniz yap�l�yor";
					         			   	 	   for(int i=0;i<20;i++){
					         			   	 	   	cout<<".";
					         			   	 	   	Sleep(200);
					         			   	 	   }
					         			   	 	   cout<<"\n\n";
					         			   	 	  V=2*sayi;
					         			   	 	  cout<<"\tStoktaki yeni kahve paketi miktar� "<<sayi<<" adet.Depodaki yeni hacmi "<<V<<" cm^3\n";
					         			   	         }
					         			   	 }
					         			   	 kahve.close();
					         			   }
					         			      ofstream kahve1 ("STOK/Gida/kahve.txt");
					         			      if(kahve1.is_open()){
					         			      	kahve1<<sayi;
					         			      	kahve1.close();
					         			      }
					         			break;
					         		}
					         	}
					         }else if (x==5){
					         	      cout<<"�r�n eklemek i�in +,��karmak i�in - tu�una bas�n�z.\n";
					         	cin>>a;
					         	switch (a){
					         		case '+':{
					         			cout<<"Miktar� giriniz.\n";
					         			cin>>q;
					         			  ifstream cips ("STOK/Gida/cips.txt");
					         			   if(cips.is_open()){
					         			   	 while (getline (cips,line)){
					         			   	 	  istringstream buffer (line);
					         			   	 	  buffer>>sayi;
					         			   	 	  sayi=sayi+q;
					         			   	 	  cout<<"G�ncellemeniz yap�l�yor";
					         			   	 	  for(int i=0;i<20;i++){
					         			   	 	  	cout<<".";
					         			   	 	  	Sleep(200);
					         			   	 	  }
					         			   	 	  cout<<"\n\n";
					         			   	 	  V=sayi;
					         			   	 	  cout<<"\tStoktaki yeni cips paketi miktar� "<<sayi<<" adet.Depodaki yeni hacmi "<<V<<" cm^3\n";
					         			   	 }
					         			   	 cips.close();
					         			   }
					         			      ofstream cips1 ("STOK/Gida/cips.txt");
					         			      if(cips1.is_open()){
					         			      	cips1<<sayi;
					         			      	cips1.close();
					         			      }
					         			break;
					         		}
					         		case '-':{	cout<<"Miktar� giriniz.\n";
					         			cin>>q;
					         			  ifstream cips ("STOK/Gida/cips.txt");
					         			   if(cips.is_open()){
					         			   	 while (getline (cips,line)){
					         			   	 	  istringstream buffer (line);
					         			   	 	  buffer>>sayi;
					         			   	 	  sayi=sayi-q;
					         			   	 	  if(sayi<100){ // ��letme sahibi depodaki cips paketlerinin say�s�n�n 100'den az olmamas�n� istemektedir.
					         			   	 	    cout<<"Yapmak istedi�iniz g�ncelleme sonucunda depodaki cips paketi miktar� 100'den az olaca��ndan g�ncellemeniz iptal edilmi�tir.\n\n";
					         			   	 	    sayi=sayi+q;
					         			   	 	    V=sayi;
					         			   	 	    cout<<"\t Stoktaki mevcut cips paketi miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n";
					         			   	 	  }
					         			   	 	  else {
					         			   	 	    cout<<"G�ncellemeniz yap�l�yor";
					         			   	 	    for(int i=0;i<20;i++){
					         			   	 	    	cout<<".";
					         			   	 	    	Sleep(200);
					         			   	 	    }
					         			   	 	    cout<<"\n\n";
					         			   	 	  V=sayi;
					         			   	 	  cout<<"\tStoktaki yeni cips paketi miktar� "<<sayi<<" adet.Depodaki yeni hacmi "<<V<<" cm^3\n";
					         			   	          }
					         			   	 }
					         			   	 cips.close();
					         			   }
					         			      ofstream cips1 ("STOK/Gida/cips.txt");
					         			      if(cips1.is_open()){
					         			      	cips1<<sayi;
					         			      	cips1.close();
					         			      }
					         			break;
					         		}
					         	}
					         }
					       
					       
					       
				            }
			       
			
			
			
			
			
			
			
		
		                    break;}
		                    case 4:{system("color 7C");
		                    	cout<<"\t*****Mobilya b�l�m�ne ho�geldiniz.\nMobilya b�l�m�ndeki mevcut durum i�in 1'e g�ncelleme yapmak i�in 2'e bas�n�z.\n";
		                    	cin>>x;
		                    	if (x==1){
		                    		cout<<"\tStokta kontrol etmek istedi�iniz �r�n�n kodunu giriniz.\nBaza(1), Koltuk(2), Sandalye(3), Masa(4), Sehpa(5)\n";
		                    		cin>>x;
		                    		if(x==1){
		                    			ifstream baza ("STOK/Mobilya/baza.txt");
		                    			if(baza.is_open()){
		                    				while (getline(baza,line)){
		                    					istringstream buffer (line);
		                    					buffer>>sayi;
		                    					V=8*sayi;  //Bir bazan�n hacmi 8 cm^3 t�r.
		                    					cout<<"Depo kontrol ediliyor";
							for(int i=0;i<20;i++){
								cout<<".";
								Sleep(200);
							}
							cout<<"\n\n";
		                    					cout<<"\tStoktaki mevcut baza miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n";
		                    				}
		                    				baza.close();
		                    			}
		                    		}else if(x==2){
		                    			ifstream koltuk ("STOK/Mobilya/koltuk.txt");
		                    			if(koltuk.is_open()){
		                    				while (getline(koltuk,line)){
		                    					istringstream buffer (line);
		                    					buffer>>sayi;
		                    					V=7*sayi;  //Bir koltuk'un hacmi 7 cm^3 t�r.
		                    					cout<<"Depo kontrol ediliyor";
							for(int i=0;i<20;i++){
								cout<<".";
								Sleep(200);
							}
							cout<<"\n\n";
		                    					cout<<"\tStoktaki mevcut koltuk miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n";
		                    				}
		                    				koltuk.close();
		                    			}
		                    		}else if (x==3){
		                    			ifstream sandalye ("STOK/Mobilya/sandalye.txt");
		                    			if(sandalye.is_open()){
		                    				while (getline(sandalye,line)){
		                    					istringstream buffer (line);
		                    					buffer>>sayi;
		                    					V=2*sayi; //Bir sandalyenin hacmi 2 cm^3 t�r.
		                    					cout<<"Depo kontrol ediliyor";
							for(int i=0;i<20;i++){
								cout<<".";
								Sleep(200);
							}
							cout<<"\n\n";
		                    					cout<<"\tStoktaki mevcut sandalye miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n";
		                    				}
		                    				sandalye.close();
		                    			}
		                    		}else if(x==4){
		                    			ifstream masa ("STOK/Mobilya/masa.txt");
		                    			if(masa.is_open()){
		                    				while (getline(masa,line)){
		                    					istringstream buffer (line);
		                    					buffer>>sayi;
		                    					V=4*sayi; //Bir masan�n hacmi 4 cm^3 t�r.
		                    					cout<<"Depo kontrol ediliyor";
							for(int i=0;i<20;i++){
								cout<<".";
								Sleep(200);
							}
							cout<<"\n\n";
		                    					cout<<"\tStoktaki mevcut masa miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n";
		                    				}
		                    				masa.close();
		                    			}
		                    		}else if(x==5){
		                    			ifstream sehpa ("STOK/Mobilya/sehpa.txt");
		                    			if (sehpa.is_open()){
		                    				while (getline(sehpa,line)){
		                    					istringstream buffer (line);
		                    					buffer>>sayi;
		                    					V=3*sayi;  //Bir sehpan�n hacmi 3 cm^3 t�r.
		                    					cout<<"Depo kontrol ediliyor";
							for(int i=0;i<20;i++){
								cout<<".";
								Sleep(200);
							}
							cout<<"\n\n";
		                    					cout<<"\tStoktaki mevcut sehpa miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n";
		                    				}
		                    				sehpa.close();
		                    			}
		                    		}
		                	
		                    	}else if(x==2){
		                    		cout<<"\tG�ncelleme yapmak istedi�iniz b�l�m�n kodunu giriniz.\nBaza(1), Koltuk(2), Sandalye(3), Masa(4), Sehpa(5)\n";
		                    		cin>>x;
		                    		if(x==1){
		                    			cout<<"�r�n eklemek i�in + ��karmak i�in - tu�una bas�n�z.\n";
		                    			cin>>a;
		                    			switch (a){
		                    				case '+':{
		                    					cout<<"Miktar� giriniz.\n";
		                    					cin>>q;
		                    					ifstream baza ("STOK/Mobilya/baza.txt");
		                    					if (baza.is_open()){
		                    						while (getline(baza,line)){
		                    							istringstream buffer (line);
		                    							buffer>>sayi;
		                    							sayi=sayi+q;
		                    							cout<<"G�ncellemeniz yap�l�yor";
		                    							for(int i=0;i<20;i++){
		                    								cout<<".";
		                    								Sleep(200);
		                    							}
		                    							cout<<"\n\n";
		                    							V=8*sayi;
		                    							cout<<"\tStoktaki yeni baza miktar� "<<sayi<<" adet.Depodaki yeni hacmi "<<V<<" cm^3\n";
		                    						}
		                    						baza.close();
		                    					}
		                    					ofstream baza1 ("STOK/Mobilya/baza.txt");
		                    					if(baza1.is_open()){
		                    						baza1<<sayi;
		                    						baza1.close();
		                    					}
		                    					
		                    					break;
		                    				}
		                    				case '-':{
												cout<<"Miktar� giriniz.\n";
		                    					cin>>q;
		                    					ifstream baza ("STOK/Mobilya/baza.txt");
		                    					if (baza.is_open()){
		                    						while (getline(baza,line)){
		                    							istringstream buffer (line);
		                    							buffer>>sayi;
		                    							sayi=sayi-q;
		                    							if(sayi<10){ // ��letme sahibi depodaki baza miktar�n�n 10'dan az olmamas�n� istemektedir.
		                    								cout<<"Yapmak istedi�iniz g�ncelleme sonucunda depodaki baza miktar� 10'dan az olaca��ndan g�ncellemeniz iptal edilmi�tir.\n\n";
		                    								sayi=sayi+q;
		                    								V=8*sayi;
		                    								cout<<"\tStoktaki mevcut baza miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n";
		                    							}
		                    							else {
		                    							cout<<"G�ncellemeniz yap�l�yor";
		                    							for(int i=0;i<20;i++){
		                    								cout<<".";
		                    								Sleep(200);
		                    							}
		                    							cout<<"\n\n";
		                    							V=8*sayi;
		                    							cout<<"\tStoktaki yeni baza miktar� "<<sayi<<" adet.Depodaki yeni hacmi "<<V<<" cm^3\n";
		                    						     }
		                    						}
		                    						baza.close();
		                    					}
		                    					ofstream baza1 ("STOK/Mobilya/baza.txt");
		                    					if(baza1.is_open()){
		                    						baza1<<sayi;
		                    						baza1.close();
		                    					}
		                    					break;
		                    				}
		                    			}
		                    		}else if(x==2){
		                    			cout<<"�r�n eklemek i�in + ��karmak i�in - tu�una bas�n�z.\n";
		                    			cin>>a;
		                    			switch (a){
		                    				case '+':{
		                    					cout<<"Miktar� giriniz.\n";
		                    					cin>>q;
		                    					ifstream koltuk ("STOK/Mobilya/koltuk.txt");
		                    					if (koltuk.is_open()){
		                    						while (getline(koltuk,line)){
		                    							istringstream buffer (line);
		                    							buffer>>sayi;
		                    							sayi=sayi+q;
		                    							cout<<"G�ncellemeniz yap�l�yor";
		                    							for(int i=0;i<20;i++){
		                    								cout<<".";
		                    								Sleep(200);
		                    							}
		                    							cout<<"\n\n";
		                    							V=7*sayi;
		                    							cout<<"\tStoktaki yeni koltuk miktar� "<<sayi<<" adet.Depodaki yeni hacmi "<<V<<" cm^3\n";
		                    						}
		                    						koltuk.close();
		                    					}
		                    					ofstream koltuk1 ("STOK/Mobilya/koltuk.txt");
		                    					if(koltuk1.is_open()){
		                    						koltuk1<<sayi;
		                    						koltuk1.close();
		                    					}
		                    					
		                    					break;
		                    				}
		                    				case '-':{
												cout<<"Miktar� giriniz.\n";
		                    					cin>>q;
		                    					ifstream koltuk ("STOK/Mobilya/koltuk.txt");
		                    					if (koltuk.is_open()){
		                    						while (getline(koltuk,line)){
		                    							istringstream buffer (line);
		                    							buffer>>sayi;
		                    							sayi=sayi-q;
		                    							if(sayi<10){ // ��letme sahibi depodaki koltuk miktar�n�n 10'dan az olmamas�n� istemektedir.
		                    							cout<<"Yapmakta oldu�unuz g�ncelleme sonucunda depodaki koltuk miktar� 10'dan az olaca��ndan g�ncellemeniz iptal edilmi�tir.\n\n";
		                    							sayi=sayi+q;
		                    							V=7*sayi;
		                    							cout<<"\t Stoktaki mevcut koltuk miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n";
		                    							}
		                    							else{
		                    							cout<<"G�ncellemeniz yap�l�yor";
		                    							for(int i=0;i<20;i++){
		                    								cout<<".";
		                    								Sleep(200);
		                    							}
		                    							cout<<"\n\n";
		                    							V=7*sayi;
		                    							cout<<"\tStoktaki yeni koltuk miktar� "<<sayi<<" adet.Depodaki yeni hacmi "<<V<<" cm^3\n";
		                    						     }
		                    						}
		                    						koltuk.close();
		                    					}
		                    					ofstream koltuk1 ("STOK/Mobilya/koltuk.txt");
		                    					if(koltuk1.is_open()){
		                    						koltuk1<<sayi;
		                    						koltuk1.close();
		                    					}
		                    					break;
		                    				}
		                    			}
		                    			
		                    			
		                    		}else if(x==3){
		                    			cout<<"�r�n eklemek i�in + ��karmak i�in - tu�una bas�n�z.\n";
		                    			cin>>a;
		                    			switch (a){
		                    				case '+':{
		                    					cout<<"Miktar� giriniz.\n";
		                    					cin>>q;
		                    					ifstream sandalye ("STOK/Mobilya/sandalye.txt");
		                    					if (sandalye.is_open()){
		                    						while (getline(sandalye,line)){
		                    							istringstream buffer (line);
		                    							buffer>>sayi;
		                    							sayi=sayi+q;
		                    							cout<<"G�ncellemeniz yap�l�yor";
		                    							for(int i=0;i<20;i++){
		                    								cout<<".";
		                    								Sleep(200);
		                    							}
		                    							cout<<"\n\n";
		                    							V=2*sayi;
		                    							cout<<"\tStoktaki yeni sandalye miktar� "<<sayi<<" adet.Depodaki yeni hacmi "<<V<<" cm^3\n";
		                    						}
		                    						sandalye.close();
		                    					}
		                    					ofstream sandalye1 ("STOK/Mobilya/sandalye.txt");
		                    					if(sandalye1.is_open()){
		                    						sandalye1<<sayi;
		                    						sandalye1.close();
		                    					}
		                    					
		                    					break;
		                    				}
		                    				case '-':{
												cout<<"Miktar� giriniz.\n";
		                    					cin>>q;
		                    					ifstream sandalye ("STOK/Mobilya/sandalye.txt");
		                    					if (sandalye.is_open()){
		                    						while (getline(sandalye,line)){
		                    							istringstream buffer (line);
		                    							buffer>>sayi;
		                    							sayi=sayi-q;
		                    							if(sayi<12){ // ��letme sahibi depodaki sandalye miktar�n�n 12'den az olmamas�n� istemektedir.
		                    							cout<<"Yapmakta oldu�unuz g�ncelleme sonucunda depodaki sandalye miktar� 12'den az olaca��ndan g�ncellemeniz iptal edilmi�tir.\n\n";
		                    							sayi=sayi+q;
		                    							V=2*sayi;
		                    							cout<<"\t Stoktaki mevcut sandalye miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n";
		                    							}
		                    							else {
		                    							cout<<"G�ncellemeniz yap�l�yor";
		                    							for(int i=0;i<20;i++){
		                    								cout<<".";
		                    								Sleep(200);
		                    							}
		                    							cout<<"\n\n";
		                    							V=2*sayi;
		                    							cout<<"\tStoktaki yeni sandalye miktar� "<<sayi<<" adet.Depodaki yeni hacmi "<<V<<" cm^3\n";
		                    						     }
		                    						}
		                    						sandalye.close();
		                    					}
		                    					ofstream sandalye1 ("STOK/Mobilya/sandalye.txt");
		                    					if(sandalye1.is_open()){
		                    						sandalye1<<sayi;
		                    						sandalye1.close();
		                    					}
		                    					break;
		                    				}
		                    			}
		                    		}else if(x==4){
		                    			cout<<"�r�n eklemek i�in + ��karmak i�in - tu�una bas�n�z.\n";
		                    			cin>>a;
		                    			switch (a){
		                    				case '+':{
		                    					cout<<"Miktar� giriniz.\n";
		                    					cin>>q;
		                    					ifstream masa ("STOK/Mobilya/masa.txt");
		                    					if (masa.is_open()){
		                    						while (getline(masa,line)){
		                    							istringstream buffer (line);
		                    							buffer>>sayi;
		                    							sayi=sayi+q;
		                    							cout<<"G�ncellemeniz yap�l�yor";
		                    							for(int i=0;i<20;i++){
		                    								cout<<".";
		                    								Sleep(200);
		                    							}
		                    							cout<<"\n\n";
		                    							V=4*sayi;
		                    							cout<<"\tStoktaki yeni masa miktar� "<<sayi<<" adet.Depodaki yeni hacmi "<<V<<" cm^3\n";
		                    						}
		                    						masa.close();
		                    					}
		                    					ofstream masa1 ("STOK/Mobilya/masa.txt");
		                    					if(masa1.is_open()){
		                    						masa1<<sayi;
		                    						masa1.close();
		                    					}
		                    					
		                    					break;
		                    				}
		                    				case '-':{
												cout<<"Miktar� giriniz.\n";
		                    					cin>>q;
		                    					ifstream masa ("STOK/Mobilya/masa.txt");
		                    					if (masa.is_open()){
		                    						while (getline(masa,line)){
		                    							istringstream buffer (line);
		                    							buffer>>sayi;
		                    							sayi=sayi-q;
		                    							if(sayi<10){ // ��letme sahibi depodaki masa miktar�n�n 10'dan az olmamas�n� istemektedir.
		                    							cout<<"Yapmakta oldu�unuz g�ncelleme sonucunda depodaki masa miktar� 10'dan az olaca��ndan g�ncellemeniz iptal edilmi�tir.\n\n";
		                    							sayi=sayi+q;
		                    							V=4*sayi;
		                    							cout<<"\t Stoktaki mevcut masa miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n";
		                    							}
		                    							else{
		                    							cout<<"G�ncellemeniz yap�l�yor";
		                    							for(int i=0;i<20;i++){
		                    								cout<<".";
		                    								Sleep(200);
		                    							}
		                    							cout<<"\n\n";
		                    							V=4*sayi;
		                    							cout<<"\tStoktaki yeni masa miktar� "<<sayi<<" adet.Depodaki yeni hacmi "<<V<<" cm^3\n";
		                    						    }
		                    						}
		                    						masa.close();
		                    					}
		                    					ofstream masa1 ("STOK/Mobilya/masa.txt");
		                    					if(masa1.is_open()){
		                    						masa1<<sayi;
		                    						masa1.close();
		                    					}
		                    					break;
		                    				}
		                    			}
		                    		}else if(x==5){
		                    			cout<<"�r�n eklemek i�in + ��karmak i�in - tu�una bas�n�z.\n";
		                    			cin>>a;
		                    			switch (a){
		                    				case '+':{
		                    					cout<<"Miktar� giriniz.\n";
		                    					cin>>q;
		                    					ifstream sehpa ("STOK/Mobilya/sehpa.txt");
		                    					if (sehpa.is_open()){
		                    						while (getline(sehpa,line)){
		                    							istringstream buffer (line);
		                    							buffer>>sayi;
		                    							sayi=sayi+q;
		                    							cout<<"G�ncellemeniz yap�l�yor";
		                    							for(int i=0;i<20;i++){
		                    								cout<<".";
		                    								Sleep(200);
		                    							}
		                    							cout<<"\n\n";
		                    							V=3*sayi;
		                    							cout<<"\tStoktaki yeni sehpa miktar� "<<sayi<<" adet.Depodaki yeni hacmi "<<V<<" cm^3\n";
		                    						}
		                    						sehpa.close();
		                    					}
		                    					ofstream sehpa1 ("STOK/Mobilya/sehpa.txt");
		                    					if(sehpa1.is_open()){
		                    						sehpa1<<sayi;
		                    						sehpa1.close();
		                    					}
		                    					
		                    					break;
		                    				}
		                    				case '-':{
												cout<<"Miktar� giriniz.\n";
		                    					cin>>q;
		                    					ifstream sehpa ("STOK/Mobilya/sehpa.txt");
		                    					if (sehpa.is_open()){
		                    						while (getline(sehpa,line)){
		                    							istringstream buffer (line);
		                    							buffer>>sayi;
		                    							sayi=sayi-q;
		                    							if(sayi<15){// ��letme sahibi depodaki sehpa miktar�n�n 15'ten az olmamas�n� istemektedir.
		                    								cout<<"Yapmakta oldu�unuz g�ncelleme sonucunda depodaki sehpa miktar� 15'ten az olaca��ndan g�ncellemeniz iptal edilmi�tir.\n\n";
		                    								sayi=sayi+q;
		                    								V=3*sayi;
		                    								cout<<"\t Stoktaki mevcut sehpa miktar� "<<sayi<<" adet.Depodaki hacmi "<<V<<" cm^3\n";
		                    							}
		                    							else{
		                    							cout<<"G�ncellemeniz yap�l�yor";
		                    							for(int i=0;i<20;i++){
		                    								cout<<".";
		                    								Sleep(200);
		                    							}
		                    							cout<<"\n\n";
		                    							V=3*sayi;
		                    							cout<<"\tStoktaki yeni sehpa miktar� "<<sayi<<" adet.Depodaki yeni hacmi "<<V<<" cm^3\n";
		                    						    }
		                    						}
		                    						sehpa.close();
		                    					}
		                    					ofstream sehpa1 ("STOK/Mobilya/sehpa.txt");
		                    					if(sehpa1.is_open()){
		                    						sehpa1<<sayi;
		                    						sehpa1.close();
		                    					}
		                    					break;
		                    				}
		                    			}
		                    		}
		                    	}
		                    	
		                    	
		                    	
		                    	
		                    	
		                    	
		                    	
		                    	
		                    	
		                    	
		                    	break;
		                    }
		    
	     	
      }
	  cout<<"\n\n\n PROGRAMDAN CIKMAK ICIN 1, DEVAM ETMEK ICIN HERHANGI BIR RAKAM GIRINIZ:";
	    	cin>>devam;
	    	system("cls");
	  }
	   
	  
	  
	  while(devam!=1);
	  
}



