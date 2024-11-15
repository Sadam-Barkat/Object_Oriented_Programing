#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

class User {
public:
  string username;
  string password;
  string email;
  string phone;

  void printUserDetails() {
    cout << "******* User Details *******" << endl << endl;
    cout << "Username: " << username << endl;
    cout << "Email: " << email << endl;
    cout << "Phone: " << phone << endl << endl;
    cout << "****************************" << endl << endl;
  }

  User(string username, string password, string email, string phone) {
    this->username = username;
    this->password = password;
    this->email = email;
    this->phone = phone;
  }

  User() {
    this->username = "";
    this->password = "";
    this->email = "";
    this->phone = "";
  }

  User(const User &user) {
    this->username = user.username;
    this->password = user.password;
    this->email = user.email;
    this->phone = user.phone;
  }
};

bool isEmailValid(string email) { return email.find('@') != string::npos; }

bool containsOnlyDigits(string str) {
  for (char c : str) {
    if (!isdigit(c)) {
      return false;
    }
  }
  return true;
}

bool isPhoneValid(string phone) {
  if (phone.length() == 11 && containsOnlyDigits(phone)) {
    return true;
  }
  return false;
}

bool isUsernameTaken(const string username) {
  ifstream file("user.txt");
  if (file.is_open()) {
    string user_username, user_password, user_email, user_phone;
    while (file >> user_username >> user_password >> user_email >> user_phone) {
      if (user_username == username) {
        return true;
      }
    }
    file.close();
  }
  return false;
}

User inputUserDetails() {
  string username, password, email, phone;
  do {
    cout << "Enter username: ";
    cin >> username;
    if (isUsernameTaken(username)) {
      cout << "Username is already taken. Please try another.\n";
    }
  } while (isUsernameTaken(username));

  cout << "Enter password: ";
  cin >> password;
  do {
    cout << "Enter email: ";
    cin >> email;
    if (!isEmailValid(email)) {
      cout << "Invalid email format. Please enter a valid email.\n";
    }
  } while (!isEmailValid(email));

  do {
    cout << "Enter phone: ";
    cin >> phone;
    if (!isPhoneValid(phone)) {
      cout << "Invalid phone number format. Please enter a 11-digit phone "
              "number.\n";
    }
  } while (!isPhoneValid(phone));

  return User(username, password, email, phone);
}

User RegisterUser() {
  cout << "****** User Registration *******" << endl << endl;
  User user = inputUserDetails();
  ofstream file("user.txt", ios::app);
  if (file.is_open()) {
    file << user.username << "\n";
    file << user.password << "\n";
    file << user.email << "\n";
    file << user.phone << "\n\n";
    cout << "User has been registered successfully \n\n";
    file.close();
  } else {
    cout << "Unable to open the file.\n";
  }
  return user;
}

User login() {
  cout << "****** User Login *******" << endl << endl;
  string username, password;
  User user;
  cout << "Enetr username: ";
  cin >> username;
  cout << "Enter password: ";
  cin >> password;
  ifstream file("user.txt");
  if (file.is_open()) {
    string user_username, user_password, user_email, user_phone;
    while (file >> user_username >> user_password >> user_email >> user_phone) {
      if (user_username == username && user_password == password) {
        cout << "User has been logged in successfully \n";
        user = User(user_username, user_password, user_email, user_phone);
      }
    }
    file.close();
    if (user.username == "") {
      cout << "Invalid username or password, No User found \n";
      // exit(0);
    }
  }
  return user;
}

void UserRegisterMenu() {
  cout << "Welcome to Resturant Management System" << endl;
  cout << "Please select an option:" << endl;
  cout << "1. Login" << endl;
  cout << "2. Register" << endl;
  cout << "3. Exit" << endl << endl;
}

bool UserMenuChoice(int option, User &user) {
  bool flag = false;
  switch (option) {
  case 1:
    user = login();
    break;
  case 2:
    user = RegisterUser();
    user.printUserDetails();
    break;
  case 3:
    exit(0);
    break;
  default:
    cout << "Invalid option. Please try again." << endl;
  }
  if (user.username != "") {
    flag = true;
  }
  return flag;
}

class MenuItem {
public:
  string name;
  double price;
  MenuItem(string name = "", double price = 0.0) {
    this->name = name;
    this->price = price;
  }
  ~MenuItem() {}
};

