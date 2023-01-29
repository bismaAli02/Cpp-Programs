#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int first,op,num_cust=1;

void header()
{
    cout<<"**************************************************************************************"<<endl;
    cout<<"*                                                                                    *"<<endl;
    cout<<"*              *****          ***       *****         ***       ***********          *"<<endl;
    cout<<"*              **  ***       *   *      **   **      *   *      **      **           *"<<endl;
    cout<<"*              **    **     **   **     ******      **   **          **              *"<<endl;
    cout<<"*              **  ***     *********    **  **     *********      **     **          *"<<endl;
    cout<<"*              *****      **       **   **    **  **       **   ***********          *"<<endl;
    cout<<"*                                                                                    *"<<endl;
    cout<<"**************************************************************************************"<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
}
int main_menu()
{
    cout<<"////////////////////////////////////< Main Menu >/////////////////////////////////////"<<endl;
    cout<<"Login as : "<<endl;
    cout<<"1) Admin"<<endl;
    cout<<"2) Seller"<<endl;
    cout<<"3) User"<<endl;
    cout<<endl;
    cout<<"Press 4 to Exit"<<endl; 
    cin>>first;
    return first;
}
int admin_menu()
{
    cout << "////////////////////////////////////< Admin Menu >/////////////////////////////////////"<<endl;
    cout << "Welcome Admin" << endl;
    cout << "Today is a busy day We have to do with a lot of work today " << endl;
    cout << " 1) Add seller" << endl;
    cout << " 2) View record" << endl;
    cout << " 3) View History" << endl;
    cout << " 4) Delete seller" << endl;
    cout << " 5) Exit" << endl;
    cout << "  " << endl;
    cout << "Enter your option......" << endl;
    cin >> op;
    return op;
}   
void show_seller_data(string name,int phonenum,string buisness,int password)
{
    if(phonenum != 0)
    {
        cout<<name<<"\t"<<phonenum<<"\t"<<"\t"<<buisness<<"\t"<<"\t"<<password<<endl;
    }
}
void clear_screen()
{
    cout<<"Enter any key to continue__"<<endl;
    getch();
    system("cls");
}
int seller_menu()
{
    cout<<"////////////////////////////////////< Seller Menu >/////////////////////////////////////"<<endl;
    cout << " Welcome Seller" << endl;
    cout << " Today we have to do  some tasks" << endl;
    cout << " 1) Add a product to your list  " << endl;
    cout << " 2) View items you sale  " << endl;
    cout << " 3) Sort by price  " << endl;
    cout << " 4) Delete an item  " << endl;
    cout << " 5) Update price of an item  " << endl;
    cout << " 6) Send Order" << endl;
    cout << " 7) Exit" << endl;
    cout << " " << endl;
    cout << "Enter your option......";
    cin >> op;
    return op;
}
void products(string product , int price)
{
    if(price > 0)
    {
        cout<<product<<"\t"<<"\t"<<price<<endl;
    }
}
void sorting4(int n1,int n2, int n3 , int n4,string product_1,string product_2,string product_3,string product_4)
{

    if (n1 > n2 && n1 > n3 && n1 > n4)
    {
        cout << product_1 << "\t"
             << "\t" << n1 << endl;
        if (n2 > n3 && n2 > n4)
        {
            cout << product_2 << "\t"
                 << "\t" << n2 << endl;
            if (n3 > n4)
            {
                cout << product_3 << "\t"
                     << "\t" << n3 << endl;
                cout << product_4 << "\t"
                     << "\t" << n4 << endl;
            }
            else
            {
                cout << product_4 << "\t"
                     << "\t" << n4 << endl;
                cout << product_3 << "\t"
                     << "\t" << n3 << endl;
            }
        }
        if (n3 > n2 && n3 > n4)
        {
            cout << product_3 << "\t"
                 << "\t" << n3 << endl;
            if (n2 > n4)
            {
                cout << product_2 << "\t"
                     << "\t" << n2 << endl;
                cout << product_4 << "\t"
                     << "\t" << n4 << endl;
            }
            else
            {
                cout << product_4 << "\t"
                     << "\t" << n4 << endl;
                cout << product_2 << "\t"
                     << "\t" << n2 << endl;
            }
        }
        if (n4 > n2 && n4 > n3)
        {
            cout << product_4 << "\t"
                 << "\t" << n4 << endl;
            if (n2 > n3)
            {
                cout << product_2 << "\t"
                     << "\t" << n2 << endl;
                cout << product_3 << "\t"
                     << "\t" << n3 << endl;
            }
            else
            {
                cout << product_3 << "\t"
                     << "\t" << n3 << endl;
                cout << product_2 << "\t"
                     << "\t" << n2 << endl;
            }
        }
    }

    if (n2 > n1 && n2 > n3 && n2 > n4)
    {
        cout << product_2 << "\t"
             << "\t" << n2 << endl;
        if (n1 > n3 && n1 > n4)
        {
            cout << product_1 << "\t"
                 << "\t" << n1 << endl;
            if (n3 > n4)
            {
                cout << product_3 << "\t"
                     << "\t" << n3 << endl;
                cout << product_4 << "\t"
                     << "\t" << n4 << endl;
            }
            else
            {
                cout << product_4 << "\t"
                     << "\t" << n4 << endl;
                cout << product_3 << "\t"
                     << "\t" << n3 << endl;
            }
        }
        if (n3 > n1 && n3 > n4)
        {
            cout << product_3 << "\t"
                 << "\t" << n3 << endl;
            if (n1 > n4)
            {
                cout << product_1 << "\t"
                     << "\t" << n1 << endl;
                cout << product_4 << "\t"
                     << "\t" << n4 << endl;
            }
            else
            {
                cout << product_4 << "\t"
                     << "\t" << n4 << endl;
                cout << product_1 << "\t"
                     << "\t" << n1 << endl;
            }
        }
        if (n4 > n1 && n4 > n3)
        {
            cout << product_4 << "\t"
                 << "\t" << n4 << endl;
            if (n1 > n3)
            {
                cout << product_1 << "\t"
                     << "\t" << n1 << endl;
                cout << product_3 << "\t"
                     << "\t" << n3 << endl;
            }
            else
            {
                cout << product_3 << "\t"
                     << "\t" << n3 << endl;
                cout << " " << endl;
                cout << " " << endl;
                cout << product_1 << "\t"
                     << "\t" << n1 << endl;
            }
        }
    }

    if (n3 > n1 && n3 > n2 && n3 > n4)
    {
        cout << product_3 << "\t"
             << "\t" << n3 << endl;

        if (n1 > n2 && n1 > n4)
        {
            cout << product_1 << "\t"
                 << "\t" << n1 << endl;
            if (n2 > n4)
            {
                cout << product_2 << "\t"
                     << "\t" << n2 << endl;
                cout << product_4 << "\t"
                     << "\t" << n4 << endl;
            }
            else
            {
                cout << product_4 << "\t"
                     << "\t" << n4 << endl;
                cout << product_2 << "\t"
                     << "\t" << n2 << endl;
            }
        }
        if (n2 > n1 && n2 > n4)
        {
            cout << product_2 << "\t"
                 << "\t" << n2 << endl;
            if (n1 > n4)
            {
                cout << product_1 << "\t"
                     << "\t" << n1 << endl;
                cout << product_4 << "\t"
                     << "\t" << n4 << endl;
                ;
            }
            else
            {
                cout << product_4 << "\t"
                     << "\t" << n4 << endl;
                cout << product_1 << "\t"
                     << "\t" << n1 << endl;
            }
        }
        if (n4 > n1 && n4 > n2)
        {
            cout << product_4 << "\t"
                 << "\t" << n4 << endl;
            if (n1 > n2)
            {
                cout << product_1 << "\t"
                     << "\t" << n1 << endl;
                cout << product_2 << "\t"
                     << "\t" << n2 << endl;
            }
            else
            {
                cout << product_2 << "\t"
                     << "\t" << n2 << endl;
                cout << product_1 << "\t"
                     << "\t" << n1 << endl;
            }
        }
    }

    if (n4 > n1 && n4 > n2 && n4 > n3)
    {
        cout << product_4 << "\t"
             << "\t" << n4 << endl;

        if (n1 > n2 && n1 > n3)
        {
            cout << product_1 << "\t"
                 << "\t" << n1 << endl;
            if (n2 > n3)
            {
                cout << product_2 << "\t"
                     << "\t" << n2 << endl;
                cout << product_3 << "\t"
                     << "\t" << n3 << endl;
            }
            else
            {
                cout << product_3 << "\t"
                     << "\t" << n3 << endl;
                cout << product_2 << "\t"
                     << "\t" << n2 << endl;
            }
        }
        if (n2 > n1 && n2 > n3)
        {
            cout << product_2 << "\t"
                 << "\t" << n2 << endl;
            if (n1 > n3)
            {
                cout << product_1 << "\t"
                     << "\t" << n1 << endl;
                cout << product_3 << "\t"
                     << "\t" << n3 << endl;
            }
            else
            {
                cout << product_3 << "\t"
                     << "\t" << n3 << endl;
                cout << product_1 << "\t"
                     << "\t" << n1 << endl;
            }
        }
        if (n3 > n1 && n3 > n2)
        {
            cout << product_3 << "\t"
                 << "\t" << n3 << endl;
            if (n1 > n2)
            {
                cout << product_1 << "\t"
                     << "\t" << n1 << endl;
                cout << product_2 << "\t"
                     << "\t" << n2 << endl;
            }
            else
            {
                cout << product_2 << "\t"
                     << "\t" << n2 << endl;
                cout << product_1 << "\t"
                     << "\t" << n1 << endl;
            }
        }
    }
}
void sorting3(int price_1,int price_2, int price_3,string product_1,string product_2,string product_3)
{
    if (price_1 > price_2 && price_1 > price_3)
    {
        cout << product_1 << "                   " << price_1 << endl;
        if (price_2 > price_3)
        {
            cout << product_2 << "                   " << price_2 << endl;
            cout << product_3 << "                   " << price_3 << endl;
        }
        else
        {
            cout << product_3 << "                   " << price_3 << endl;
            cout << product_2 << "                   " << price_2 << endl;
        }
    }
    if (price_2 > price_1 && price_2 > price_3)
    {
        cout << product_2 << "                   " << price_2 << endl;
        if (price_1 > price_3)
        {
            cout << product_1 << "                   " << price_1 << endl;
            cout << product_3 << "                   " << price_3 << endl;
        }
        else
        {
            cout << product_3 << "                   " << price_3 << endl;
            cout << product_1 << "                   " << price_1 << endl;
        }
    }
    if (price_3 > price_1 && price_3 > price_1)
    {
        cout << product_3 << "                   " << price_3 << endl;
        if (price_1 > price_2)
        {
            cout << product_1 << "                   " << price_1 << endl;
            cout << product_2 << "                   " << price_2 << endl;
        }
        else
        {
            cout << product_2 << "                   " << price_2 << endl;
            cout << product_1 << "                   " << price_1 << endl;
        }
    }
}
void sorting2(int price_1,int price_2,string product_1,string product_2)
{
    if (price_1 > price_2)
    {
        cout << product_1 << "                   " << price_1 << endl;
        cout << product_2 << "                   " << price_2 << endl;
    }
    else
    {
        cout << product_2 << "                   " << price_2 << endl;
        cout << product_1 << "                   " << price_1 << endl;
    }
}
void sorting1(int price_1,string product_1)
{
    cout << product_1 << "                   " << price_1 << endl;
}
int customer_menu()
{
    cout<<"////////////////////////////////////< Customer Menu >/////////////////////////////////////"<<endl;
    cout << "1) View Items" << endl;
    cout << "2) View cart" << endl;
    cout << "3) Payment" << endl;
    cout << "4) Exit" << endl;
    cout << endl;
    cout << "Enter your option...." << endl;
    cin >> op;
    return op;
}
void customer_product(string product,int price )
{   if(price > 0)
    {
        cout << num_cust <<")" << product << "\t\t" << price << endl;
        num_cust=num_cust+1;
    }
}

