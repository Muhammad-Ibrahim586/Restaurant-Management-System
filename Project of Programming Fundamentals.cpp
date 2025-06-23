// Semester Project Fall 2023
// Project statement 1: "Resturant Management System"
// Group members name and Roll #: Muhammad Ibrahim (23i - 6090) and Abdul Basit (23i - 6079)
// Section: A
// Course / Lab: CS1002 - Programming Fundamentals
// Date of Submission: 03-12-2023

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Declaration
const int Max_Menu_Items = 30;
const int a = 100;
char name[a];
const int b = 100;
char name2[b];
const int c = 100;
char name3[c] = {"Ibrahim"};
const int d = 100;
char name4[d] = {"Basit"};
const int length = 1000;
char location[length];
const int reviews = 1000;
char feedback[reviews];
int change, password, password2, password3 = 12345, password4 = 54321, reg_num, num = 51513213, x = 20;
string email;
double Balance = 200, total;
int k;
int i;
string item[30] = {"Lamb Karahi ( Full )", "Lamb Karahi ( Half )", "Mutton Namkeen Karahi ( Full )", "Mutton Namkeen Karahi ( Half )", "Chicken Namkeen Karahi ( Full )",
                 "Chicken Namkeen Karahi ( Half )", "Chicken Makhni Karahi ( Full )", "Chicken Makhni Karahi ( Half )", "Shinwari lamb tikka (1kg)", "Mutton tikka (1kg)",
				 "Pata tikka (1kg)", "Chicken malai boti (12 pcs)", "Chicken Achari boti (12 pcs)", "Chicken Afghani boti (12 pcs)", "Chicken tikka (leg pcs)",
				 "Beef Seekh Kabab (6 pcs)", "Chicken seekh kabab (6 pcs)", "Sour and Spicy Soup", "Kheer", "Gajar Halwa"};
double price[30] = {2449, 1299, 2449, 1249, 1349, 749, 1449, 849, 2499, 2399, 899, 899, 899, 799, 299, 849, 749, 500, 149, 249};
int stock[30] = {20, 0, 90, 66, 0, 12, 45, 0, 19, 0, 55, 71, 72, 54, 0, 8, 0, 24, 99, 100};

string item_offer[5] = {"Lamb Karahi ( Full ) with 3 Pepsi (small Bottle)", "Mutton Namkeen Karahi ( Full ) with Rice", "Shinwari lamb tikka (1kg) with 1 Pepsi Bottle",
				         "Pata tikka (1kg) with Salad", "Sour and Spicy Soup (Full size bowl)"};
double price_offer[5] = {2449, 1249, 2499, 899, 500};
int stock_offer[5] = {25, 34, 45, 67, 34};

// Required Functions
void Create_Account();
void Display();
void Edit_Item();
void View_Menu();
void Place_Order();
void Pay_Bill();
void View_Orders();
void Calculate_Revenue();

// Extra Function
void Edit_Info();
void Customer_Reviews();

