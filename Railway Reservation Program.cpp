 //                                                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//                                                  .......WELCOME TO RAILWAY RESERVATION SYSTEM..........
//                                                      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//                                                                                               


#include <iostream>
using namespace std;


int 
seat1=45,
seat2=40,
seat3=50,
seat4=60,
seat5=10;

class Train
{
    public:
    
    string name;
    int id;
    string passengername;
    int age;
    string types[4]={"First Class","Second Class","Third Class","General"};
    string type;
    
    public:
    Train()
    {
        name="";
        id=0;
        type="";
    }
    
   Train(string n,int i,int p)
    {
        name=n;
        id=i;
        type=types[p-1];    
    }
    void details()
    {
        cout<<"Enter passenger name "<<endl;
        cin>>passengername;
        cout<<"Enter age of passenger"<<endl;
        cin>>age;
    }
    
    void display()
    {
        cout<<"Train Name - "<< name<< endl;
        cout<<"Train No - "<< id<<endl;
        cout<<"Coach type - "<<type<<endl;
        cout<<"Passenger Name - "<<passengername<<endl;
        cout<<"Age of passenger - "<<age<<endl;
        
    }
    
};

class RajdhaniExpress : public Train
{
    public:
    
    string src;
    string dst;
    
    public:
    RajdhaniExpress()
    {
        Train();
        src="";
        dst="";
    }
     RajdhaniExpress(int p,string s1,string s2):Train("Rajdhani Express",22691,p)
    {
        src=s1;
        dst=s2;
    }
    friend void fare(int p);
    void get()
    {
        display();
        cout<<"Source is - "<<src<<endl;
        cout<<"Destination is - "<<dst<<endl;
    }
    
};

class NizamuddinExpress : public Train
{
    public:
    
    string src;
    string dst;
    float amt;
    
    public:
    NizamuddinExpress()
    {
        Train();
        src="";
        dst="";
    }
     NizamuddinExpress(int p,string s1,string s2):Train("Nizamuddin Express",17305,p)
    {
        src=s1;
        dst=s2;
    }
    friend void fare(int p,string src,string des);
    void get()
    {
        display();
        cout<<"Source is - "<<src<<endl;
        cout<<"Destination is - "<<dst<<endl;
    }
    
};

class ShatabdiExpress : public Train
{
    public:
    
    string src;
    string dst;
    float amt;
    
    public:
    ShatabdiExpress()
    {
        Train();
        src="";
        dst="";
    }
     ShatabdiExpress(int p,string s1,string s2):Train("Shatabdi Express",12009,p)
    {
        src=s1;
        dst=s2;
    }
    friend float fare2(int p);
    void get()
    {
        display();
        cout<<"Source is - "<<src<<endl;
        cout<<"Destination is - "<<dst<<endl;
    }
    
};
void fare(int p)
{
    float gst,amt;
    if(p==0)
    {
        float p=rand()%1200;
        gst=(18.0/100)*p;
        amt=gst+p;
    }
    else if(p==1)
    {
        double p=rand()%800;
        gst=(18.0/100)*p;
        amt=gst+p;
    }
    else if(p==2)
    {
        double p=rand()%600;
        gst=(18.0/100)*p;
        amt=gst+p;
    }
    else
    {
        double p=rand()%200;
        gst=(18.0/100)*p;
        amt=gst+p;
    }
    cout<<"Total fare is - "<<amt<<endl;
}

void fare(int p,string str,string des)
{
    float gst,amt;
    if(p==0)
    {
        float p=rand()%1200;
        gst=(18.0/100)*p;
        amt=gst+p;
    }
    else if(p==1)
    {
        double p=rand()%800;
        gst=(18.0/100)*p;
        amt=gst+p;
    }
    else if(p==2)
    {
        double p=rand()%600;
        gst=(18.0/100)*p;
        amt=gst+p;
    }
    else
    {
        double p=rand()%200;
        gst=(18.0/100)*p;
        amt=gst+p;
    }
    cout<<"Total fare is - "<<amt<<endl;
}
float fare2(int p)
{
    float gst,amt;
    if(p==0)
    {
        float p=rand()%1200;
        gst=(18.0/100)*p;
        amt=gst+p;
    }
    else if(p==1)
    {
        double p=rand()%800;
        gst=(18.0/100)*p;
        amt=gst+p;
    }
    else if(p==2)
    {
        double p=rand()%600;
        gst=(18.0/100)*p;
        amt=gst+p;
    }
    else
    {
        double p=rand()%200;
        gst=(18.0/100)*p;
        amt=gst+p;
    }
    return amt;
}





