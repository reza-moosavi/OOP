#include <iostream>

class BMW {
    public:
        bool startEngine(){
            if (startElectronicServices() && startLightSystem()){
                std::cout << "BMW Engine started successfully." << std::endl;
                return true;
            } else {
                std::cout << "BMW Engine failed." << std::endl;
                return false;
            }
        }
    private:
        bool startElectronicServices(){
            std::cout << "BMW Electronic Service started." << std::endl;
            return true;
        }
        bool startLightSystem(){
            std::cout << "BMW Light System started." << std::endl;
            return true;
        }
};

int main(){
    BMW b;
    bool r = b.startEngine();
    return 0;
}
