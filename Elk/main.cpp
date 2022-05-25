#include <iostream>

class Horn {
    int hornSize = 0;
public:
    void charge(){
        if(hornSize >= 5) {
            std::cout << "Успешный чардж! :)" << std::endl;
        } else {
            std::cout << "Неуспешный чардж! :(" << std::endl;
        }
    }

    void grow(){
        hornSize++;
        std::cout << "Рост рогов!" << std::endl;
    }
};

class Hoof {
    int hoofPower = 1;
public:
    void hoofAttack(){
        if(hoofPower >= 3) {
            std::cout << "Успешная атака копытом! :)" << std::endl;
        } else {
            std::cout << "Неуспешная атака копытом! :(" << std::endl;
        }
    }

    void hoofUpdate(){
        hoofPower++;
        std::cout << "Обновка!" << std::endl;
    }
};

class Elk : public Horn, public Hoof {
    std::string name;

public:
    Elk(std::string name){
        this->name = name;
    }
};


int main() {
    Elk elk = Elk("elk1");
    elk.grow();
    elk.charge();
    elk.grow();
    elk.grow();
    elk.grow();
    elk.grow();
    elk.charge();

    elk.hoofUpdate();
    elk.hoofAttack();
    elk.hoofUpdate();
    elk.hoofUpdate();
    elk.hoofAttack();

    return 0;
}
