//
// Created by Omen on 14.02.2024.
//
int main() {
    int result = 0, members = 0, fib1 = 1, fib2 = 1;

    std::cout<<"Enter the number of members"<<std::endl;
    std::cin >> members;

    for (int i = 0; i < members; i++)
    {
        if (i == 0 || i == 1) {
            result = 1;
        } else {
            result = fib1 + result;
            fib1 = fib2;
            fib2 = result;
        }

        std::cout << result << std::endl;
    }
}