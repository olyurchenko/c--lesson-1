// #include <iostream>

// int main() {
//     std::cout << "Enter 2 numbers to multiply" << std::endl;
//     int v1 = 0, v2 = 0;
//     std::cin >> v1 >> v2;
//     std::cout << "Result " << v1*v2 << std::endl;
//     return 0;
// }
// #include <iostream>

// int main() {
//     int sum = 0, value = 0;

//     // while (std::cin >> value) {
//     //     sum += value; 
//     // }
//     for (int i = 0; std::cin >> value;)
//     {
//         std::cout << "Val is: " << value << std::endl;
//         sum+=value;
//     }
    

//     std::cout << "Sum is: " << sum << std::endl;
//     return 0;
// }


// int main() {
//     // currVal — число, яке підраховується; нові значення зчитуються у val
//     int currVal = 0, val = 0;

//     // зчитати перше число та перевірити наявність вводу
//     if (std::cin >> currVal) {
//         int cnt = 1; // лічильник для поточного значення

//         // зчитувати наступні числа
//         while (std::cin >> val) {
//             if (val == currVal) {
//                 ++cnt; // якщо те саме число — збільшити лічильник
//             } else {
//                 // якщо нове число — вивести попереднє і його кількість
//                 std::cout << currVal << " occurs "
//                           << cnt << " times" << std::endl;

//                 currVal = val; // оновити поточне число
//                 cnt = 1;       // скинути лічильник
//             }
//         }

//         // не забути вивести підсумок для останнього числа
//         std::cout << currVal << " occurs "
//                   << cnt << " times" << std::endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include "Sales_item.h"

// int main() {
//     Sales_item book;

//     // читаємо з консолі об'єкти типу Sales_item
//     while (std::cin >> book) {
//         std::cout << "You entered: " << book << std::endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include "Sales_item.h"

// int main() {
//     Sales_item currVal, val;

//     std::cout << "Enter two transactions (ISBN units price):" << std::endl;

//     if(std::cin >> currVal){
//         int cnt = 1;
//         while (std::cin >> val)
//         {
//            if (currVal.isbn() == val.isbn())
//             {
//                 ++cnt;
//             }
//             else
//             {
//                 std::cout << currVal << " occurs " << cnt << " times " << std::endl;
//                 currVal = val;
//                 cnt = 1;
//             }
//         }
//         std::cout << currVal << " occurs "<< cnt << " times " << std::endl;
        
//     }
    
//     // std::cin >> item1 >> item2;

//     // if (item1.isbn() == item2.isbn()) {
//     //     Sales_item total = item1 + item2;
//     //     std::cout << "Total transaction: " << total << std::endl;
//     // } else {
//     //     std::cerr << "❌ Error: Transactions must have the same ISBN." << std::endl;
//     // }

//     return 0;
// }

#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item total; // зберігає поточну суму для одного ISBN

    // читаємо першу транзакцію
    if (std::cin >> total) {
        Sales_item trans; // для зберігання наступної транзакції

        // читаємо всі інші транзакції
        while (std::cin >> trans) {
            if (total.isbn() == trans.isbn()) {
                total += trans; // додаємо до поточного підсумку
            } else {
                std::cout << total << std::endl; // виводимо результат
                total = trans; // оновлюємо total новим значенням
            }
        }

        std::cout << total << std::endl; // виводимо останній запис
    } else {
        std::cerr << "No data!" << std::endl;
        return -1; // повідомляємо про помилку
    }

    return 0;
}