// Main Function
int main(){
	int option;
	cout << "\n\t\t\t\t\t( Welcome to Usmania Resturant Website)\n" << endl << "Select your way of joining our site:\n" << endl << "1. As Resturant Staff" << endl << "2. As customer\n" << endl;
	cin >> option;
	switch(option){
		case 1:
			cout << "Enter Username: ";
			cin.ignore();
			cin.getline(name4, d);
			cout << "Enter password: ";
			cin >> password4;
			if(name4[i] = "Basit" && password4 == 54321){
				while(true){
				cout << "\n\t\t\t\t\t\t( Usmania Resturant )" << endl;
				cout << "\nSelect your choice:" << endl;
				cout << "1. View Current Menu" << endl << "2. Edit Menu" << endl << "3. View orders" << endl << "4. Calculate Revenue" << endl << "5. Exit\n" << endl;
			    int tell;
			    cin >> tell;
			    switch(tell){
			    	case 1:
			    		View_Menu();     // This function displays the current menu
			    		break;
			    	case 2:
			    		Edit_Item();     // This function edits the details of a Menu item
			    		break;
			    	case 3:
			    		View_Orders();   // View the list of orders (placed by Customers)
			    		break;
			    	case 4:
			    		Calculate_Revenue();    // Calculate the financial revenue for the resturant
			    		break;
			    	case 5:
			    		cout << "\n\t\t\t\t\t\t    ( Good Bye )" << endl;
			    		return 0;
					default:
			    		cout << "Error! Invalid Choice" << endl;
				}
			}
			break;
			}else{
				cout << "\nInvalid! Username or Password!" << endl;
			}
			break;
		case 2:
			// Customers can register themselves in the resturant system
		    cout << "Do you want to register or Login?" << endl;
	cout << "Press 1 for Register and press 2 for Login" << endl;
	cout << "1. Register" << endl << "2. Login" << endl;
	int customer_choice;
	cin >> customer_choice;
	switch(customer_choice){
		case 1:
			Create_Account();
			if(reg_num == password + 23 && name2[i] == name[i] && password2 == password){
				// prompts the user for an initial deposit ammout (customer balance)
				cout << "\nEnter Balance: ";
	            cin >> Balance;
	            cout << "Set your location: ";
	            cin.ignore();
	            cin.getline(location, length);
				cout << "\n\t\t\t\t\t( Welcome to Usmania Resturant Website )\n" << endl;
				while(true){
		        cout << "\nSelect your choice: " << endl;
		        cout << "1. Edit Personal Information" << endl << "2. View Menu" << endl << "3. Place Order" << endl << "4. View placed Order/ Current Balance" << endl << "5. Exit" << endl;
				int select;
				cin >> select;
				switch(select){
					case 1:
						Edit_Info(); break;   // This function edits the personal info of the customer and updates their accounts balance
	                case 2:
			            View_Menu(); break;   // This function displays the current Menu
			        case 3:
			        	View_Menu();
					    Place_Order();        // This function Allows Customers to place orders (within limits of their of their credit balance in the account)
					    Pay_Bill();           // This function deducts the order amount from the customers account balance and notifies if the balance is insufficient
					    cout << "\nYour Delivery destination is " << location << "." << endl;
						Customer_Reviews();   // Allows Customers to provide Feedback or Reviews for their orders
						break;
					case 4:
						Display();            // This function displays the complete details of the customer, current balance and any placed orders etc.
						cout << "\nYour Delivery destination is " << location << "." << endl;
						break;
					case 5:
					    cout << "\n\t\t\t\t\t( Thankyou for visiting our website! )" << endl;
					    return 0;
					default:
					    cout << "Error!";
			    }
				}
	        }else{
	        	cout << "\nIvalid username or password!" << endl;
	        }
			break;
		case 2:
			// Customers can log in to their pre-existing account
		    cout << "Enter username: ";
		    cin.ignore();
		    cin.getline(name3, c);
		    cout << "Enter password: ";
		    cin >> password3;
		    if(name3[i] = "Ibrahim" && password3 == 12345){
			    cout << "\n\t\t\t\t\t  ( Welcome to Usmania Resturant )\n" << endl;
				while(true){
		        cout << "\nSelect your choice: " << endl;
		        cout << "1. Edit Personal Information" << endl << "2. View Menu" << endl << "3. Place Order" << endl << "4. View placed Order/ Current Balance" << endl << "5. Exit" << endl;
				int select;
				cin >> select;
				switch(select){
					case 1:
						name[i] = name3[i];
						password = password3;
						Edit_Info(); break;      // This function edits the personal info of the customer and updates their account balance
					case 2:
					    View_Menu(); break;      // This function displays the current Menu
					case 3:
						View_Menu();
					    Place_Order();           // This function Allows Customers to place orders (within limits of their of their credit balance in the account)
						Pay_Bill();              // This function deducts the order amount from the customers account balance and notifies if the balance is insufficient
						cout << "\nYour Delivery destination is Islamabad G-9." << endl;
						Customer_Reviews();      // Allows Customers to provide Feedback or Reviews for their orders
						break;
					case 4:
						Display();               // This function displays the complete details of the customer and any placed orders
						cout << "\nYour Delivery destination is Islamabad G-9." << endl;
						break;
					case 5:
					    cout << "\n\t\t\t\t\t( Thankyou for visiting our website! )\n" << endl;
					    return 0;
					default:
					    cout << "Error!";		
				}
				}
			}else{
				cout << "\nIvalid username or password!" << endl;
			}
	        break;
	    default:
		    cout << "Error!";
	}	
			break;
	}
	return 0;
}