class Pizza : public MenuItem {
public:
  char size;

  Pizza(string name, double price, char size) : MenuItem(name, price) {
    this->size = size;
  }
  Pizza() : MenuItem(){};
};

class Burger : public MenuItem {
public:
  Burger(string name, double price) : MenuItem(name, price) {}
  Burger() : MenuItem() {}
};

class Addons : public MenuItem {
public:
  Addons(string name, double price) : MenuItem(name, price) {}
  Addons() : MenuItem() {}
};

class Drinks : public MenuItem {
public:
  Drinks(string name, double price) : MenuItem(name, price) {}
  Drinks() : MenuItem() {}
};

class Appetitizers : public MenuItem {
public:
  Appetitizers(string name, double price) : MenuItem(name, price) {}
  Appetitizers() : MenuItem() {}
};

class Menu {
public:
  static const int pizzaCount = 12, burgerCount = 10, drinksCount = 10,
                   addonsCount = 10, appetitizersCount = 10;
  Pizza pizzas[pizzaCount];
  Burger burgers[burgerCount];
  Addons addons[addonsCount];
  Drinks drink[drinksCount];
  Appetitizers appetitizers[appetitizersCount];

  Menu() {}

  void populateMenu() {
    int i = 0;
    ifstream pizzaFile("Pizza.txt");

    while (getline(pizzaFile, pizzas[i].name) &&
           pizzaFile >> pizzas[i].price >> pizzas[i].size) {
           pizzaFile.ignore(); // Ignore the newline character
           ++i;
    }
    pizzaFile.close();

    i = 0;
    ifstream burgerFile("Burger.txt");
    while (getline(burgerFile, burgers[i].name) &&
           burgerFile >> burgers[i].price) {
           burgerFile.ignore();
           i++;
    }

    i = 0;
    ifstream addonsFile("Addons.txt");
    while (getline(addonsFile, addons[i].name) &&
           addonsFile >> addons[i].price) {
           addonsFile.ignore();
           i++;
    }

    i = 0;
    ifstream drinkFile("Drinks.txt");
    while (getline(drinkFile, drink[i].name) && drinkFile >> drink[i].price) {
      drinkFile.ignore();
      i++;
    }

    i = 0;
    ifstream appetitizersFile("Appetizer.txt");
    while (getline(appetitizersFile, appetitizers[i].name) &&
           appetitizersFile >> appetitizers[i].price) {
      appetitizersFile.ignore();
      i++;
    }
  }

  void showMenuCategory(const string &categoryName, MenuItem items[],
                        int itemCount) {
    cout << categoryName << ":" << endl;
    if (categoryName != "Pizza") {
      for (int i = 0; i < itemCount; ++i) {
        cout << i + 1 << ". " << items[i].name
             << setw(30 - items[i].name.length()) << items[i].price;
        cout << endl;
      }
    } else {
      for (int i = 0; i < itemCount; ++i) {
        cout << i + 1 << ". " << pizzas[i].name << '(' << pizzas[i].size << ')'
             << setw(30 - pizzas[i].name.length()) << pizzas[i].price << endl;
      }
      cout << endl;
    }
    cout << endl;
  }

  void showMenu() {
    const string menuItemTypes[5] = {"Appetizers", "Burger", "Addons", "Drinks",
                                     "Pizza"};
    const int itemCounts[5] = {appetitizersCount, burgerCount, addonsCount,
                               drinksCount, pizzaCount};
    MenuItem *itemArrays[5] = {appetitizers, burgers, addons, drink, pizzas};

    for (int categoryIndex = 0; categoryIndex < 5; ++categoryIndex) {
      showMenuCategory(menuItemTypes[categoryIndex], itemArrays[categoryIndex],
                       itemCounts[categoryIndex]);
    }
  }
};

void showHotelMenu() {
  cout << "Welcome to Cheezious Menu" << endl;
  cout << "Please select an option:" << endl;
  cout << "1. View Menu" << endl;
//  cout << "2. Order" << endl;
  cout << "2. Show Order History" << endl;
  cout << "3. Exit" << endl << endl;
}

class OrderItem {
public:
  string category;
  int itemNo;
  int quantity;

public:
  OrderItem() {}
  OrderItem(string cat, int itemNo, int qty)
      : category(cat), itemNo(itemNo), quantity(qty) {}
  void printOrderItem() {
    cout << category << " " << itemNo << " x " << quantity << endl;
  }
};

