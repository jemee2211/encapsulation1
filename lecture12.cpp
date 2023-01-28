#include<iostream>

using namespace std;

class Coustmer{
	
	private:
		
	int cust_id;
	int cust_age;
	char cust_name[50];
	char cust_telecome_brand_name[50];
	char cust_mobile_number[50];
	char cust_city[50];
	char cust_simcard_validity[50];
	
	public:
		
		void setData();
		void getData();
		
};

void Coustmer::setData(){
	
	cout<<"Enter Coustmer id:";
	cin>>cust_id;
     
	 cout<<"Enter Coustmer Age:";
	cin>>cust_age;
	
	cout<<"Enter Coustmer Name:";
	cin>>cust_name;
	
	cout<<"Enter Coustmer Telecome Brand Name:";
	cin>>cust_telecome_brand_name;
	
	cout<<"Enter Coustmer Mobile Number:";
	cin>>cust_mobile_number;
	
	cout<<"Enter Coustmer City:";
	cin>>cust_city;
	
	cout<<"Enter Coustmer Simcard Validity:";
	cin>>cust_simcard_validity;
	
	
}
void Coustmer::getData(){
	
	cout<<"Coustmer id ="<<cust_id<<endl;
	cout<<"Coustmer Age ="<<cust_age<<endl;
	cout<<"Coustmer Name ="<<cust_name<<endl;
	cout<<"Coustmer Telecome Brand Name ="<<cust_telecome_brand_name<<endl;
	cout<<"Coustmer Mobile Number ="<<cust_mobile_number<<endl;
	cout<<"Coustmer City ="<<cust_city<<endl;
	cout<<"Coustmer Simcard Validity ="<<cust_simcard_validity<<endl;
	
}

main(){
	
	
	Coustmer o[5];
	int i;
	
	for (i=0; i<5; i++){
		
		o[i].setData();
		o[i].getData();
		
	}
	
	
}