// Required Functions bodies
void Create_Account(){
	    // Get the customer's name and contact information
	    int customer = 30;
	    if(customer <= 30){
	    	cout << "Enter username: ";
        cin.ignore();
        cin.getline(name, a);
        cout << "Enter Password: ";
	    cin >> password;
	    cout << "Enter email: ";
	    cin >> email;
	    cout << "Enter phone number: ";
	    cin >> num;
	    // Assigns each customer a unique registration number
		cout << "\nYour registration number is " << password + 23 << endl;
	    cout << "Enter your registration number: ";
	    cin >> reg_num;
	    if(reg_num == password + 23){
	    	cout << "\nAccount created Successfully\n" << endl;
	        // Creates a username and password
			cout << "\nYour username is " << name << " and your Password is " << password << endl;
	        cout << "\nNow Login" << endl;
			cout << "Enter Username: ";
	        cin.ignore();
	        cin.getline(name2, b);
	        cout << "Enter Password: ";
	        cin >> password2;
		}else if(reg_num != password + 23){
				do{
					cout << "\nYour registration number is " << password + 23 << endl;
	            cout << "Enter your registration number: ";
	            cin >> reg_num;
				}while(reg_num != password + 23);
				cout << "\nAccount created Successfully\n" << endl;
	            cout << "\nYour username is " << name << " and your Password is " << password << endl;
	            cout << "\nNow Login" << endl;
			    cout << "Enter Username: ";
	            cin.ignore();
	            cin.getline(name2, b);
	            cout << "Enter Password: ";
	            cin >> password2;
		}
				
		}else{
			cout << "Sorry Space is full! You cannot register!" << endl;
		}
}

void Display(){
	cout << "\nPersonal Information: " << endl;
	cout << endl << "Name: " << name3 << endl << "Password: " << password3 << endl << "Email: " << email << endl << "Phone number: " << num << endl;
	cout << "\nYour current Balance is " << Balance << endl;
	bool placed_orders = false;
	cout << "Yours orders placed are: " << endl;
	int i = 0;
	while(i < 30){
		if(price[i] == 0){
			break;
		}
		cout << setw(4) << i + 1 << ". " << setw(30) << item[i] << setw(25) << price[i] << endl;
		break;
	}
	
}