class DurontoExpress : public Train
{
    public:
    
    string src;
    string dst;
    float amt;
    
    public:
    DurontoExpress()
    {
        Train();
        src="";
        dst="";
    }
     DurontoExpress(int p,string s1,string s2):Train("Duronto Express",12293,p)
    {
        src=s1;
        dst=s2;
    }
    void fare1(int p);
    void operator ++()
    {
        amt=amt+100;
        cout<<"New fare after food addition is  = "<<amt<<endl;
    }
    void display()
    {
        //display();
        cout<<"Source is - "<<src<<endl;
        cout<<"Destination is - "<<dst<<endl;
    }
    
};

void DurontoExpress:: fare1(int p)
{
    float gst;
    if(p==0)
    {
        float p=rand()%1200;
        gst=(18.0/100)*p;
        amt=gst+p;
    }
    else if(p==1)
    {
        double p=rand()%800;
        gst=(18.0/100)*p;
        amt=gst+p;
    }
    else if(p==2)
    {
        double p=rand()%600;
        gst=(18.0/100)*p;
        amt=gst+p;
    }
    else
    {
        double p=rand()%200;
        gst=(18.0/100)*p;
        amt=gst+p;
    }
    cout<<"Total fare is - "<<amt<<endl;
}

class VandeBharatExpress : public Train
{
    public:
    
    string src;
    string dst;
    float amt;
    
    public:
    VandeBharatExpress()
    {
        Train();
        src="";
        dst="";
    }
     VandeBharatExpress(int p,string s1,string s2):Train("Vande Bharat Express",22493,p)
    {
        src=s1;
        dst=s2;
    }
     float fare(int p);
     void operator ++()
    {
        amt=amt+120;
        cout<<"New fare after food addition is  = "<<amt<<endl;
    }
    void get()
    {
        display();
        cout<<"Source is - "<<src<<endl;
        cout<<"Destination is - "<<dst<<endl;
    }
    
};

float VandeBharatExpress:: fare(int p)
{
    float gst;
    if(p==0)
    {
        float p=rand()%1200;
        gst=(18.0/100)*p;
        amt=gst+p;
    }
    else if(p==1)
    {
        double p=rand()%800;
        gst=(18.0/100)*p;
        amt=gst+p;
    }
    else if(p==2)
    {
        double p=rand()%600;
        gst=(18.0/100)*p;
        amt=gst+p;
    }
    else
    {
        double p=rand()%200;
        gst=(18.0/100)*p;
        amt=gst+p;
    }
    return amt;
}

class CargoTrain
{
    public:
    
    string src;
    string des;
    string loc;
    string phno;
    string name;
    
    public:
    CargoTrain()
    {
        src="";
        des="";
        loc="";
    }
    
    CargoTrain(string s1,string s2)
    {
        src=s1;
        des=s2;
    }
    void getdetails()
    {
        cout<<"Enter shipping address"<<endl;
        cin>>loc;
        cout<<"Name of customer"<<endl;
        cin>>name;
        cout<<"Enter phone number of customer"<<endl;
        cin>>phno;
    }
    friend void amount();
    void display()
    {
        cout<<"Source is - " <<src<<endl;
        cout<<"Destination is - " <<des<<endl;
        cout<<"Shipping address - "<<loc<<endl;
        cout<<"Customer Name - " <<name<<endl;
        cout<<"Phone numebr - "<<phno<<endl;
       
    }
};
void amount()
{
    float gst,amt;
    double p=rand()%2000;
    gst=(18.0/100)*p;
    amt=gst+p;
     cout<<"Amount of transportation  is - " <<amt<<endl;
}

