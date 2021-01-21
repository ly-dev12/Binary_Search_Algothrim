#include <iostream>
#include <vector>

std::vector<int> array = {1, 2, 3, 4, 5, 6};

// Declare funcs
int SearchAl(std::vector<int>& vec, int init, int end, int elem);
 
int main()
{
    //std::cout << array[1] << std::endl;
    int result = SearchAl(array, 0, array.size(), 6);
    std::cout << "Found Number..." << "\n" << "Number Found: " << result << std::endl;
    return 0;
};

int SearchAl(std::vector<int>& vec, int init, int end, int elem) 
{
    //std::cout << "tamaño: " << end << std::endl;
    int mod = ((init + end) / 2);

    if(elem == vec[mod]){
       // std::cout << "Numero encontrado: " << elem << std::endl;
        return vec[mod];
    }

    if(elem < vec[mod]) { 
         //std::cout << "es menor " << elem  << " " << vec[mod] << std::endl;
         std::vector<int> arraybackgroound;
         for(int i = 0; i <= elem; i++){
             //std::cout << vec[i] << std::endl;
             arraybackgroound.push_back(vec[i]);
         };
        //std::cout << "Arrya backgrounbd: " << arraybackgroound[2] << std::endl;
        return SearchAl(arraybackgroound, 0, arraybackgroound.size(), elem);
    };

    if(elem > vec[mod]) {
        //std::cout << "es mayor " << elem  << " " << vec[mod] << std::endl;
        std::vector<int> arraybackground;
        for(int i = vec[mod]; i <= vec.size(); i++) {
            arraybackground.push_back(vec[i]);  
        };
        return SearchAl(arraybackground, 0, arraybackground.size(), elem);
    }
    std::cout << "Lo Hizo: " << mod << std::endl;

    return 0;
};