void Edit_Item(){
	cout << "\nPress 1 to Edit Menu" << endl;
	int tell;
	cin >> tell;
	if(tell == 1){
		cout << "\nWhat do you want to edit from Menu?" << endl;
		cout << "Do you want to" << endl;
		cout << "1. Change an Item" << endl << "2. Change an Item's Price" << endl << "3. Change an Item's Stock" << endl << "4. Remove an Item" << endl << "5. Add an Item" << endl << "6. Exit\n" << endl;
	    int change;
	    cin >> change;
	    switch(change){
	    	case 1:
	    		int number;
	    		// Asks for the unique item identifier and 
	    		cout << "Enter Item number which you want to change: ";
	    		cin >> number;
	    		if(number >= 1 && number <= x){
	    			// Modifies Items name, description and price (as needed)
	    			cout << "\nEnter New Item: ";
	    			cin.ignore();
	    			getline(cin, item[number - 1]);
	    			cout << "\nDo you want to change the price of this New Item?   1. Yes  or  2. No" << endl;
					int choice1;
					cin >> choice1;
					switch(choice1){
						case 1:
							cout << "Enter Price of this new Item: ";
	    			        cin >> price[number - 1];
	    			        break;
	    			    case 2:
	    			    	break;
	    			    default:
	    			    	cout << "Invalid choice!" << endl;
					}
					cout << "\nDo you want to change the stock of this New Item?    1. Yes   or   2.  No" << endl;
					int choice2;
					cin >> choice2;
					switch(choice2){
						case 1:
							cout << "Enter Price of this new Item: ";
	    			        cin >> stock[number - 1];
	    			        break;
	    			    case 2:
	    			    	break;
	    			    default:
	    			    	cout << "Invalid Choice!" << endl;
					}
				}else{
					cout << "\nError! Invalid Item Number!" << endl;
				}
				break;
			case 2:
				int number2;
				cout << "\nWhich Items Price you want to change?" << endl;
				cin >> number2;
				if(number2 >= 1 && number2 <= x){
					// Modifies the price of the item
					cout << "Enter New Price: ";
					cin >> price[number2 - 1];
				}else{
					cout << "\nError! Invalid Item number!";
				}
				break;
			case 3:
				int number3;
				cout << "\n Which Items stock you want to change: ";
				cin >> number3;
				if(number3 >= 1 && number3 <= x){
					// Modifies the availibity of the item
					cout << "Enter New Stock: ";
					cin >> stock[number3 - 1];
				}else{
					cout << "\nError! Invalid Item Number!" << endl;
				}
				break;
			case 4:
				int Item_num;
				cout << "Enter Item number which you want to Remove: ";
				cin >> Item_num;
				if(Item_num >= 1 && Item_num <= x){
					// Removes an item
					item[Item_num - 1] = " ";
					price[Item_num - 1] = 0.0;
					stock[Item_num - 1] = 0;
				}else{
					cout << "\nError! Invalid Item Number!" << endl;
				}
				break;
			case 5:
					if(x < Max_Menu_Items){
					// adds an item
					char item[x];
					cout << "Enter New Item: ";
					cin.ignore();
					cin.getline(item, x);
					cout << "Enter Price of your New Item: ";
					cin >> price[x];
					cout << "Enter Stock of your New Item: ";
					cin >> stock[x];
					cin.ignore();
					item[i] = item[x];
					price[i] = price[x];
					stock[i] = stock[x];
 			        }else{
 				        cout << "Error! Menu is full. Cannot add more Items!" << endl;
				    }
				break;
			case 6:
				cout << "\n\t\t\tGood Bye!" << endl;
				break;
			default:
				cout << "Error! Invalid choice!" << endl;
		}
		View_Menu();
	}else{
		cout << "Error! Invalid Choice!" << endl;
	}
}

void View_Menu(){
	int i;
	cout << setw(60) << "*****( Menu )*****\n" << endl;
	cout << setw(25) << "Item" << setw(30) << "Price" << setw(30) << "Stock";
	cout << endl << endl; 
	for(int i = 0; i < 20; i++){
	cout << setw(4) << i + 1 << ". " << setw(35) << item[i] << setw(25) << price[i] << setw(25) << stock[i] << endl;
	}
}

void Place_Order(){
	// selects one or more menu items
	cout << "\nSelect from Menu how many items you want to order." << endl;
	int j;
	int a;
	int b;
	cin >> a;
	string order[a];
	double order_price[a];
	cout << "\nSelect which items you want to order." << endl;
	for(int j = 0; j < a; j++){
	    cin >> b;
		if(b <= 20){
			order[j] = item[b - 1];
		order_price[j] = price[b - 1];
		if(stock[b - 1] <= 0){
			cout << "\nSorry! this item is not avalible. Please order something else!\n" << endl;
			j--;
		}else{
			stock[b - 1] = stock[b - 1] - 1;
		}
		}else{
			cout << "Invalid choice!" << endl;
		}
    }
	cout << "\nItems ordered are:" << endl;
	for(int k = 0; k < a; k++){
		cout << setw(4) << k + 1 << ". " << order[k] << endl;
	}
	int view_bill;
	cout << "\nDo you want to view bill?" << "   1. Yes" << " OR " << " 2. No" << endl;
	cin >> view_bill;
	cout << "\n\t\t\t\t******( Usmania Resturant Bill )******\n" << endl;
	// Calculates the total bill, including taxes and service charges
	for(int j = 0; j < a; j++){
		cout << setw(4) << j + 1 << ". " << setw(35) << order[j] << setw(25) << order_price[j] << endl;
	}
	double items_bill = 0.0;
	for(int j = 0; j < a; j++){
		items_bill = order_price[j] + items_bill;
	}
	double tax = 120.0, service_charge = 30.0;
	total = items_bill + tax + service_charge;
	// displays the total bill
	cout << endl << setw(41) << "Tax" << setw(25) << tax << endl;
	cout << endl << setw(41) << "Service charges" << setw(25) << service_charge << endl;
    cout << endl << setw(41) << "Total amount" << setw(25) << total << endl;
}