//friend function
void RE(int p,string src,string des)
{
     RajdhaniExpress re(p,src,des);
    re.details();
    re.get();
    fare(p);
}
//function overloading
void NE(int p,string src,string des)
{
     NizamuddinExpress ne(p,src,des);
    ne.details();
    ne.get();
    fare(p,src,des);
}
//function protopype
void SE(int p,string src,string des)
{
     ShatabdiExpress se(p,src,des);
    se.details();
    se.get();
    float amt=fare2(p);
    cout<<"Total fare is - "<<amt<<endl;
}
//function overriding and operator overloading
void DE(int p,string src,string des)
{
    int d;
     DurontoExpress de(p,src,des);
    de.details();
    de.Train::display();
    de.display();
    de.fare1(p);
    cout<<"Enter 1 if u want food"<<endl;
    cin>>d;
    if(d)
    {
        ++de;   
    }
}
//function prototypes and operator overloading
void VBE(int p,string src,string des)
{
    int d;
    float p1;
     VandeBharatExpress vbe(p,src,des);
     vbe.details();
     vbe.get();
      p1=vbe.fare(p);
      cout<<"Total fare is - "<<p1<<endl;
       cout<<"Enter 1 if u want food"<<endl;
    cin>>d;
    if(d)
    {
        ++vbe;   
    }
      
}

void CT(string src,string des)
{
    CargoTrain ct(src,des);
    ct.getdetails();
    ct.display();
    amount();
}


