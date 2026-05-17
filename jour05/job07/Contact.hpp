#include <string>

class Contact{
    private:
        std::string name;
        int number;
    public:
        Contact(std::string initName, int initNumber);
        Contact(const Contact &contactToCopy);
       
        ~Contact();

        std::string getName();
        void setName(std::string newName);

        int getNumber();
        void setNumber(int newNumber);

};