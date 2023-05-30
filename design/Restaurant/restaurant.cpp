#include <iostream>
#include <vector>
#include <unordered_map>
#include <iomanip>
using namespace std;

class Menu
{
private:
    string itemName;
    int price;

public:
    Menu(string itN, int pri)
    {
        itemName = itN;
        price = pri;
    }

    string getItemName()
    {
        return itemName;
    }
    int getPrice()
    {
        return price;
    }
};

class Table
{
private:
    int TableNumber;
    vector<Menu> itemOrdered;

public:
    Table(int n)
    {
        TableNumber = n;
    }

    void addMenu(Menu m)
    {
        itemOrdered.push_back(m);
    }
    vector<Menu> getMenu()
    {
        return itemOrdered;
    }

    void displayOrder()
    {
        cout << "Order for Table Number : " << TableNumber << endl;
        for (auto itemOrdereds : itemOrdered)
        {
            cout << "Order Name : " << itemOrdereds.getItemName() << "Price " << itemOrdereds.getPrice() << endl;
        }
    }
};

class Restaurant
{
private:
    unordered_map<int, Table> tables;
    vector<Menu> orders;

public:
    void addTable(int n)
    {
        tables.emplace(n, Table(n));
    }

    void addItems(Menu m)
    {
        orders.push_back(m);
    }

    void displayMenu()
    {
        cout << setw(30) << "Menu \n";
        for (auto menu : orders)
        {
            cout << "Name : " << menu.getItemName() << " Price : " << menu.getPrice() << endl;
        }
    }

    void orderItem(int tableNumber, Menu m)
    {
        auto table = tables.find(tableNumber);
        if (table != tables.end())
        {
            table->second.addMenu(m);
        }
        else
        {
            cout << "Table " << tableNumber << " does not exist" << endl;
        }
    }

    void displayOrderedItems(int tableNumber)
    {
        auto table = tables.find(tableNumber);
        if (table != tables.end())
        {
             table->second.displayOrder();
        }
        else
        {
            cout << "Table " << tableNumber << " does not exist" << endl;
        }
    }
};

int main()
{
 // Create a restaurant
    Restaurant restaurant;

    // Add tables to the restaurant
    restaurant.addTable(1);
    restaurant.addTable(2);
    restaurant.addTable(3);

    // Add menu items
    restaurant.addItems(Menu("Pizza", 12));
    restaurant.addItems(Menu("Burger", 8));
    restaurant.addItems(Menu("Salad", 6));

    // Display the menu
    restaurant.displayMenu();

    // Order items for Table 1
    restaurant.orderItem(1, Menu("Pizza", 12));
    restaurant.orderItem(1, Menu("Salad", 6));

    // Order items for Table 2
    restaurant.orderItem(2, Menu("Burger", 8));
    restaurant.orderItem(2, Menu("Salad", 6));

    // Display ordered items for Table 1 
    restaurant.displayOrderedItems(1);

    // Display ordered items for Table 2
    restaurant.displayOrderedItems(2); 

    // Display ordered items for Table 3 (which doesn't exist)
    restaurant.displayOrderedItems(3);
    return 0;
}