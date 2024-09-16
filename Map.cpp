#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
signed main()
{
    
    // map<string,string> myDictionary;
    // myDictionary.insert(pair<string,string>("apple","apel"));
    // myDictionary.insert(pair<string,string>("guava","peyara"));
    // myDictionary.insert(pair<string,string>("orange","komola,malta"));
    // myDictionary.insert(pair<string,string>("banana","kola"));

    // myDictionary["apple"] = "Apel";
    // myDictionary.erase("orange");

    // for (auto pair : myDictionary)
    // {
    //     /* code */
    //     cout<<pair.first<<" - "<<pair.second<<endl;
    // }

    // cout<< myDictionary.size()<<endl;    

    map<string,list<string>> pokedex;

    list<string> pickachuAttacks{"thunder shock","tail whip","quick attack"};
    list<string> charmanderAttacks{"flame thower","scary face"};
    list<string> chikoritaAttacks{"razor leaf","poison powder"};

    pokedex.insert(pair<string,list<string>>("pikachu",pickachuAttacks));
    pokedex.insert(pair<string,list<string>>("charmander",charmanderAttacks));
    pokedex.insert(pair<string,list<string>>("Chikorita",chikoritaAttacks));

    for(auto pair : pokedex)
    {
        cout<<pair.first<<" - ";

        for (auto attack : pair.second)
        {
            /* code */
            cout<<attack<<", ";
        }

        cout<<endl;
        
    }

    


return 0;
}