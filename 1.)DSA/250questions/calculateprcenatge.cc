// calculate the total marks, percentage and division
#include<iostream>
#include<string.h>

using namespace std;
int main(){
   int rollno,phy,chem,it,total;
   float percentage;
   char name[30], div[10];

   cout<<"Input the roll Number of students : ";
   cin>>rollno;

   cout<<"Input the Name of the student : ";
   cin>>name;

   cout<<"Input the marks of physics,chemistry and Information tech ..";
   cin>>phy>>chem>>it;

   total = phy + chem + it;
   percentage = total/3.0;

   if(percentage >= 60)
   strcpy(div,"first");

   else if(percentage < 60 && percentage >= 48){
    strcpy(div,"Second")
   }

   else if(percentage< 48 && percentage >= 36 ){
    strcpy(div,"Pass");
   }

   else{
    strcpy(div,"Fail");
   }
   cout<<"Roll No "<<rollNo<<endl<<"Name of student : "<<name<<endl;

   cout<<"Marks in physics : "<<
}