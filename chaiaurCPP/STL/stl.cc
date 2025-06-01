#include <vector>
#include <iostream>
#include <deque>
#include <list>
#include <ctime>
#include <map>
#include <set>
#include <string>

using namespace std;

// Define the Product structure
struct Product {
    int productID;
    string name;
    string category;
};

// Define the Order structure
struct Order {
    int orderId;
    int productId;
    int quantity;
    string customerId;
    time_t orderDate;
};

int main() {
    // Vector of products
    vector<Product> products;
    products.push_back(Product{101, "Laptop", "Electronics"});
    products.push_back(Product{102, "Smartphone", "Electronics"});
    products.push_back(Product{103, "Coffee Maker", "Kitchen"});
    products.push_back(Product{104, "Blender", "Kitchen"});
    products.push_back(Product{105, "Desk Lamp", "Home"});

    // Deque for recent customers
    deque<string> recentCustomers;
    recentCustomers.push_back("C001");
    recentCustomers.push_back("C002");
    recentCustomers.push_back("C003");
    recentCustomers.push_back("C004");
    recentCustomers.push_front("C005");

    // List of order history
    list<Order> orderHistory;
    orderHistory.push_back(Order{1, 101, 1, "C001", time(0)});
    orderHistory.push_back(Order{2, 102, 2, "C002", time(0)});
    orderHistory.push_back(Order{3, 103, 1, "C003", time(0)});

    // Set of unique product categories
    set<string> categories;
    vector<Product>::const_iterator pit;
    for (pit = products.begin(); pit != products.end(); ++pit) {
        categories.insert(pit->category);
    }

    // Map of product stock
    map<int, int> productStock;
    productStock[101] = 10;
    productStock[102] = 20;
    productStock[103] = 15;
    productStock[104] = 5;
    productStock[105] = 7;

    // Multimap of customer orders
    multimap<string, Order> customerOrders;
    list<Order>::const_iterator oit;
    for (oit = orderHistory.begin(); oit != orderHistory.end(); ++oit) {
        customerOrders.insert(make_pair(oit->customerId, *oit));
    }

    // Map for customer data (unordered_map is C++11+ only)
    map<string, string> customerData;
    customerData["C001"] = "Alice";
    customerData["C002"] = "Shivam";
    customerData["C003"] = "John";
    customerData["C004"] = "Ram";
    customerData["C005"] = "Sharan";

    // Set of unique product IDs (unordered_set is C++11+ only)
    set<int> uniqueProductIDs;
    for (pit = products.begin(); pit != products.end(); ++pit) {
        uniqueProductIDs.insert(pit->productID);
    }

    // -------------------- Print Outputs --------------------

    cout << "=== Products ===" << endl;
    for (pit = products.begin(); pit != products.end(); ++pit) {
        cout << "ID: " << pit->productID << ", Name: " << pit->name << ", Category: " << pit->category << endl;
    }

    cout << "\n=== Recent Customers (Deque) ===" << endl;
    deque<string>::const_iterator rcit;
    for (rcit = recentCustomers.begin(); rcit != recentCustomers.end(); ++rcit) {
        cout << *rcit << " ";
    }
    cout << endl;

    cout << "\n=== Order History (List) ===" << endl;
    for (oit = orderHistory.begin(); oit != orderHistory.end(); ++oit) {
        cout << "Order ID: " << oit->orderId << ", Product ID: " << oit->productId
             << ", Quantity: " << oit->quantity << ", Customer ID: " << oit->customerId << endl;
    }

    cout << "\n=== Unique Categories (Set) ===" << endl;
    set<string>::const_iterator scit;
    for (scit = categories.begin(); scit != categories.end(); ++scit) {
        cout << *scit << " ";
    }
    cout << endl;

    cout << "\n=== Product Stock (Map) ===" << endl;
    map<int, int>::const_iterator psit;
    for (psit = productStock.begin(); psit != productStock.end(); ++psit) {
        cout << "Product ID: " << psit->first << ", Stock: " << psit->second << endl;
    }

    cout << "\n=== Customer Orders (Multimap) ===" << endl;
    multimap<string, Order>::const_iterator coit;
    for (coit = customerOrders.begin(); coit != customerOrders.end(); ++coit) {
        cout << "Customer: " << coit->first << " → Order ID: " << coit->second.orderId
             << ", Product ID: " << coit->second.productId << ", Quantity: " << coit->second.quantity << endl;
    }

    cout << "\n=== Customer Data (Map) ===" << endl;
    map<string, string>::const_iterator cdit;
    for (cdit = customerData.begin(); cdit != customerData.end(); ++cdit) {
        cout << "Customer ID: " << cdit->first << ", Name: " << cdit->second << endl;
    }

    cout << "\n=== Unique Product IDs (Set) ===" << endl;
    set<int>::const_iterator upit;
    for (upit = uniqueProductIDs.begin(); upit != uniqueProductIDs.end(); ++upit) {
        cout << *upit << " ";
    }
    cout << endl;

    return 0;
}
