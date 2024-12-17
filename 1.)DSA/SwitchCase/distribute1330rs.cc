// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     cout<<"Enter the amount you want to distribute : ";
// //     int amount = n;
// //     cin>>n;

// //     int note100 = 0, note40 = 0; note20 = 0, note1 = 0;

// //     switch (1)
// //     {
// //     case 1:
// //         note100 =amount/100;
// //         amount = amount%100;
// //     case 2:
// //         note40=amount/40;
// //         amount = amount%40;
// //     case 3:
// //         note20=amount/20
// //         amount = amount%20
// //     case 4:
// //         note1 =amount/1
// //         amount = amount;
    
// //     default:
// //         break;
// //     }

// //     cout << "100 Rs notes: " << note100 << endl;
// //     cout << "40 Rs notes: " << note40 << endl;
// //     cout << "20 Rs notes: " << note20 << endl;
// //     cout << "1 Rs notes: " << note1 << endl;

// //     return 0;


// // }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the amount you want to distribute: ";
//     cin >> n; // Take user input for the amount

//     int amount = n; // Assign the input to the variable `amount`

//     int note100 = 0, note40 = 0, note20 = 0, note1 = 0;

//     switch (1) {
//         case 1:
//             note100 = amount / 100; // Calculate the number of 100 Rs notes
//             amount = amount % 100; // Remaining amount
//             break;
//         case 2:
//             note40 = amount / 40; // Calculate the number of 40 Rs notes
//             amount = amount % 40; // Remaining amount
//             break;
//         case 3:
//             note20 = amount / 20; // Calculate the number of 20 Rs notes
//             amount = amount % 20; // Remaining amount
//             break;
//         case 4:
//             note1 = amount; // Remaining amount is the number of 1 Rs notes
//             break;
//         default:
//             break;
//     }

//     // Output the results
//     cout << "100 Rs notes: " << note100 << endl;
//     cout << "40 Rs notes: " << note40 << endl;
//     cout << "20 Rs notes: " << note20 << endl;
//     cout << "1 Rs notes: " << note1 << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the amount you want to distribute: ";
    cin >> n; // Take user input for the amount

    int amount = n; // Assign the input to the variable `amount`

    int note100 = 0, note40 = 0, note20 = 0, note1 = 0;

    switch (1) {
        case 1:
            note100 = amount / 100; // Calculate the number of 100 Rs notes
            amount = amount % 100; // Remaining amount
            break; // Break to avoid fall-through
        case 2:
            note40 = amount / 40; // Calculate the number of 40 Rs notes
            amount = amount % 40; // Remaining amount
            break; // Break to avoid fall-through
        case 3:
            note20 = amount / 20; // Calculate the number of 20 Rs notes
            amount = amount % 20; // Remaining amount
            break; // Break to avoid fall-through
        case 4:
            note1 = amount; // Remaining amount is the number of 1 Rs notes
            break; // Break to avoid fall-through
        default:
            break;
    }

    // Output the results
    cout << "100 Rs notes: " << note100 << endl;
    cout << "40 Rs notes: " << note40 << endl;
    cout << "20 Rs notes: " << note20 << endl;
    cout << "1 Rs notes: " << note1 << endl;

    return 0;
}
