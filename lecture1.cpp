#include<iostream>

using namespace std;

class student{
	
	private:
		
	int stu_id;
	int stu_age;
	char stu_name[50];
	char stu_course[50];
	char stu_email[50];
	char stu_city[50];
	char stu_college[50];
	
	public:
		
		void setter();
		void getter();
		
};

void student::setter(){
	
	cout<<"Enter Student id:";
	cin>>stu_id;
     
	 cout<<"Enter Student Age:";
	cin>>stu_age;
	
	cout<<"Enter Student Name:";
	cin>>stu_name;
	
	cout<<"Enter Student Course:";
	cin>>stu_course;
	
	cout<<"Enter Student email:";
	cin>>stu_email;
	
	cout<<"Enter Student City:";
	cin>>stu_city;
	
	cout<<"Enter Student College:";
	cin>>stu_college;
	
	
}
void student::getter(){
	
	cout<<"Student id ="<<stu_id<<endl;
	cout<<"Student Age ="<<stu_age<<endl;
	cout<<"Student Name ="<<stu_name<<endl;
	cout<<"Student Course ="<<stu_course<<endl;
	cout<<"Student email ="<<stu_email<<endl;
	cout<<"Student City ="<<stu_city<<endl;
	cout<<"Student College ="<<stu_college<<endl;
	
}

main(){
	
	
	student o[5];
	int i;
	
	for (i=0; i<5; i++){
		
		o[i].setter();
		o[i].getter();
		
	}
	
	
}



















