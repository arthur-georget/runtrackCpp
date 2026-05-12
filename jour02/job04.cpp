#include <iostream>
#include <tuple>
#include <limits>

std::tuple<float, char, float> askUserInput()
{
    float n1, n2;
    char symbol;
    while (true)
    {
        std::cout << "Veuillez fournir un nombre n1: ";
        if (!(std::cin >> n1))
        {
            std::cout << "Erreur: n1 doit être un nombre." << std::endl;
            std::cin.clear();                                                   // Reset the error flags
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the buffer
            continue;
        }
        std::cout << "Veuillez fournir un symbole (+ - / *): ";
        std::cin >> symbol;
        std::cout << "Veuillez fournir un nombre n2: ";
        if (!(std::cin >> n2))
        {
            std::cout << "Erreur: n2 doit être un nombre." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        return std::make_tuple(n1, symbol, n2);
    }
}

int runCalculator()
{
    std::tuple<float, char, float> operation;
    operation = askUserInput();
    float n1 = std::get<0>(operation);
    float n2 = std::get<2>(operation);
    char symbol = std::get<1>(operation);
    float result = 0;
    switch (symbol)
    {
    case '+':
        result = n1 + n2;
        break;
    case '-':
        result = n1 - n2;
        break;
    case '*':
        result = n1 * n2;
        break;
    case '/':
        result = n1 / n2;
        break;
    default:
        std::cout << "L'opérateur " << symbol << " n'est pas supporté." << std::endl;
        return -1;
        break;
    }
    std::cout << n1 << symbol << n2 << "=" << result << std::endl;
    return 0;
}

int main()
{
    while (true)
    {
        runCalculator();
    }
    return 0;
}