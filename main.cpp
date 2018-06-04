#include <iostream>
#include <cstring>

using namespace std;
void addEdge();
void addVertex();
void removeEdge();
void removeVertex();
void print();
void find();

struct vertex(){
    char* name;
    
};
Graph::Graph(int V){
}
int main(){
    while(true){
        cout << endl;
        cout << "Enter p to print." << endl;
        cout << "Enter ae to add an edge." << endl;
        cout << "Enter re to remove an edge." << endl;
        cout << "Enter av to add a vertex." << endl;
        cout << "Enter rv to remove a vertex." << endl;
        cout << "Enter f to find shortest path." << endl;
        cout << "> ";
        char* input = new char[100];
        cin.getline(input, 100);
        if(strcmp(input, "p")==0){
         
        }else if(strcmp(input, "ae")==0){

        }else if(strcmp(input, "re")==0){
        
        }else if(strcmp(input, "av")==0){
        
        }else if(strcmp(input, "rv")==0){
        
        }else if(strcmp(input, "f")==0){
        
        }else{
            cout << endl;
            cout<< "Not a valid input."<< endl;
        }
    }
}

void addEdge(){

}

void addVertext(){

}
