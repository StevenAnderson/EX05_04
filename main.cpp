#include <iostream> 
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
//create template function
template<typename T>
void shuffle(vector< T >& v){

 
    //for loop to cycle through vector
    for(int i=0;i<v.size();i++){
        int x=rand() % v.size();
        swap(v[i],v[x]);
    }
    
}

int main(){
    srand (time(NULL));

    //initialize a vector
    vector<int> deck;
    //put 10 values in the array
    deck.push_back(1);
    deck.push_back(2);
    deck.push_back(3);
    deck.push_back(4);
    deck.push_back(5);
    deck.push_back(6);
    deck.push_back(7);
    deck.push_back(8);
    deck.push_back(9);
    deck.push_back(10);
    //call shuffling function
    shuffle(deck);
    
    //output the shuffled deck
     for(int i=0;i<deck.size();i++){
         cout << deck[i] << endl;
     }
    
    
    return 0;
    
}