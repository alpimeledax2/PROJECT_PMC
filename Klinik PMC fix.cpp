#include <iostream>
#include<iostream>
#include<fstream>
#include<iomanip>
#include<windows.h>
using namespace std;

void menu();//main menu function prototype

class ManageMenu
{
protected:
    string adMin; //hide admin name

public:

    //virtual void menu(){}

    ManageMenu()
    {
        system("color 0A"); //change terminal color
        cout << "\n\n\n\n\n\n\n\n\n\t  Enter Your Name to Continue as an Admin: ";
        cin >> adMin;
        system("CLS");
        menu(); //call to main function to load after executing the constructr
    }

    ~ManageMenu(){} //de
};

class Customer
{
public:
    string name, gender, address;
    int age, menuBack;
    string mobileNo;
    static int cusID;
    char all[999];

    void getDetails()
    {
        ofstream out("old-customers.txt", ios::app); //open file using append mode to write customer details
        {
            cout << "\nEnter Customer ID: ";
            cin >> cusID;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Age: ";
            cin >> age;
            cout << "Enter Mobile Number: ";
            cin >> mobileNo;
            cout << "Address: ";
            cin >> address;
            cout << "Gender: ";
            cin >> gender;
        }
        out << "\nCustomer ID: " << cusID << "\nName: " << name << "\nAge: " << age << "\nMobile Number: " << mobileNo << "\nAddress: " << address << "\nGender: " << gender << endl;
        out.close();
        cout << "\nSaved \nNOTE: We save your details record for future purposes.\n" << endl;
    }
    void showDetails() //function to show old customer records
    {
        ifstream in("old-customers.txt");
        {
            if(!in)
            {
                cout << "Data Tidak Ada!" << endl;
            }
            while(!(in.eof()))
            {
                in.getline(all, 999);
                cout << all << endl;
            }
            in.close();
        }
    }
};

int Customer::cusID;



class Booking
{
public:
    int choiceMage;
    int mageChoice1;
    int gotoMenu;
    static string appDate;
    char ans;
    static int mageCost;

