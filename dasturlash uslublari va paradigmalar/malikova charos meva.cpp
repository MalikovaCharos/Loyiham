#include<iostream> 
#include<string.h>
#include<stdlib.h>
using namespace std; 
class mevalar{ 
 private : 
 string nomi; 
 string rangi; 
 int hajmi; 
 string turi; 
 float narxi; 
 string foydasi;
 string sifati;
 string tami;
 public : 
  void show() 
  { 
   static int k=0; 
   cout<<++k<<" - mevalar "<<endl<<endl; 
   cout<<"nomi: "<<nomi<<endl; 
   cout<<"rangi: "<<rangi<<endl; 
   cout<<"hajmi: "<<hajmi<<endl; 
   cout<<"turi: "<<turi<<endl; 
   cout<<"narxi: "<<narxi<<endl; 
   cout<<"tami: "<<tami<<endl;
   cout<<"foydasi: "<<foydasi<<endl; 
	cout<<"sifati: "<<sifati<<endl; 
  }; 
  
  void input(){ 
   static int k=0; 
   
   cout<<++k<<" - mevalar"<<endl<<endl; 
   cout<<"nomi: ";cin>>nomi; 
   cout<<"rangi: ";cin>>rangi; 
   cout<<"hajmi: ";cin>>hajmi; 
   cout<<"turi: ";cin>>turi; 
   cout<<"narxi: ";cin>>narxi; 
   cout<<"tami: ";cin>>tami; 
   cout<<"foydasi: ";cin>>foydasi;
cout<<"sifati: ";cin>>sifati; 
   cout<<endl; 
  }; 
  void qidir(){ 
  int k; cout<<"Izlash turini kiriting: "<<endl;
  cout<<"nomi: 1 "<<endl; 
   cout<<"rangi: 2 "<<endl; 
   cout<<"hajmi: 3 "<<endl; 
   cout<<"turi: 4 "<<endl; 
   cout<<"narxi: 5 "<<endl; 
   cout<<"tami: 6 "<<endl; 
   cout<<"foydasi: 7 "<<endl;
cout<<"sifati: 8 "<<endl;
      cin>>k;
	  if(k==1){
	  	string s;
	  	cout<<endl<<"Qidiriliyotgan mevaning nomini kriting";cin>>s; 
	  	if(nomi.compare(s)==0){
		  cout<<"Bunday nomli mevalar mavjud"; 
		  show(); }}
		  
		   if(k==2){
	  	string s;
	  	cout<<endl<<"Qidiriliyotgan mevaning rangini kriting";cin>>s; 
	  	if(rangi.compare(s)==0){
		  cout<<"Bunday nomli mevalar mavjud"; 
		  show(); }}
		  
		   if(k==3){
	  	int s;
	  	cout<<endl<<"Qidiriliyotgan mevaning hajmini kriting";cin>>s; 
	  	if(hajmi==s){
		  cout<<"Bunday nomli mevalar mavjud"; 
		  show(); }}
		  
		   if(k==4){
	  	string s;
	  	cout<<endl<<"Qidiriliyotgan mevaning turini kriting";cin>>s; 
	  	if(turi.compare(s)==0){
		  cout<<"Bunday nomli mevalar mavjud"; 
		  show(); }}
		  
		   if(k==5){
	  	float s;
	  	cout<<endl<<"Qidiriliyotgan mevaning narxini kriting";cin>>s; 
	  	if(narxi==s){
		  cout<<"Bunday nomli mevalar mavjud"; 
		  show(); }}
		  if(k==3){
		  
		   if(k==6){
	  	string s;
	  	cout<<endl<<"Qidiriliyotgan mevaning foydasini kriting";cin>>s; 
	  	if(foydasi.compare(s)==0){
		  cout<<"Bunday nomli mevalar mavjud"; 
		  show(); }}
		  
		   if(k==7){
	  	string s;
	  	cout<<endl<<"Qidiriliyotgan mevaning sifatini kriting";cin>>s; 
	  	if(sifati.compare(s)==0){
		  cout<<"Bunday nomli mevalar mavjud"; 
		  show(); }}
	  }
}
}; 
int main() { 
 mevalar t[100]; 
 int N;cout<<"Mevalar sonni kriting";cin>>N;  
 for(int i=0;i<N;i++) 
 { 
  t[i].input(); 
 } 
  
 for(int i;i<N;i++) 
 { 
  t[i].qidir(); 
  }
}
 
// string d; 
// cout<<endl<<"Qidiriliyotgan mevaning hajmini kriting";cin>>s; 
//  
// for(int i;i<N;i++) 
// { 
//  t[i].qidir1(d); 
// } }
