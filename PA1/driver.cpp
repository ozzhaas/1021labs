/*Kellen Haas
 *CPSC 1020
 *Assignment 1
 *2/27/20
*/




class Singleton {

    private:
        Singleton(){}
        Singleton(const Singleton& obj){}
        ~Singleton() {}

    public:
        static Singleton* instance;
        static Replicator* replicate();
        if (instance == NULL) {
            instance = new Replicator();
            return instance;
        }

};



int main () {















    return 0;
}