    void depart()
    {    HANDLE hstdout = GetStdHandle(STD_OUTPUT_HANDLE); //membuat objek hstdout
        string departNo[] = {"Ahli Nujum/Necromency", "Dukun Umum/General Witch", "Ruqyah/Exorcism", "Dukun Santet/Witchcraft Specialist", "Tarot"};
        for(int a = 0; a < 5; a++)
        {
            cout << (a+1) <<". Department " << departNo[a] << endl;
        }

        
        cout<<"Press any key to back or\n Enter number of depart you want to book or see details : ";
      cin >> choiceMage;
      system("CLS");
        if(choiceMage == 1){
        	SetConsoleTextAttribute(hstdout,9); //program untuk merubah warna text

            cout << "-------WELCOME TO Necromancy Department-------\n" << endl;
            SetConsoleTextAttribute(hstdout,15); //program untuk merubah warna text
            cout << "we serve fortune telling, communicate with spirits, and open the inner eye." << endl;
            SetConsoleTextAttribute(hstdout,10); //program untuk merubah warna text
            cout << "Please select ur desired mage :\n" << endl;

            cout << "101. Ki Prono Sewu" << endl;
            cout << "\t has more than 15 years of experience, and often handles big official cases.\nIDR: Rp.4.000.000" << endl;
            cout << "102. Mbah Marlan " << endl;
            cout << "\t he is a former spiritual adviser to the 13th President of the Philippines.\nIDR: Rp.10.000.000" << endl;
            


            cout << "\nPress N to back to department or Enter Y to make appointment: ";
            cin >> ans;
            system("CLS");
            if (ans == 'N'){
            	depart();
			}
			else if (ans== 'Y'){
			
			cout<<"\n Enter the appointment date: ";
			cin>> appDate;
			}
            cout<<"Enter Mage's number: ";
            cin >> mageChoice1;

            if (mageChoice1 == 101){
                mageCost = 4000000;
                cout << "\nYou have successfully booked Ki Prono Sewu" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (mageChoice1 == 102){
                mageCost = 10000000;
                cout << "\nYou have successfully booked Mbah Marlan" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            
            else{
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                depart();

            }

            cout << "\nPress 1 to Redirect Main Menu: ";
            cin >> gotoMenu;
            system("CLS");
            if(gotoMenu == 1){
                menu();
            }
            else{
                menu();
            }
        }
        else if(choiceMage == 2){
        	SetConsoleTextAttribute(hstdout,11); //program untuk merubah warna text
            cout << "-------WELCOME TO GENERAL WITCH-------\n" << endl;
            SetConsoleTextAttribute(hstdout,15); //program untuk merubah warna text
            cout << "We provide consultation on all problems related to the unseen and magic" << endl;
            SetConsoleTextAttribute(hstdout,10); //program untuk merubah warna text
            cout << "Please select ut desired Mage:\n" << endl;

            cout << "103. Raden Sugeng Sasmita" << endl;
            cout << "\t He is a direct descendant of the patih of the Mataram kingdom, \n and has an experience of approximately 6 years. IDR: Rp. 2.000.000 " << endl;
            cout << "104. Nyai Rereh, S.Psi. " << endl;
            cout << "\t She is a female mage with a bachelor's degree in psychology and,\n 9 years of experience. IDR: Rp. 3.000.000 " << endl;
         

            cout << "\nPress N to back to department or Enter Y to make appointment: ";
            cin >> ans;
            system("CLS");
            if (ans == 'N'){
            	depart();
			}
			else if (ans== 'Y'){
			
			cout<<"\n Enter the appointment date: ";
			cin>> appDate;
			}
            cout<<"Enter Mage's number: ";
            cin >> mageChoice1;

            if (mageChoice1 == 103){
                mageCost = 2000000;
                cout << "You have successfully booked R. Sugeng Sasmita" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (mageChoice1 == 104){
                mageCost = 3000000;
                cout << "You have successfully booked Nyai Rereh" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
           
            else{
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                depart();
            }

            cout << "\nPress 1 to Redirect Main Menu: ";
            cin >> gotoMenu;
            system("CLS");
            if(gotoMenu == 1){
                menu();
            }
            else{
                menu();
            }
        }
        else if(choiceMage == 3){
        	SetConsoleTextAttribute(hstdout,14); //program untuk merubah warna text
           cout << "-------WELCOME TO RUQYAH/EXORCISM-------\n" << endl;
            SetConsoleTextAttribute(hstdout,15); //program untuk merubah warna text
			cout << "White magic special department at PMC" << endl;
			SetConsoleTextAttribute(hstdout,10); //program untuk merubah warna text
            cout << "Please select ut desired Mage:\n" << endl;

            cout << "105. Ust. Arif Rahman" << endl;
            cout << "\t He has an experience of approximately 10 years. IDR: Rp. 900.000 " << endl;
            cout << "106. Pdt. Alexander Wiratmoko, S.Th. " << endl;
            cout << "\t He has an experience for 9 years of experience. IDR: Rp. 900.000 " << endl;
         

             cout << "\nPress N to back to department or Enter Y to make appointment: ";
            cin >> ans;
            system("CLS");
            if (ans == 'N'){
            	depart();
			}
			else if (ans== 'Y'){
			
			cout<<"\n Enter the appointment date: ";
			cin>> appDate;
			}
            cout<<"Enter Mage's number: ";
            cin >> mageChoice1;

            if (mageChoice1 == 105){
                mageCost = 900000;
                cout << "You have successfully booked Ust. Arif Rahman" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (mageChoice1 == 106){
                mageCost = 900000;
                cout << "You have successfully booked Pdt. Alex" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            
            else{
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                depart();
            }
           
            cout << "\nPress 1 to Redirect Main Menu: ";
            cin >> gotoMenu;
            system("CLS");
            if(gotoMenu == 1){
                menu();
            }
            else{
                menu();
            }
        
    

       }
	else if  (choiceMage == 4){
		SetConsoleTextAttribute(hstdout,12); //program untuk merubah warna text
            cout << "-------WELCOME TO SANTET/WITCHCRAFT-------\n" << endl;
            SetConsoleTextAttribute(hstdout,15); //program untuk merubah warna text
			cout << "This department serves various kinds of witchcraft" << endl;
            SetConsoleTextAttribute(hstdout,10); //program untuk merubah warna text
			cout << "Please select ut desired Mage:\n" << endl;

            cout << "107. Ki Agung Mantep" << endl;
            cout << "\t He has an experience of approximately 20 years. IDR: Rp. 3.000.000 " << endl;
            cout << "108. Ki Subakti  " << endl;
            cout << "\t He has an experience for 5 years of experience. IDR: Rp. 1.000.000 " << endl;
         

            cout << "\nPress N to back to department or Enter Y to make appointment: ";
            cin >> ans;
            system("CLS");
            if (ans == 'N'){
            	depart();
			}
			else if (ans== 'Y'){
			
			cout<<"\n Enter the appointment date: ";
			cin>> appDate;
			}
            cout<<"Enter Mage's number: ";
            cin >> mageChoice1;

            if (mageChoice1 == 107){
                mageCost = 3000000;
                cout << "You have successfully booked Ki Agung Mantep" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (mageChoice1 == 108){
                mageCost = 1000000;
                cout << "You have successfully booked Ki Subakti" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            
            else{
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                depart();
            }
            cout << "\nPress 1 to Redirect Main Menu: ";
            cin >> gotoMenu;
            system("CLS");
            if(gotoMenu == 1){
                menu();
            }
            else{
                menu();
            }
    }
        else if (choiceMage == 5){
        	SetConsoleTextAttribute(hstdout,13); //program untuk merubah warna text
            cout << "-------WELCOME TO TAROT-------\n" << endl;
            SetConsoleTextAttribute(hstdout,15); //program untuk merubah warna text
			cout << "Welcome dear to the Tarot department, we provide tarot prediction services with accurate results" << endl;
            SetConsoleTextAttribute(hstdout,10); //program untuk merubah warna text
			cout << "Please select ut desired Mage:\n" << endl;

            cout << "109. Mami Neni" << endl;
            cout << "\t SHe has an experience of approximately 30 years. IDR: Rp. 5.000.000 " << endl;
            cout << "110. Mam Sisca" << endl;
            cout << "\t SHe has an experience for 7 years of experience. IDR: Rp. 2.500.000 " << endl;
         

           cout << "\nPress N to back to department or Enter Y to make appointment: ";
            cin >> ans;
            system("CLS");
            if (ans == 'N'){
            	depart();
			}
			else if (ans== 'Y'){
			
			cout<<"\n Enter the appointment date: ";
			cin>> appDate;
			}
            cout<<"Enter Mage's number: ";
            cin >> mageChoice1;

            if (mageChoice1 == 109){
                mageCost = 5000000;
                cout << "You have successfully booked Mami Neni" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (mageChoice1 == 110){
                mageCost = 2500000;
                cout << "You have successfully booked Mami Sisca" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            
            else{
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                depart();
            }

            cout << "\nPress 1 to Redirect Main Menu: ";
            cin >> gotoMenu;
            system("CLS");
            if(gotoMenu == 1){
                menu();
            }
            else{
                menu();
            }
    }
    else{
            cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
            Sleep(1100);
            system("CLS");
            menu();
        }
}
};
int Booking::mageCost;
string Booking::appDate;

class Chargers : public Booking, Customer //Multiple Inheritance of some other classes to Chargers
{

public:

    void printBill()
    {
        ofstream outf("struk.txt"); //receipt for bought items
        {
            outf << "-------------PAPA MIDNIGHT CLINIC------------" << endl;
            outf << "-------------------Receipt-------------------" << endl;
            outf << "_____________________________________________" << endl;

            outf << "Customer ID: " << Customer::cusID << endl << endl;
            outf << "Description\t\t Total" << endl;
            outf << "Mage cost:\t\t " << fixed << setprecision(2) << Booking::mageCost << endl;
            outf << "Appointment on:\t " << fixed << setprecision(2) << Booking::appDate << endl;

            outf << "_____________________________________________" << endl;
            outf << "Total Charge:\t\t " << fixed << setprecision(2) << Booking::mageCost << endl;
            outf << "_____________________________________________" << endl;
            outf << "-------------------THANK YOU-----------------" << endl;
        }
        outf.close();
        //cout << "Your receipt printed, please get it from the file saved path:D" << endl;
    }

    void showBill()
    {
        ifstream inf("struk.txt");
        {
            if(!inf)
            {
                cout << "File Error!" << endl;
            }
            while(!(inf.eof()))
            {
                inf.getline(all, 999);
                cout << all << endl;
            }
        }
        inf.close();
    }
};

void menu() //menu function contain main menu
{

    int mainChoice;
    int inChoice;
    int gotoMenu;
    
 HANDLE hstdout = GetStdHandle(STD_OUTPUT_HANDLE); //membuat objek hstdout
     SetConsoleTextAttribute(hstdout,12); //program untuk merubah warna text
    cout <<"______________                                 _______________ \n"<<endl;
	cout <<" _____________|_______________________________|_____________ \n" <<endl;
	cout <<"   ___________|      PAPA MIDNIGHT CLINIC     |_____________ \n"<<endl;
     SetConsoleTextAttribute(hstdout,14); //program untuk merubah warna text
    cout <<"    __________| Telp:0897872386969            |____________  \n"<<endl;
	cout <<"              | IG/FB: Papamidnightofficial   | \n"<<endl;
     SetConsoleTextAttribute(hstdout,11); //program untuk merubah warna text
    cout <<"              |_______________________________|\n" << endl;
  
    SetConsoleTextAttribute(hstdout,15); //program untuk merubah warna text
    cout << "-------------------------Main Menu--------------------------" << endl;

    cout << "\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
    cout << "\t|\t\t\t\t\t|" << endl;
    //cout << "\t|\tAgency System Management -> 0" << endl;
    cout << "\t|\tCustomer Management -> 1\t|" << endl;
    cout << "\t|\tBookings Management -> 2\t|" << endl;
    cout << "\t|\tCharges & Bill      -> 3\t|" << endl;
    cout << "\t|\tExit                -> 4\t|" << endl;
    cout << "\t|\t\t\t\t\t|" << endl;
    cout << "\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|" << endl;
     SetConsoleTextAttribute(hstdout,10); //program untuk merubah warna text
	cout << "\nEnter Choice: ";
    cin >> mainChoice;

    system("CLS");

    Customer a2; //creating objects
    Booking a3;
    Chargers a4;

    /*if(mainChoice == 0){
    }*/
    if(mainChoice == 1){
        cout << "------Customers------\n" << endl;
        cout << "1. Enter New Customer"<< endl;
        cout << "2. See Old Customers"<< endl;

        cout << "\nEnter choice: ";
        cin >> inChoice;

        system("CLS");
        if(inChoice == 1){
            a2.getDetails();
        }
        else if(inChoice == 2){
            a2.showDetails();
        }
        else{
            cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
            Sleep(1100);
            system("CLS");
            menu();
        }
        cout << "Press 1 to Redirect Main Menu: ";
        cin >> gotoMenu;
        system("CLS");
        if(gotoMenu == 1){
            menu();
        }
        else{
            menu();
        }
    }
    
    else if(mainChoice == 2){
        cout << "--> Book our Professional Mages <--\n" << endl;
        a3.depart();
    }
    else if(mainChoice == 3){
        cout << "-->Get your receipt<--\n" << endl;
        a4.printBill();
        cout << "Your receipt is already printed you can get it from file path\n" << endl;
        cout << "to display the your receipt in the screen, Enter 1: or Enter another key to back main menu: ";
        cin >> gotoMenu;
        if(gotoMenu == 1){
            system("CLS");
            a4.showBill();
            cout << "Press 1 to Redirect Main Menu: ";
            cin >> gotoMenu;
            system("CLS");
            if(gotoMenu == 1){
                menu();
            }
            else{
                menu();
            }
        }
        else{
            system("CLS");
            menu();
        }
    }
    else if(mainChoice == 4){
        cout << "\n\n\t--GOOD-BYE!--" << endl;
        Sleep(1100);
        system("CLS");
        ManageMenu();
    }
    else{
        cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
        Sleep(1100);
        system("CLS");
        menu();
    }
}

int main()
{
    ManageMenu startObj;
    return 0;
}