void Pay_Bill(){
	int pay_bill;
	cout << "\nTo pay Bill enter 1" << endl;
	cin >> pay_bill;
	switch(pay_bill){
	case 1:
	    while(true){
	    	if(Balance >= total){
	    		Balance -= total;
	    		cout << "\nPayment Successfull!\n" << endl;
	    		cout << "Remaining Balance Rs. " << Balance << endl;
	    		cout << "Your total bill was of Rs. " << total << endl;
				cout << "Wait a few minutes untill your meal arrives!" << endl;
				cout << "\n\t\t\t\t\tThankyou for Placing Order! Have a nice day!" << endl;
	    		break;
			}else{
				cout << "\nYour Balance is insufficient! Current Balance: " << Balance << endl;
				cout << "Enter more Balance: ";
				double More_Balance;
				cin >> More_Balance;
				Balance += More_Balance;
			}
		}					
	}
}

void View_Orders(){
	cout << "\nThe orders placed by customers right now are: " << endl;
			    			int i = 0;
	while(i < 30){
		if(price[i] == 0){
			break;
		}
		cout << setw(4) << i + 1 << ". " << setw(30) << item[i] << setw(25) << price[i] << endl;
		break;
	}
}

void Calculate_Revenue(){
	int sum = 0;
			    		int i = 0;
			    		while(i < 30){
			    			sum = price[i] + sum;
			    			i++;
						}
						cout << "\nTotal Revenue is Rs. " << sum << endl;
}

// Extra function body
void Edit_Info(){
	cout << "Which thing you want to edit?" << endl;;
	cout << "1. Name" << "\n2. Password" << "\n3. Email" << "\n4. Phone number" << "\n5. Balance" << endl;
	int what;
	cin >> what;
	switch(what){
		case 1:
		    cout << "Enter username: ";
			cin.ignore();
			cin.getline(name, a);
			cout << "\nPersonal Information:";
			cout << endl << "Name: " << name << endl << "Password: " << password3 << endl << "Email: " << email << endl << "Phone number: " << num << endl << "Balance: " << Balance << endl;
			break;
		case 2:
			cout << "Enter Password: ";
			cin >> password;
			cout << "\nPersonal Information:";
			cout << endl << "Name: " << name3 << endl << "Password: " << password << endl << "Email: " << email << endl << "Phone number: " << num << endl << "Balance: " << Balance << endl;
			break;
		case 3:
			cout << "Enter Email: ";
			cin >> email;
			cout << "\nPersonal Information:";
			cout << endl << "Name: " << name3 << endl << "Password: " << password3 << endl << "Email: " << email << endl << "Phone number: " << num << endl << "Balance: " << Balance << endl;    
			break;
		case 4:
			cout << "Enter Phone number: ";
			cin >> num;
			cout << "\nPersonal Information:";
			cout << endl << "Name: " << name3 << endl << "Password: " << password3 << endl << "Email: " << email << endl << "Phone number: " << num << endl << "Balance: " << Balance << endl;
			break;
		case 5:
			cout << "Enter Balance: ";
			cin >> Balance;
			cout << "\nPersonal Information:";
			cout << endl << "Name: " << name3 << endl << "Password: " << password3 << endl << "Email: " << email << endl << "Phone number: " << num << endl << "Balance: " << Balance << endl;
			break;
		default:
			cout << "Error!" << endl;   
	}
}

void Customer_Reviews(){
	cout << "\nDo you want to give Feedback or Reviews?  1. Yes   or   2. No" << endl;
	int m;
	cin >> m;
	switch(m){
		case 1:
            cout << "Feedback or Reviews: " << endl;
			cin.ignore();
			cin.getline(feedback, reviews);
			cout << "\n\t\t\t\t\t\tThanks for your Feedback!" << endl;
			break;
		case 2:
			break;
		default:
			cout << "Invalid choice!" << endl;
	}
}