main()
{
    string delete_seller;
    string seller1_name, seller1_buisness;
    string seller2_name, seller2_buisness;
    int seller1_phone_num = 0, seller1_password;
    int seller2_phone_num = 0, seller2_password;
    string product_1,product_2,product_3,product_4;
    int price_1=0,price_2=0,price_3=0,price_4=0;
    int main_menu_option ;

    while (main_menu_option != 4)
    {
        header();
        main_menu_option = main_menu();
        system("cls");

        if (main_menu_option == 1)
        {
            int pass;
            cout << "Enter password : ";
            cin >> pass;
            system("cls");
            if (pass == 1234)
            {
                int admin_count = 1;
                int admin_option = 1;
                string delete_seller;
                string seller1_name, seller1_buisness;
                string seller2_name, seller2_buisness;
                int seller1_phone_num = 0, seller1_password;
                int seller2_phone_num = 0, seller2_password;

                while (admin_option != 5)
                {
                    header();
                    admin_option = admin_menu();
                    system("cls");
                    if (admin_option == 1)
                    {
                        if (admin_count == 1)
                        {
                            cout<<"Admin Menu > Add Seller"<<endl;
                            cout << "Enter seller's information ....." << endl;
                            cout << " " << endl;
                            cout << "Enters seller name : " << endl;
                            cin >> seller1_name;
                            cout << "Enters seller phone number : " << endl;
                            cin >> seller1_phone_num;
                            cout << "Enters seller buisness : " << endl;
                            cin >> seller1_buisness;
                            cout << "Create password : " << endl;
                            cin >> seller1_password;
                            cout << " " << endl;
                            cout << "Sellers id is created " << endl;
                        }
                        if (admin_count == 2)
                        {
                            cout<<"Admin Menu > Add Seller"<<endl;
                            cout << "Enter seller's information ....." << endl;
                            cout << " " << endl;
                            cout << "Enters seller name : " << endl;
                            cin >> seller2_name;
                            cout << "Enters seller phone number : " << endl;
                            cin >> seller2_phone_num;
                            cout << "Enters seller buisness : " << endl;
                            cin >> seller2_buisness;
                            cout << "Create password : " << endl;
                            cin >> seller2_password;
                            cout << " " << endl;
                            cout << "Sellers id is created " << endl;
                        }
                        if (admin_count == 3)
                        {
                            cout << "Number of Seller reached its limit." << endl;
                        }
                        admin_count = admin_count + 1;
                        clear_screen();
                    }
                    else if (admin_option == 2)
                    {
                        cout<<"Admin Menu > View Seller"<<endl;
                        if (seller1_phone_num != 0)
                        {
                            cout << "Name\tPhone Number\tBuisness\tPassword" << endl;
                            show_seller_data(seller1_name, seller1_phone_num, seller1_buisness, seller1_password);
                            show_seller_data(seller2_name, seller2_phone_num, seller2_buisness, seller2_password);
                        }
                        else
                        {
                            cout << "You have not entered any data yet...." << endl;
                        }
                        clear_screen();
                    }
                    else if (admin_option == 3)
                    {
                        cout<<"Admin Menu > History"<<endl;
                        cout << "Ali just sold 2 bags to user179 " << endl;
                        cout << "Ahmad updated his stock " << endl;
                        cout << "Ali updated his account" << endl;
                        if (seller1_phone_num != 0)
                        {
                            cout << "You just added " << seller1_name << " to " << seller1_buisness << " Buisness list " << endl;
                        }
                        if (seller2_phone_num != 0)
                        {
                            cout << "You just added " << seller2_name << " to " << seller2_buisness << " Buisness list " << endl;
                        }
                        clear_screen();
                    }
                    else if (admin_option == 4)
                    {
                        cout<<"Admin Menu > Delete Seller"<<endl;
                        cout << "Enter Password : " << endl;
                        cin >> pass;
                        system("cls");
                        if (pass == 1234)
                        {
                            cout << "Enter the name of Seller you want to delete : " << endl;
                            cin >> delete_seller;
                            if (delete_seller == seller1_name)
                            {
                                seller1_phone_num = 0;
                                cout << "You have successfully deleted " << seller1_name << "  from list" << endl;
                            }
                            if (delete_seller == seller2_name)
                            {
                                seller2_phone_num = 0;
                                cout << "You have successfully deleted " << seller2_name << "  from list" << endl;
                            }
                        }
                        else
                        {
                            cout << "You have Entered the wrong Password" << endl;
                            system("cls");
                        }
                        clear_screen();
                    }
                    else
                    {
                        cout << "Thanks for using our Program.." << endl;
                        cout << "We are happy to serve you" << endl;
                        admin_option = 5;
                        clear_screen();
                    }
                }
            }
            else
            {
                cout << "You have Entered the wrong Password" << endl;
                system("cls");
            }
        }
        if (main_menu_option == 2)
        {
            int pass;
            int seller_count = 1;
            int seller_option = 0;
            string delete_product, updated_product;
            header();
            cout << "Enter your Password : ";
            cin >> pass;
            if (pass == seller1_password)
            {
                cout << "Hello " << seller1_name << endl;
                cout << "Hope you are fine." << endl;
                cout << "Lets get back to work" << endl;
            }
            else if (pass == seller2_password)
            {
                cout << "Hello " << seller2_name << endl;
                cout << "Hope you are fine." << endl;
                cout << "Lets get back to work" << endl;
            }
            system("cls");

            while (seller_option != 7)
            {
                header();
                seller_option = seller_menu();
                if (seller_option == 1)
                {
                    cout<<"Sellers Menu > Add product >"<<endl;
                    if (seller_count == 1)
                    {
                        cout << "Enter the name of product : ";
                        cin >> product_1;
                        cout << "Enter the price of product : ";
                        cin >> price_1;
                        cout << "Product entered Successfuly" << endl;
                        cout << " " << endl;
                        cout << " " << endl;
                    }
                    else if (seller_count == 2)
                    {
                        cout << "Enter the name of product : ";
                        cin >> product_2;
                        cout << "Enter the price of product : ";
                        cin >> price_2;
                        cout << "Product entered Successfuly" << endl;
                        cout << " " << endl;
                        cout << " " << endl;
                    }
                    else if (seller_count == 3)
                    {
                        cout << "Enter the name of product : ";
                        cin >> product_3;
                        cout << "Enter the price of product : ";
                        cin >> price_3;
                        cout << "Product entered Successfuly" << endl;
                        cout << " " << endl;
                        cout << " " << endl;
                    }
                    else if (seller_count == 4)
                    {
                        cout << "Enter the name of product : ";
                        cin >> product_4;
                        cout << "Enter the price of product : ";
                        cin >> price_4;
                        cout << "Product entered Successfuly" << endl;
                        cout << " " << endl;
                        cout << " " << endl;
                    }
                    else if (seller_count != 4)
                    {
                        cout << "Stock is full" << endl;
                    }
                    clear_screen();
                    seller_count = seller_count + 1;
                }
                if (seller_option == 2)
                {
                    cout<<"Sellers Menu > View Products >"<<endl;
                    cout << "Product\t\tPrice" << endl;
                    products(product_1, price_1);
                    products(product_2, price_2);
                    products(product_3, price_3);
                    products(product_4, price_4);
                    clear_screen();
                }
                if (seller_option == 3)
                {
                    if (price_1 != 0)
                    {
                        cout<<"Sellers Menu > Sorting >"<<endl;
                        cout << "Product\t\tPrice" << endl;
                        if (price_4 != 0)
                        {
                            sorting4(price_1, price_2, price_3, price_4, product_1, product_2, product_3, product_4);
                        }
                        else if (price_3 != 0)
                        {
                            sorting3(price_1, price_2, price_3, product_1, product_2, product_3);
                        }
                        else if (price_2 != 0)
                        {
                            sorting2(price_1, price_2, product_1, product_2);
                        }
                        else if (price_1 != 0)
                        {
                            sorting1(price_1, product_1);
                        }
                        clear_screen();
                    }
                    else
                    {
                        cout << "You have not entered any data" << endl;
                    }
                }
                if (seller_option == 4)
                {
                    cout<<"Sellers Menu > Delete Product >"<<endl;
                    cout << "Enter the name the product of want to delete...:";
                    cin >> delete_product;
                    if (delete_product == product_1)
                    {
                        cout << product_1 << " has been deleted" << endl;
                        product_1 = " ";
                        price_1 = 0;
                    }
                    else if (delete_product == product_2)
                    {
                        cout << product_2 << " has been deleted" << endl;
                        product_2 = " ";
                        price_2 = 0;
                    }
                    else if (delete_product == product_3)
                    {
                        cout << product_3 << " has been deleted" << endl;
                        product_3 = " ";
                        price_3 = 0;
                    }
                    else if (delete_product == product_4)
                    {
                        cout << product_4 << " has been deleted" << endl;
                        product_4 = " ";
                        price_4 = 0;
                    }
                    else
                    {
                        cout << "There is no such Product." << endl;
                    }
                    clear_screen();
                }
                if (seller_option == 5)
                {
                    cout<<"Sellers Menu > Update Product >"<<endl;
                    int updated_price;
                    cout << "Enter the name of product whose price you want to update :";
                    cin >> updated_product;
                    if (price_1 == 0)
                    {
                        cout << "There are no products available" << endl;
                    }
                    else
                    {
                        if (updated_product == product_1)
                        {
                            cout << "Enter the updated price : ";
                            cin >> updated_price;
                            price_1 = updated_price;
                        }
                        else if (updated_product == product_2)
                        {
                            cout << "Enter the updated price : ";
                            cin >> updated_price;
                            price_2 = updated_price;
                        }
                        else if (updated_product == product_3)
                        {
                            cout << "Enter the updated price : ";
                            cin >> updated_price;
                            price_3 = updated_price;
                        }
                        else if (updated_product == product_4)
                        {
                            cout << "Enter the updated price : ";
                            cin >> updated_price;
                            price_4 = updated_price;
                        }
                        else if (updated_product == product_1 || updated_product == product_2 || updated_product == product_3 || updated_product == product_4)
                        {
                            cout << updated_product << " has been updated" << endl;
                            cout << "Its current price is " << updated_price << endl;
                        }
                        else
                        {
                            cout << "There is no such Product." << endl;
                        }
                    }
                    clear_screen();
                }
                if (seller_option == 6)
                {
                    cout<<"Sellers Menu > Orders >"<<endl;
                    char ask;
                    cout << "User1732 Just ordered a I-Phone 11.." << endl;
                    cout << "Do you want to send the deliver or not?(y for yes)(n for no)" << endl;
                    cin >> ask;
                    if (ask == 'y')
                    {
                        cout << "The order will be delivered soon" << endl;
                    }
                    else if (ask = 'n')
                    {
                        cout << "Order was cancelled..";
                    }
                    cout << endl;
                    cout << endl;
                    cout << "There are no more Orders" << endl;
                    clear_screen();
                }
                if (seller_option == 7)
                {
                    cout << "Thanks for using our Program.." << endl;
                    cout << "We are happy to serve you" << endl;
                    clear_screen();
                }
            }
        }
        if (main_menu_option == 3)
        {
            int customer_option = 0, op=0, user_password=0, exit1 = 0, buy_price=0;
            string user_name, add_product, buy_product;
            while (exit1 != 1)
            {
                header();
                cout<<endl;
                cout << "1) Create new account" << endl;
                cout << "2) Login" << endl;
                cin >> op;
                if (op == 1)
                {
                    cout << "Enter your name : ";
                    cin >> user_name;
                    cout << "Create your Password : ";
                    cin >> user_password;
                    cout << "Welcome " << user_name << endl;
                    cout << "Your account has been created Successfully." << endl;
                    exit1 = 1;
                }
                else
                {
                    cout << "Enter your name : ";
                    cin >> user_name;
                    cout << "Enter your Password : ";
                    cin >> user_password;
                    cout << "Sorry it seems like you do not have any account..." << endl;
                    cout << "Try to connect later...." << endl;
                    cout << "Make a new account" << endl;
                }
                system("cls");
            }
            while (customer_option != 4)
            {
                customer_option = customer_menu();
                system("cls");
                if (customer_option == 1)
                {
                    cout<<"Customer Menu > View Product"<<endl;
                    if (price_1 > 0)
                    {
                        cout << "Items\t\tPrice" << endl;
                        customer_product(product_1, price_1);
                        customer_product(product_2, price_2);
                        customer_product(product_3, price_3);
                        customer_product(product_4, price_4);
                        num_cust = 1;
                        cout << "Which you want to add any item to cart(Press N for no)?" << endl;
                        cin >> add_product;
                        if (add_product == "n")
                        {
                            cout << "Its okay no problem. " << endl;
                            cout << "Please keep visiting..." << endl;
                        }
                        else
                        {
                            if (add_product == product_1)
                            {
                                buy_product == product_1;
                                buy_price == price_1;
                                cout << product_1 << " has been entered to cart" << endl;
                            }
                            if (add_product == product_2)
                            {
                                buy_product == product_2;
                                buy_price == price_2;
                                cout << product_2 << " has been entered to cart" << endl;
                            }
                            if (add_product == product_3)
                            {
                                buy_product == product_3;
                                buy_price == price_3;
                                cout << product_3 << " has been entered to cart" << endl;
                            }
                            if (add_product == product_4)
                            {
                                buy_product == product_4;
                                buy_price == price_4;
                                cout << product_4 << " has been entered to cart" << endl;
                            }
                            else
                            {
                                cout << "There is no such product" << endl;
                            }
                        }
                    }
                    else
                    {
                        cout << "There are no products available" << endl;
                        cout << "Please try again later.................." << endl;
                    }
                    clear_screen();
                }
                else if (customer_option == 2)
                {
                    cout<<"Customer Menu > View Cart"<<endl;
                    cout << "Items\t\tPrice" << endl;
                    cout << buy_product << "\t\t" << buy_price << endl;
                    clear_screen();
                }
                else if (customer_option == 3)
                {
                    cout<<"Customer Menu > Payment"<<endl;
                    int op1;
                    cout << "Select the payment method : " << endl;
                    cout << "1) Debit Card " << endl;
                    cout << "2) Cash On Dilivered " << endl;
                    cin >> op1;
                    if (op1 == 1)
                    {
                        int credit_card_num, ty, tr;
                        while (ty != 1)
                        {
                            cout << "Please enter your credit card number : " << endl;
                            cin >> credit_card_num;
                            cout << "Please enter correct Card number " << endl;
                            cout << "Press (1) to exit" << endl;
                            cin >> tr;
                            if (tr == 1)
                            {
                                ty = 1;
                            }
                        }
                    }
                    else if (op1 == 2)
                    {
                        string location;
                        string addrress;
                        cout << "On which Adrress you want to recieve parcel" << endl;
                        cout << "1) Home Adrress" << endl;
                        cout << "2) Office Adrress" << endl;
                        cin >> location;
                        cout << "Please Enter your complete " << location << " Addrress" << endl;
                        cin >> addrress;
                        cout << "Your order has been placed.You will recieve parcel in 3 to 5 working days." << endl;
                        cout << "You have to pay cash on delivery." << endl;
                    }
                clear_screen();
                }
                else if (customer_option == 4)
                {
                    cout << "Thanks for using our Program.." << endl;
                    cout << "We are happy to serve you" << endl;
                    clear_screen();
                }
            }
        }
    }
}