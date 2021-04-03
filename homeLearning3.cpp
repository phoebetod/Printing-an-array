#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

string flowers[]{"Daisies", "Gardenias", "Lilies", "Orchids",
"Roses", "Sunflowers", "Tulips", "Dahlias", "Peonies"};

const int numFlowers{sizeof(flowers)/sizeof(flowers[0])};

int main(){
for (int i=0; i < (numFlowers) ; i++){
        std::cout << flowers[i];

        if (i < 8){
            std::cout << ", ";
        } else {
            std::cout << ".\n";
        }
    }

    return 0;
}