class Order {
public:
  User *user;
  OrderItem *orderItems;
  int itemCount;
  int orderNo;
  double totalPrice;

  Order(User *u) {
    this->user = u;
    itemCount = 0;
    orderNo = rand();
    totalPrice = 0;
  }

  bool addOrderItem(OrderItem orderItem) {
    OrderItem *newOrderItems = new OrderItem[itemCount + 1];
    for (int i = 0; i < itemCount; ++i) {
      newOrderItems[i] = orderItems[i];
    }
    newOrderItems[itemCount] = orderItem;
    itemCount++;
    orderItems = nullptr;
    orderItems = newOrderItems;
    return true;
  }

  void printOrderItems() {
    cout << endl << "Order Items:" << endl;
    for (int i = 0; i < itemCount; ++i) {
      cout << "Category: " << orderItems[i].category << endl;
      cout << "Item No: " << orderItems[i].itemNo << endl;
      cout << "Quantity: " << orderItems[i].quantity << endl;
      cout << endl;
    }
  }

  void addOrderHistorytoFile(Menu &m) {
    ofstream orderHistoryFile;
    orderHistoryFile.open(user->username + ".txt", ios::app);
    if (orderHistoryFile.is_open()) {
      MenuItem *item;
      orderHistoryFile << "Order No: " << orderNo << endl;
      orderHistoryFile << "Order Items:" << endl;
      orderHistoryFile << "Item Name" << setw(20 - string("Item Name").length())
                       << "Qty" << setw(10) << "Price" << endl;
      for (int i = 0; i < itemCount; ++i) {
        if (orderItems[i].category == "Appetizers" ||
		      orderItems[i].category == "appetizers" ) {
          item = m.appetitizers;
        } else if (orderItems[i].category == "Burgers" ||
                   orderItems[i].category == "burgers") {
          item = m.burgers;
        } else if (orderItems[i].category == "Drinks" ||
		           orderItems[i].category == "drinks" ) {
          item = m.drink;
        } else if (orderItems[i].category == "Pizzas" )  {
          item = m.pizzas;
        } else if (orderItems[i].category == "Addons" ||
		           orderItems[i].category == "addons" ) {
          item = m.addons;
        }
        if (orderItems[i].category != "Pizzas"  ) {

          double itemTotal =
              orderItems[i].quantity * item[orderItems[i].itemNo - 1].price;
          totalPrice = totalPrice + itemTotal;
          string itemName = item[orderItems[i].itemNo - 1].name;

          orderHistoryFile << itemName << setw(20 - itemName.length())
                           << orderItems[i].quantity << setw(10) << itemTotal
                           << endl;
        } else {
          double itemTotal =
              orderItems[i].quantity * m.pizzas[orderItems[i].itemNo - 1].price;
          totalPrice = totalPrice + itemTotal;
          string itemName = m.pizzas[orderItems[i].itemNo - 1].name;
          char itemSize = m.pizzas[orderItems[i].itemNo - 1].size;

          orderHistoryFile << itemName << '(' << itemSize << ')'
                           << setw(20 - itemName.length() - 3)
                           << orderItems[i].quantity << setw(10) << itemTotal
                           << endl;
        }
      }
      orderHistoryFile << endl << "**********************" << endl;
      orderHistoryFile << "Total Bill :" << totalPrice << endl;
    }
  }