int main()
{
    int n,n1,n2,p;
    string src,des,name,phno;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<".......WELCOME TO RAILWAY RESERVATION SYSTEM..........\n";
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"Enter your choice"<<endl;
    cout<<"1 - Info about Trains "<<endl;
    cout<<"2 - Book a Ticket "<<endl;
    cout<<"3 - Cancel a booked ticket "<<endl;
    cout<<"4 - Exit "<<endl;
    cin>>n;
    
    while(1)
    {
        switch(n)
        {
            case 1:
                cout<<"Types of train "<<endl;
                cout<<"1 - Passenger Train "<<endl;
                cout<<"2- Cargo Train "<<endl;
                cout<<"Enter your choice of train "<<endl;
                cin>>n1;
                switch(n1)
                {
                    case 1:
                    cout<<" Types of Passenger Train "<<endl;
                    cout<<" 1- RajdhaniExpress"<<endl;
                    cout<<" 2- NizamuddinExpress"<<endl;
                    cout<<" 3- ShatabdiExpress"<<endl;
                    cout<<" 4- DurontoExpress"<<endl;
                    cout<<" 5- VandeBharatExpress"<<endl;
                    cin>>n2;
                    switch(n2)
                    {
                        case 1:
                        cout<<"No of seats Avilable in RajdhaniExpress are - "<<seat1<<endl;
                        break;
                        case 2:
                        cout<<"No of seats Avilable in NizamuddinExpress are - "<<seat2<<endl;
                        break;
                        case 3:
                        cout<<"No of seats Avilable in ShatabdiExpress are - "<<seat3<<endl;
                        break;
                        case 4:
                        cout<<"No of seats Avilable in DurontoExpress are - "<<seat4<<endl;
                        break;
                        case 5:
                        cout<<"No of seats Avilable in VandeBharatExpress are - "<<seat5<<endl;
                        break;
                        default:
                        cout<<"Invalid choice "<<endl;
                        break;
                        
                    }
                    
                    break;
                    
                    case 2:
                    cout<<"To deliver goods or materials in any part of india and fare will be calculatd accoring to your source and destination"<<endl;
                    break;
                    
                    default:
                    cout<<"Invalid choice "<<endl;
                    break;
                    
                }
                
                
            break;
            
            case 2:
                
                cout<<"Which train you want to book"<<endl;
                cout<<"1-Passenger Trian"<<endl;
                cout<<"2- Cargo train to deleiver goods "<<endl;
                cin>>n1;
                switch(n1)
                {
                    case 1:
                        cout<<"Which Passenger Train You Want to book"<<endl;
                        cout<<" 1- RajdhaniExpress"<<endl;
                        cout<<" 2- NizamuddinExpress"<<endl;
                        cout<<" 3- ShatabdiExpress"<<endl;
                        cout<<" 4- DurontoExpress"<<endl;
                        cout<<" 5- VandeBharatExpress"<<endl;
                        cin>>n2;
                        switch(n2)
                        {
                            case 1:
                            cout<<"Enter what type of coach u want "<<endl;
                            cout<<"1- First Class"<<endl;
                            cout<<"2- Second Class"<<endl;
                            cout<<"3- Third Class"<<endl;
                            cout<<"4- General Class"<<endl;
                            cin>>p;
                            cout<<"Enter source station "<<endl;
                            cin>>src;
                            cout<<"Enter destination station "<<endl;
                            cin>>des;
                            
                            RE(p,src,des);
                            seat1--;
                            
                            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                            cout<<"  ~~~~~~~Your ticket has been booked~~~~~~~  "<<endl;
                            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                            
                            break;
                            
                            
                            case 2:
                            
                            cout<<"Enter what type of coach u want "<<endl;
                            cout<<"1- First Class"<<endl;
                            cout<<"2- Second Class"<<endl;
                            cout<<"3- Third Class"<<endl;
                            cout<<"4- General Class"<<endl;
                            cin>>p;
                            cout<<"Enter source station "<<endl;
                            cin>>src;
                            cout<<"Enter destination station "<<endl;
                            cin>>des;
                            NE(p,src,des);
                            seat2--;
                            
                            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                            cout<<"  ~~~~~~~Your ticket has been booked~~~~~~~  "<<endl;
                            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                            
                            
                            break;
                            
                            
                            case 3:
                            
                            
                            cout<<"Enter what type of coach u want "<<endl;
                            cout<<"1- First Class"<<endl;
                            cout<<"2- Second Class"<<endl;
                            cout<<"3- Third Class"<<endl;
                            cout<<"4- General Class"<<endl;
                            cin>>p;
                            cout<<"Enter source station "<<endl;
                            cin>>src;
                            cout<<"Enter destination station "<<endl;
                            cin>>des;
                            SE(p,src,des);
                            seat3--;
                            
                            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                            cout<<"  ~~~~~~~Your ticket has been booked~~~~~~~  "<<endl;
                            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                            
                            break;
                            
                            
                            case 4:
                            
                            cout<<"Enter what type of coach u want "<<endl;
                            cout<<"1- First Class"<<endl;
                            cout<<"2- Second Class"<<endl;
                            cout<<"3- Third Class"<<endl;
                            cout<<"4- General Class"<<endl;
                            cin>>p;
                            cout<<"Enter source station "<<endl;
                            cin>>src;
                            cout<<"Enter destination station "<<endl;
                            cin>>des;
                            DE(p,src,des);
                            seat4--;
                            
                            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                            cout<<"  ~~~~~~~Your ticket has been booked~~~~~~~  "<<endl;
                            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                            
                            
                            break;
                            
                            
                            case 5:
                                
                            cout<<"Enter what type of coach u want "<<endl;
                            cout<<"1- First Class"<<endl;
                            cout<<"2- Second Class"<<endl;
                            cout<<"3- Third Class"<<endl;
                            cout<<"4- General Class"<<endl;
                            cin>>p;
                            cout<<"Enter source station "<<endl;
                            cin>>src;
                            cout<<"Enter destination station "<<endl;
                            cin>>des;
                            VBE(p,src,des);
                            seat5--;
                            
                            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                            cout<<"  ~~~~~~~Your ticket has been booked~~~~~~~  "<<endl;
                            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                            
                            
                            break;
                            
                            
                            default:
                            cout<<"Invalid choice "<<endl;
                            break;
                            
                        }
                        
                    break;
                    
                    
                    case 2:
                    
                        cout<<"Enter source and destination where u have to deliver packages"<<endl;
                        cin>>src>>des;
                        
                        CT(src,des);
                         
                         
                          cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                          cout<<"  ~~~~~~~Your ticket has been booked and package will be delivered soon ~~~~~~~  "<<endl;
                          cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                         
                    break;
                    
                    default:
                    cout<<"Invalid choice "<<endl;
                    break;
                    
                }
            
            break;
            
            case 3:
            
                cout<<"Which train do you want to cancel"<<endl;
                cout<<"1-Passenger Trian"<<endl;
                cout<<"2- Cargo train to deleiver goods "<<endl;
                cin>>n1;
                switch(n1)
                {
                    case 1:
                        cout<<"Which Passenger Train Ticket You Want to cancel which u have booked"<<endl;
                        cout<<" 1- RajdhaniExpress"<<endl;
                        cout<<" 2- NizamuddinExpress"<<endl;
                        cout<<" 3- ShatabdiExpress"<<endl;
                        cout<<" 4- DurontoExpress"<<endl;
                        cout<<" 5- VandeBharatExpress"<<endl;
                        cin>>n2;
                        switch(n2)
                        {
                            case 1:
                            cout<<"Enter name"<<endl;
                            cin>>name;
                            if(seat1==45)
                            {
                                 cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                                cout<<"  ~~~~~~~ Information not found ~~~~~~~  "<<endl;
                                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                            }
                            else
                            {
                                seat1++;
                            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                            cout<<"  ~~~~~~~Your ticket has been cancelled~~~~~~~  "<<endl;
                            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                            }
                            
                            
                            break;
                            
                            case 2:
                            cout<<"Enter name"<<endl;
                            cin>>name;
                            if(seat2==40)
                            {
                                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                                cout<<"  ~~~~~~~ Information not found ~~~~~~~  "<<endl;
                                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                            }
                            else
                            {
                                  seat2++;
                                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                                cout<<"  ~~~~~~~Your ticket has been cancelled~~~~~~~  "<<endl;
                                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";      
                            }
                          
                            break;
                            
                            case 3:
                            
                            cout<<"Enter name"<<endl;
                            cin>>name;
                            if(seat3==50)
                            {
                                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                                cout<<"  ~~~~~~~ Information not found ~~~~~~~  "<<endl;
                                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                            }
                            else
                            {
                                seat3++;
                            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                            cout<<"  ~~~~~~~Your ticket has been cancelled~~~~~~~  "<<endl;
                            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                            }
                            
                            break;
                            
                            case 4:
                            
                            cout<<"Enter name"<<endl;
                            cin>>name;
                            if(seat4==60)
                            {
                                 cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                                cout<<"  ~~~~~~~ Information not found ~~~~~~~  "<<endl;
                                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                            }
                            else
                            {
                                seat4++;
                            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                            cout<<"  ~~~~~~~Your ticket has been cancelled~~~~~~~  "<<endl;
                            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                            }
                            
                            break;
                        
                            case 5:
                            
                            cout<<"Enter name"<<endl;
                            cin>>name;
                            if(seat5==10)
                            {
                                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                                cout<<"  ~~~~~~~ Information not found ~~~~~~~  "<<endl;
                                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                            }
                            else
                            {
                                seat5++;
                                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                                cout<<"  ~~~~~~~Your ticket has been cancelled~~~~~~~  "<<endl;
                                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                            }
                            
                            break;
                            
                            default:
                            cout<<"Invalid choice "<<endl;
                            break;
                            
                        }
                        
                    break;
                    
                    case 2:
                    
                    cout<<"Enter name"<<endl;
                    cin>>name;
                    cout<<"Enter phone number"<<endl;
                    cin>>phno;
                    
                    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                    cout<<"  ~~~~~~~Your ticket for package transportation has been cancelled~~~~~~~  "<<endl;
                    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                    break;
                    
                    
                    default:
                    cout<<"Invalid choice "<<endl;
                    break;
                    
                }
            
            break;
            
            case 4:
            exit(0);
            break;
            
            default:
            cout<<"Invalid choice "<<endl;
            break;
            
        }
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout<<".......WELCOME TO RAILWAY RESERVATION SYSTEM..........\n";
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout<<"Enter your choice"<<endl;
        cout<<"1 - Info about Trains "<<endl;
        cout<<"2 - Book a Ticket "<<endl;
        cout<<"3 - Cancel a booked ticket "<<endl;
        cout<<"4 - Exit "<<endl;
        cin>>n;
    }
    

    return 0;
}
