#include<iostream>
#include<string>
using namespace std;
string arr1[20] , arr2[20], arr3[20] , arr4[20], arr5[20];
int total = 0;
void enter()
{
    int choice;
    cout<<"how many students do you want to enter:";
    cin>> choice;
    if(total==0)
    {
    total = total+choice;
    for(int i=0;i<choice;i++)
    {
         cout<<"enter data of student:"<<i+1<<endl;  
         cout<<"enter name:";
         cin>>arr1[i];
         cout<<"enter roll no.:";
         cin>>arr2[i];
         cout<<"enter course:";
         cin>>arr3[i];
        cout<<"enter class:";
        cin>>arr4[i];
        cout<<"enter contact:";
        cin>> arr5[i];
    }}

    else
    {
    for(int i=choice;i<total+choice;i++)
    {
         cout<<"enter data of student:"<<i+1<<endl; 
            cout<<"enter name:";
         cin>>arr1[i];
         cout<<"enter roll no.:";
         cin>>arr2[i];
         cout<<"enter course:";
         cin>>arr3[i];
        cout<<"enter class:";
        cin>>arr4[i];
        cout<<"enter contact:";
        cin>> arr5[i];
     }
        total= total+choice;
}
}
void show()
{
    for(int i =0;i<total;i++)
    {
        cout<<"data of student:"<<i+1<<endl;
        cout<<"Name:"<<arr1[i]<<endl;
        cout<<"Rollno.:"<<arr2[i]<<endl;
        cout<<"Course:"<<arr3[i]<< endl;
        cout<<"class:"<<arr4[i]<<endl;
        cout<<"contact:"<<arr5[i]<<endl;

    }
}    

void search()
{   string rollno;
    cout<<"enter Rollno. of student to search:";
    cin>>rollno;
    bool found = false;
    for(int i=0;i<total;i++)
    {
        if(rollno == arr2[i])
        {
            found = true;
            cout<<"data of student:"<<i+1<<endl;
        cout<<"Name:"<<arr1[i]<<endl;
        cout<<"Rollno.:"<<arr2[i]<<endl;
        cout<<"Course:"<<arr3[i]<< endl;
        cout<<"class:"<<arr4[i]<<endl;
        cout<<"contact:"<<arr5[i]<<endl;
        }
        
        
    }
    if(found==false)
    {
        cout<<"Record not found....!"<<endl;
    }

}
void update()
{

    string rollno;
    cout<<"enter Rollno. of student to search:";
    cin>>rollno;
    bool found = false;
    for(int i=0;i<total;i++)
    {
        if(rollno == arr2[i])
        {
            found = true;
            cout<<"previous data of student:"<<endl;
            cout<<"data of student:"<<i+1<<endl;
        cout<<"Name:"<<arr1[i]<<endl;
        cout<<"Rollno.:"<<arr2[i]<<endl;
        cout<<"Course:"<<arr3[i]<< endl;
        cout<<"class:"<<arr4[i]<<endl;
        cout<<"contact:"<<arr5[i]<<endl;
        cout<<"\n enter name:";
         cin>>arr1[i];
         cout<<"enter roll no.:";
         cin>>arr2[i];
         cout<<"enter course:";
         cin>>arr3[i];
        cout<<"enter class:";
        cin>>arr4[i];
        cout<<"enter contact:";
        cin>> arr5[i];
        }    
}
        if(!found)
        {
            cout<<"Record not found....!"<<endl;
        }

}
void deletere()
{
int a;
cout<<"press 1 to delete full record"<<endl;
cout<<"press 2 to delete specific record"<<endl;
cin>>a;

if(a==1)
{
    total=0;
    cout<<"All record is deleted"<<endl;
}
else if(a==2)
{

    string rollno;
    cout<<"enter rollno. to delete";
    cin>>rollno;
    bool found = false;
    for(int i=0;i<total;i++)
    {
        if(rollno==arr2[i])
        {
            found=true;
            for(int j=i;j<total-1;j++)
            {
                arr1[j]=arr1[j+1];
                arr2[j]=arr2[j+1];
                 arr3[j]=arr3[j+1];
                  arr4[j]=arr4[j+1];
                   arr5[j]=arr5[j+1];
            }
            total--;
            cout<<"your required record is deleted....!!"<<endl;
        }
    }
}
}


int main(){
int value;
while(true){
    cout<<"press 1 to enter data"<<endl;
    cout<<"press 2 to show data"<<endl;
    cout<<"press 3 to search data"<<endl;
    cout<<"press 4 to update data"<<endl;
    cout<<"press 5 to delete data"<<endl;
    cout<<"press 6 to exit"<< endl;
    cin>> value;
    switch(value)
    {
        case 1:
            enter();
             break;
        case 2:
            show();
            break;
        case 3:
            search();
            break;
        case 4:
            update();
            break;
        case 5:
            deletere();
            break;
        case 6:
            exit(0);
            break;                

    }


}

return 0;

}