  void checkout(Menu &m) {
    MenuItem *item;
    cout << "**************************" << endl;
    cout << "*******Order Details******" << endl;
    cout << "**************************" << endl;
    cout << "User Name" << user->username << endl;
    cout << "Order No: " << orderNo << endl;

    cout << "Order Items:" << endl;
    cout << "Item Name" << setw(20 - string("Item Name").length()) << "Qty"
         << setw(10) << "Price" << endl;
    for (int i = 0; i < itemCount; ++i) {
      if (orderItems[i].category == "Appetizers" ||
	           orderItems[i].category == "appetizers" ) {
        item = m.appetitizers;
      } else if (orderItems[i].category == "Burgers" ||
                 orderItems[i].category == "burgers") {
        item = m.burgers;
      } else if (orderItems[i].category == "Drinks" ||
	         orderItems[i].category == "drinks" ) {
        item = m.drink;
      } else if (orderItems[i].category == "Pizzas" ) {
        item = m.pizzas;
      } else if (orderItems[i].category == "Addons" ||
	            orderItems[i].category == "addons") {
        item = m.addons;
      }
      if (orderItems[i].category != "Pizzas" ) {

        double itemTotal =
            orderItems[i].quantity * item[orderItems[i].itemNo - 1].price;
        totalPrice = totalPrice + itemTotal;
        string itemName = item[orderItems[i].itemNo - 1].name;

        cout << itemName << setw(20 - itemName.length())
             << orderItems[i].quantity << setw(10) << itemTotal << endl;
      } else {
        double itemTotal =
            orderItems[i].quantity * m.pizzas[orderItems[i].itemNo - 1].price;
        totalPrice = totalPrice + itemTotal;
        string itemName = m.pizzas[orderItems[i].itemNo - 1].name;
        char itemSize = m.pizzas[orderItems[i].itemNo - 1].size;

        cout << itemName << '(' << itemSize << ')'
             << setw(20 - itemName.length() - 3) << orderItems[i].quantity
             << setw(10) << itemTotal << endl;
      }
    }
    cout << endl << "**********************" << endl;
    cout << "Total Bill :" << totalPrice << endl;
    addOrderHistorytoFile(m);
  }

  void refreshOrder() {
    delete[] orderItems;
    orderItems = nullptr;
    itemCount = 0;
    orderNo++;
    totalPrice = 0;
  }

  ~Order() {
    delete[] orderItems;
    orderItems = nullptr;
    itemCount = 0;
    orderNo = 0;
    totalPrice = 0;
    user = nullptr;
  }
};

int main() {
  int userMenuOption;
  bool userMenuflag = false;
  User user;
  UserRegisterMenu();
  do {
    cout << "Enter your choice: ";
    cin >> userMenuOption;
    userMenuflag = UserMenuChoice(userMenuOption, user);
  } while (userMenuflag == false);

  cout << "Welcome " << user.username << "!" << endl;

  int resturauntMenuOption;
  Menu m = Menu();
  m.populateMenu();

  do {
    showHotelMenu();
    string catagory;
    int itemNo, quantity;
    Order order(&user);
    OrderItem oitem;
    string detail;
    ifstream infile(user.username + ".txt", ios::in);
    char isAddMore = 'N';
    cout << "Enter your choice: ";
    cin >> resturauntMenuOption;
    switch (resturauntMenuOption) {
    case 1:
      m.showMenu();
      cout<<"This is our menu pleas order something\n";
      cout << "Order" << endl;
      do {
        cout << "Enter Category: ";
        cin >> catagory;
        cout << "Enter Item No: ";
        cin >> itemNo;
        cout << "Enter Quantity: ";
        cin >> quantity;
        oitem = OrderItem(catagory, itemNo, quantity);
        order.addOrderItem(oitem);
        cout << "Added to cart" << endl;
        cout << "Do you want to add more items? (Y/N) ";
        cin >> isAddMore;
      } while (isAddMore == 'Y' || isAddMore == 'y');
      order.checkout(m);
      order.refreshOrder();
      break;
//    case 2:
//      cout << "Order" << endl;
//      do {
//        cout << "Enter Category: ";
//        cin >> catagory;
//        cout << "Enter Item No: ";
//        cin >> itemNo;
//        cout << "Enter Quantity: ";
//        cin >> quantity;
//        oitem = OrderItem(catagory, itemNo, quantity);
//        order.addOrderItem(oitem);
//        cout << "Added to cart" << endl;
//        cout << "Do you want to add more items? (Y/N) ";
//        cin >> isAddMore;
//      } while (isAddMore == 'Y' || isAddMore == 'y');
//      order.checkout(m);
//      order.refreshOrder();
//      break;
    case 2:
      cout << "Show Order History" << endl;
      if (infile.is_open()) {
        while (getline(infile, detail)) {
          cout << detail << endl;
        }
      } else {
        cout << "No Order History Found" << endl;
      }
      break;
    case 3:
      cout << "Exit" << endl;
      cout <<"Thanks for coming sir\n";
      exit(0);
    }
  } while (resturauntMenuOption != 4);

  return 0;
}
