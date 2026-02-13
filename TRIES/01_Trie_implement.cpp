#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    char data;
    bool terminal;
    unordered_map<char, Node*> children; // store the address of the children 
    // constructer
    Node(char data) {
        this->data = data;
        this->terminal = false;
    }
    // make the char terminal
    void makeTerminal(){
        this->terminal = true;
    }
    // check the char is terminal or not 
    bool isTerminal(){
        return this->terminal == true;
    }
};
class trie {
    public: 
    Node* root;
    trie() {
        root = new Node('\0');
    }

    void insert(string word){
        Node* cur = root;
        for(int i = 0; i < word.size(); i++){
            char ch = word[i];
            if(cur->children.count(ch)){ 
            // check if the char is present in the map or not 
                cur = cur->children[ch];
            }
            else {
                // if char is not present then make the node for that char and attach and move the cur to that node
                Node* newNode = new Node(ch);
                cur->children[ch] = newNode;
                cur = newNode;
            }
        }
        cur->makeTerminal();
    }

    bool search(string word) {
        Node* cur = root;
        for(int i = 0; i < word.size(); i++){
            char ch = word[i];
            if(cur->children.count(ch)){
                // char found
                cur = cur->children[ch];
            }
            else {
                // we don't have char 
                return false;
            }
        }
        return cur->isTerminal(); // check if the char is terminal or not like may be this word is not inserted if false
    }

    bool startWith(string prefix){
        Node* cur = root;
        for(int i = 0; i < prefix.size(); i++){
            char ch = prefix[i];
            if(cur->children.count(ch)){
                // char found
                cur = cur->children[ch];
            }
            else {
                // we don't have char 
                return false;
            }
        }
        return true; // here the word present in trie mean it is not necessery that terminal should be , i have to search here only for prefix 
    }
};
int main(){

}