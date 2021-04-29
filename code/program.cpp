#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main ()
{
    //set to the csv file location and reading input from csv file
    ifstream csv_file("/Users/Shamim/Desktop/CSE425_Assignment/data.csv");

    if(!csv_file.is_open())
        std::cout << "File Not Open" << '\n';

    //variable
    string serial_no;
    string time_ref;
    string account;
    string code;
    string country_code;
    string product_type;
    string value;
    string status;
    // Empty vector holding all data from csv file
    vector<string> row;
    string row_data;

    //input variable declare here
    string time_input;
    string account_input;
    string code_input;
    string country_code_input;
    string product_input;
    string status_input;
    string choice;

    cout<<"1.Search by time references\n";
    cout<<"2.Search by account\n";
    cout<<"3.Search by code\n";
    cout<<"4.Search by country code\n";
    cout<<"5.Search Product_type\n";
    cout<<"6.Search by status\n";
    cout<<"\n7.Sort the data from csv file\n";

    cout<<"\nEnter the chosen your number: ";
    cin>> choice;

 //Searching time references data from csv file
    if (choice == "1")
    {
        cout<<"Enter the time reference: ";
        cin>> time_input;

        while(csv_file.good())
        {
            getline(csv_file,serial_no,',');
            getline(csv_file,time_ref,',');
            getline(csv_file,account,',');
            getline(csv_file,code,',');
            getline(csv_file,country_code,',');
            getline(csv_file,product_type,',');
            getline(csv_file,value,',');
            getline(csv_file,status,'\n');


            if (time_input == time_ref)
            {
                std::cout<<serial_no<< " " <<time_ref<<" "<<account<<" " <<code<<" "<<country_code<<" "<<product_type<< " " << value<<" "<<status<< '\n';
            }
        }

        csv_file.close();
    }

 //Searching account data from csv file
    if (choice == "2")
    {

        cout<<"Enter the account: ";
        cin>> account_input;

        while(csv_file.good())
        {
            getline(csv_file,serial_no,',');
            getline(csv_file,time_ref,',');
            getline(csv_file,account,',');
            getline(csv_file,code,',');
            getline(csv_file,country_code,',');
            getline(csv_file,product_type,',');
            getline(csv_file,value,',');
            getline(csv_file,status,'\n');


            if (account_input == account)
            {
                std::cout<<serial_no<< " " <<time_ref<<" "<<account<<" " <<code<<" "<<country_code<<" "<<product_type<< " " << value<<" "<<status<< '\n';
            }
        }

        csv_file.close();
    }

 //Searching code data from csv file
    if (choice == "3")
    {
        cout<<"Enter the code: ";
        cin>> code_input;

        while(csv_file.good())
        {
            getline(csv_file,serial_no,',');
            getline(csv_file,time_ref,',');
            getline(csv_file,account,',');
            getline(csv_file,code,',');
            getline(csv_file,country_code,',');
            getline(csv_file,product_type,',');
            getline(csv_file,value,',');
            getline(csv_file,status,'\n');


            if (code_input == code)
            {
                std::cout<<serial_no<< " " <<time_ref<<" "<<account<<" " <<code<<" "<<country_code<<" "<<product_type<< " " << value<<" "<<status<< '\n';
            }
        }

        csv_file.close();
    }

 //Searching country code data from csv file
    if (choice == "4")
    {
        cout<<"Enter the country code: ";
        cin>> country_code_input;

        while(csv_file.good())
        {
            getline(csv_file,serial_no,',');
            getline(csv_file,time_ref,',');
            getline(csv_file,account,',');
            getline(csv_file,code,',');
            getline(csv_file,country_code,',');
            getline(csv_file,product_type,',');
            getline(csv_file,value,',');
            getline(csv_file,status,'\n');


            if (country_code_input == country_code)
            {
                std::cout<<serial_no<< " " <<time_ref<<" "<<account<<" " <<code<<" "<<country_code<<" "<<product_type<< " " << value<<" "<<status<< '\n';
            }
        }

        csv_file.close();
    }

 //Searching product type data from csv file
    if (choice == "5")
    {
        cout<<"Enter the product type: ";
        cin>> product_input;

        while(csv_file.good())
        {
            getline(csv_file,serial_no,',');
            getline(csv_file,time_ref,',');
            getline(csv_file,account,',');
            getline(csv_file,code,',');
            getline(csv_file,country_code,',');
            getline(csv_file,product_type,',');
            getline(csv_file,value,',');
            getline(csv_file,status,'\n');


            if (product_input == product_type)
            {
                std::cout<<serial_no<< " " <<time_ref<<" "<<account<<" " <<code<<" "<<country_code<<" "<<product_type<< " " << value<<" "<<status<< '\n';
            }
        }

        csv_file.close();
    }

    //Searching status data from csv file
    if (choice == "6")
    {
        cout<<"Enter the Status: ";
        cin>> status_input;

        while(csv_file.good())
        {
            getline(csv_file,serial_no,',');
            getline(csv_file,time_ref,',');
            getline(csv_file,account,',');
            getline(csv_file,code,',');
            getline(csv_file,country_code,',');
            getline(csv_file,product_type,',');
            getline(csv_file,value,',');
            getline(csv_file,status,'\n');


            if (status_input == status)
            {
                std::cout<<serial_no<< " " <<time_ref<<" "<<account<<" " <<code<<" "<<country_code<<" "<<product_type<< " " << value<<" "<<status<< '\n';
            }
        }

        csv_file.close();
    }
    //sort the data from csv file
    if(choice == "7")
    {
        while(getline(csv_file, row_data))
        {
            row.push_back(row_data);

        }

        sort(row.begin(), row.end());

        // Loop to print csv file
        for (size_t i = 0; i < row.size(); i++)
            cout << row[i] << '\n';
    }

}
